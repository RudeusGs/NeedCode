public class Solution {
    public IList<int> TwoOutOfThree(int[] nums1, int[] nums2, int[] nums3) {
        var set1 = new HashSet<int>(nums1);
        var set2 = new HashSet<int>(nums2);
        var set3 = new HashSet<int>(nums3);
        var countMap = new Dictionary<int, int>();
        void AddSet(HashSet<int> set)
        {
            foreach(var num in set)
            {
                if(!countMap.ContainsKey(num))
                    countMap[num] = 0;

                countMap[num]++;
            }
        }
        AddSet(set1);
        AddSet(set2);
        AddSet(set3);
        var result = new List<int>();
        foreach(var kvp in countMap)
        {
            if(kvp.Value >= 2)
                result.Add(kvp.Key);
        }
        return result;
    }
}