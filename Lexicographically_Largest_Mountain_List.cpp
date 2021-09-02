vector<int> solve(int n, int lower, int upper) {
     int num = upper - lower + 1;
    if (2 * num - 1 < n) return {};

    vector<int> ans;
    ans.push_back(upper - 1);
    ans.push_back(upper);
    int j = 2, start = upper - 1;
    for (int i = upper - 1; j < n && i >= lower; i--, j++) {
        ans.push_back(i);
    }
    while (ans.size() < n) {
        ans.insert(ans.begin() + 0, --start);
    }
    return ans;
}