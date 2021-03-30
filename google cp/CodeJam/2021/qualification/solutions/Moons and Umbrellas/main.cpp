#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  for (int qq = 1; qq <= tt; qq++) {
    cout << "Case #" << qq << ": ";
    int cj, jc;
    string s;
    cin >> cj >> jc >> s;
    int n = (int) s.size();
    // c = 0, j = 1
    const int inf = (int) 1e9;
    vector<vector<int>> dp(n, vector<int>(2, inf));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 2; j++) {
        if ((j == 0 && s[i] == 'J') || (j == 1 && s[i] == 'C')) {
          continue;
        }
        if (i == 0) {
          dp[i][j] = 0;
        } else {
          for (int k = 0; k < 2; k++) {
            int ft = dp[i - 1][k];
            if (k == 0 && j == 1) {
              ft += cj;
            }
            if (k == 1 && j == 0) {
              ft += jc;
            }
            dp[i][j] = min(dp[i][j], ft);
          }
        }
      }
    }
    cout << min(dp[n - 1][0], dp[n - 1][1]) << '\n';
  }
  return 0;
}
