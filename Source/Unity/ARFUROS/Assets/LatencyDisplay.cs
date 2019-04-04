using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using RosSharp.RosBridgeClient;

public class LatencyDisplay : MonoBehaviour {
    public LaserScanReceiver laser;
    public PoseArrayReceiver localization;
    public OccupancyGridReceiver costmap;
    public PathReceiver path;
    public Text tex;

    float laser_latency = -1;
    float path_latency = -1;
    float loca_latency = -1;
    float cost_latency = -1;

	void Update () {
        updateLatencies();
        displayText();
	}

    void updateLatencies()
    {
        if (laser.rawMessage != null)
        {
            laser_latency = findLatency(laser.rawMessage.header.stamp);
        }

        if (localization.rawMessage != null)
        {
            loca_latency = findLatency(localization.rawMessage.header.stamp);
        }

        if (costmap.rawMessage != null)
        {
            cost_latency = findLatency(costmap.rawMessage.header.stamp);
        }

        if (path.rawMessage != null)
        {
            path_latency = findLatency(path.rawMessage.header.stamp);
        }
    }

    void displayText()
    {
        tex.text = "Laser Scan: " + laser_latency.ToString() + "\n  Path: " + path_latency.ToString() + "\n Localization: " + loca_latency.ToString() + "\n Costmap: " + cost_latency.ToString();
    }

    float findLatency(StandardTime tim)
    {
        long msg_time = tim.secs + (tim.nsecs / 1000);
        long latency = UnixTimeNow() - msg_time;

        return (float)latency;
    }

    public long UnixTimeNow()
    {
        var timeSpan = (System.DateTime.UtcNow - new System.DateTime(1970, 1, 1, 0, 0, 0));
        return (long)timeSpan.TotalMilliseconds;
    }
}