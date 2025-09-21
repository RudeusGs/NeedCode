public class MovieRentingSystem {
    private Dictionary<(int shop, int movie), int> price;
    private Dictionary<int, SortedSet<(int price1, int shop)>> movieNot;
    private SortedSet<(int price1, int shop, int movie)> movieOk;
    public MovieRentingSystem(int n, int[][] entries) {
        price = new Dictionary<(int, int), int>();
        movieNot = new Dictionary<int, SortedSet<(int, int)>>();
        movieOk = new SortedSet<(int, int, int)>(Comparer<(int, int, int)>.Create((a, b) =>
        {
            int cmp = a.Item1.CompareTo(b.Item1);
            if (cmp == 0) cmp = a.Item2.CompareTo(b.Item2);
            if (cmp == 0) cmp = a.Item3.CompareTo(b.Item3);
            return cmp;
        }));
        foreach (var e in entries) {
            int shop = e[0], movie = e[1], price1 = e[2];
            price[(shop, movie)] = price1;
            if (!movieNot.ContainsKey(movie)) {
                movieNot[movie] = new SortedSet<(int, int)>(Comparer<(int, int)>.Create((a, b) =>
                {
                    int cmp = a.Item1.CompareTo(b.Item1);
                    if (cmp == 0) cmp = a.Item2.CompareTo(b.Item2);
                    return cmp;
                }));
            }
            movieNot[movie].Add((price1, shop));
        }
    }
    public IList<int> Search(int movie) {
        var kq = new List<int>();
        if (!movieNot.ContainsKey(movie)) return kq;
        foreach (var (price1, shop) in movieNot[movie]) {
            kq.Add(shop);
            if (kq.Count == 5) break;
        }
        return kq;
    }
    public void Rent(int shop, int movie) {
        int price1 = price[(shop, movie)];
        movieNot[movie].Remove((price1, shop));
        movieOk.Add((price1, shop, movie));
    }
    public void Drop(int shop, int movie) {
        int price1 = price[(shop, movie)];
        movieOk.Remove((price1, shop, movie));
        movieNot[movie].Add((price1, shop));
    }
    public IList<IList<int>> Report() {
        var kq = new List<IList<int>>();
        foreach (var (price1, shop, movie) in movieOk) {
            kq.Add(new List<int>{ shop, movie });
            if (kq.Count == 5) break;
        }
        return kq;
    }
}
