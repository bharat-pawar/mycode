#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  for (int qq = 1; qq <= tt; qq++) {
    cout << "Case #" << qq << ": ";
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      --a[i];
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i; j < n; j++) {
        if (a[j] == i) {
          ans += j - i + 1;
          reverse(a.begin() + i, a.begin() + j + 1);
          break;
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
