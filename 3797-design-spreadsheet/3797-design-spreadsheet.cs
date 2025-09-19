public class Spreadsheet
{
    private int rows;
    private Dictionary<string, int> cells;
    public Spreadsheet(int rows)
    {
        this.rows = rows;
        cells = new Dictionary<string, int>();
    }
    public void SetCell(string cell, int value)
    {
        cells[cell] = value;
    }
    public void ResetCell(string cell)
    {
        if (cells.ContainsKey(cell))
            cells.Remove(cell);
    }
    public int GetValue(string formula)
    {
        string expr = formula.Substring(1);
        string[] parts = expr.Split('+');
        int sum = 0;
        foreach (var part in parts)
        {
            string token = part.Trim();
            int value;
            if (int.TryParse(token, out value))
            {
                sum += value;
            }
            else
            {
                cells.TryGetValue(token, out value);
                sum += value;
            }
        }
        return sum;
    }
}
