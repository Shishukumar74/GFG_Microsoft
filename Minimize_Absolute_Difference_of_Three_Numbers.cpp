int solve(vector<int>& a, vector<int>& b, vector<int>& c) {
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    int ans = INT_MAX, m = a.size(), n = c.size();
    for (int x : b) {
        int i = lower_bound(a.begin(), a.end(), x) - a.begin();
        int j = lower_bound(c.begin(), c.end(), x) - c.begin();
        int y = min(abs(x - a[min(m, i)]), abs(x - a[max(0, i - 1)]));
        int z = min(abs(x - c[min(n, j)]), abs(x - c[max(0, j - 1)]));
        ans = min(ans, y + z);
    }
    return ans;
}