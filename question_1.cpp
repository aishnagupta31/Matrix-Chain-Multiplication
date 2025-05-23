#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int matrixChainMultiplication(vector<int>& p, int n) {
    // dp[i][j] = minimum cost to multiply matrix i to matrix j
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int len = 2; len < n; len++) {
        for (int i = 1; i < n - len + 1; i++) {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                int cost = dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j];
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    return dp[1][n-1];
}

int main() {
    int n;
    cin >> n;
    vector<int> p(n + 1);

    for (int i = 0; i < n; ++i) {
        int row, col;
        cin >> row >> col;
        if (i == 0) p[0] = row;
        p[i + 1] = col;
    }

    cout << matrixChainMultiplication(p, n + 1) << endl;
    return 0;
}
