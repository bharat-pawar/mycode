#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  for (int qq = 1; qq <= tt; qq++) {
    cout << "Case #" << qq << ": ";
    int n, c;
    cin >> n >> c;
    vector<int> p(n - 1, 1);
    c -= n - 1;
    for (int i = n - 2; i >= 0; i--) {
      for (int j = 0; j < n - 1 - i; j++) {
        if (c > 0) {
          p[i] += 1;
          c -= 1;
        }
      }
    }
    if (c != 0) {
      cout << "IMPOSSIBLE" << '\n';
      continue;
    }
    vector<int> a(n);
    iota(a.begin(), a.end(), 1);
    for (int i = n - 2; i >= 0; i--) {
      reverse(a.begin() + i, a.begin() + i + p[i]);
    }
    for (int i = 0; i < n; i++) {
      if (i > 0) {
        cout << " ";
      }
      cout << a[i];
    }
    cout << '\n';
  }
  return 0;
}
