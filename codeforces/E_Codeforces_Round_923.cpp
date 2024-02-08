// E. Klever Permutation

#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt = 1;;
  cin >> tt;;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> a(k);
    a[0] = n; 
    a[1] = 1;
    for (int i = 0; i < k; i++) {
      int sign = (i % 2 == 0 ? -1 : 1), move = 0, mn = n + 1, mx = 0;
      for (int j = i; j < n; j += k) {
        v[j] = a[i] + sign * move++;
        mx = max(mx, v[j]);
        mn = min(mn, v[j]);
      }
      if (sign == -1) {
        if (i + 2 < k) {
          a[i + 2] = mn - 1;
        }
      }
      else {
        if (i + 2 < k) {
          a[i + 2] = mx + 1;
        }
      }
    }
    for (int &it : v) {
      cout << it << ' ';
    }
    cout << '\n';
  }
  return 0;
}