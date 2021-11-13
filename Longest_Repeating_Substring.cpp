int solve(string s) {
    int n = s.size();
    int res = 0;
    for (int k = 0; k < n; ++k) {
        vector<int> pi(n);
        for (int i = k + 1; i < n; ++i) {
            int j = pi[i - 1];
            if (j + k > 0 && s[i] != s[k + j]) j = pi[k + j - 1];
            if (s[i] == s[k + j]) pi[i] = j + 1;
            res = max(res, pi[i]);
        }
    }
    return res;
}