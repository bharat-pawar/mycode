#include <bits/stdc++.h>

using namespace std;

int Ask(int x, int y, int z) {
  cout << x + 1 << " " << y + 1 << " " << z + 1 << endl;
  int ret;
  cin >> ret;
  if (ret == -1) {
    exit(0);
  }
  return ret - 1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t, n, q;
  cin >> t >> n >> q;
  while (t--) {
    vector<int> a = {0, 1};
    for (int i = 2; i < n; i++) {
      int low = 0, high = i;
      bool done = false;
      while (low + 1 < high) {
        int mid = (low + high) >> 1;
        int v = Ask(a[mid - 1], a[mid], i);
        if (v == i) {
          a.insert(a.begin() + mid, i);
          done = true;
          break;
        }
        if (v == a[mid - 1]) {
          high = mid - 1;
        } else {
          low = mid + 1;
        }
      }
      if (!done) {
        if (low < high) {
          if (low < i - 1) {
            int v = Ask(a[low], a[low + 1], i);
            if (v == i) {
              low += 1;
            }
          } else {
            int v = Ask(a[i - 1], a[i - 2], i);
            if (v != i) {
              low += 1;
            }
          }
        }
        a.insert(a.begin() + low, i);
      }
    }
    for (int i = 0; i < n; i++) {
      if (i > 0) {
        cout << " ";
      }
      cout << a[i] + 1 << " ";
    }
    cout << endl;
    int got;
    cin >> got;
    if (got == -1) {
      exit(0);
    }
  }
  return 0;
}
