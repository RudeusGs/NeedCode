using System;
using System.Collections.Generic;

public class Router
{
    private int memoryLimit;
    private Queue<Packet> packetQueue;
    private HashSet<string> packetSet;
    private Dictionary<int, List<int>> destinationMap;
    public Router(int memoryLimit)
    {
        this.memoryLimit = memoryLimit;
        packetQueue = new Queue<Packet>();
        packetSet = new HashSet<string>();
        destinationMap = new Dictionary<int, List<int>>();
    }

    public bool AddPacket(int source, int destination, int timestamp)
    {
        string key = $"{source}-{destination}-{timestamp}";
        if (packetSet.Contains(key))
            return false;
        if (packetQueue.Count >= memoryLimit)
        {
            Packet oldest = packetQueue.Dequeue();
            string oldKey = $"{oldest.Source}-{oldest.Destination}-{oldest.Timestamp}";
            packetSet.Remove(oldKey);
            var list = destinationMap[oldest.Destination];
            list.RemoveAt(0);
        }
        Packet newPacket = new Packet(source, destination, timestamp);
        packetQueue.Enqueue(newPacket);
        packetSet.Add(key);
        if (!destinationMap.ContainsKey(destination))
            destinationMap[destination] = new List<int>();
        destinationMap[destination].Add(timestamp);
        return true;
    }

    public int[] ForwardPacket()
    {
        if (packetQueue.Count == 0)
            return new int[0];
        Packet pkt = packetQueue.Dequeue();
        string key = $"{pkt.Source}-{pkt.Destination}-{pkt.Timestamp}";
        packetSet.Remove(key);
        var list = destinationMap[pkt.Destination];
        list.RemoveAt(0);
        return new int[] { pkt.Source, pkt.Destination, pkt.Timestamp };
    }

    public int GetCount(int destination, int startTime, int endTime)
    {
        if (!destinationMap.ContainsKey(destination))
            return 0;

        var list = destinationMap[destination];
        int left = LowerBound(list, startTime);
        int right = UpperBound(list, endTime);
        return right - left;
    }
    private int LowerBound(List<int> list, int target)
    {
        int l = 0, r = list.Count;
        while (l < r)
        {
            int m = l + (r - l) / 2;
            if (list[m] >= target)
                r = m;
            else
                l = m + 1;
        }
        return l;
    }
    private int UpperBound(List<int> list, int target)
    {
        int l = 0, r = list.Count;
        while (l < r)
        {
            int m = l + (r - l) / 2;
            if (list[m] > target)
                r = m;
            else
                l = m + 1;
        }
        return l;
    }

    private class Packet
    {
        public int Source;
        public int Destination;
        public int Timestamp;
        public Packet(int s, int d, int t)
        {
            Source = s;
            Destination = d;
            Timestamp = t;
        }
    }
}

