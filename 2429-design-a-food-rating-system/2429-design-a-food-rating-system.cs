public class FoodRatings
{
    private Dictionary<string,(string cuisine, int rating)> foodInfo;
    private Dictionary<string,SortedSet<(int rating, string name)>> cuisineFoods;
    public FoodRatings(string[] foods, string[] cuisines, int[] ratings)
    {
        foodInfo = new Dictionary<string,(string cuisine, int rating)>();
        cuisineFoods = new Dictionary<string, SortedSet<(int rating, string name)>>();
        for(int i = 0; i < foods.Length; i++)
        {
            string food = foods[i];
            string cuisine = cuisines[i];
            int rating = ratings[i];
            foodInfo[food] = (cuisine, rating);
            if(!cuisineFoods.ContainsKey(cuisine))
            {
                //sortedset giam dan, if == then abcdef....
                cuisineFoods[cuisine] = new SortedSet<(int, string)>(
                    Comparer<(int, string)>.Create((a, b) =>
                    {
                        if (a.Item1 != b.Item1)
                            return b.Item1.CompareTo(a.Item1); //giam dan
                        return a.Item2.CompareTo(b.Item2);     //abcdef....
                    })
                );
            }
            cuisineFoods[cuisine].Add((rating, food));
        }
    }

    public void ChangeRating(string food, int newRating)
    {
        var (cuisine, old) = foodInfo[food];
        cuisineFoods[cuisine].Remove((old, food));
        cuisineFoods[cuisine].Add((newRating, food));
        foodInfo[food] = (cuisine, newRating);
    }

    public string HighestRated(string cuisine)
    {
        return cuisineFoods[cuisine].Min.Item2;
    }
}
