    bool solve(vector<vector<int>>& a) {
    int n = 9;
    vector<vector<int>> row(n, vector<int>(n));
    vector<vector<int>> col(n, vector<int>(n));
    vector<vector<int>> box(n, vector<int>(n));
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++) {
            if (a[i][j] < 1 || a[i][j] > 9) return false;
            if (row[i][a[i][j] - 1] || col[a[i][j] - 1][j] || box[i / 3 * 3 + j / 3][a[i][j] - 1])
                return false;
            row[i][a[i][j] - 1] = col[a[i][j] - 1][j] = box[i / 3 * 3 + j / 3][a[i][j] - 1] = 1;
        }
    return true;
}
