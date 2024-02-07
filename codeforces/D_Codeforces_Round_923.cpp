//D. Find the Different Ones!

#include <iostream> 
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
    int n, q;
    cin >> n;
    vector<int> a(n), nott(n);
    for (int &i : a) {
      cin >> i;
    }
    nott[n - 1] = n;
    for (int i = n - 2; i >= 0 ; i--) {
      nott[i] = (a[i] == a[i + 1] ? nott[i + 1] : i + 1);
    }
    cin >>q;
    while (q--) {
      int l, r;
      cin >> l >> r;
      --l;--r;
      if (nott[l] > r) {
        cout << -1 << ' ' << -1 << '\n';
      }
      else {
        cout << l + 1 << ' ' << 1 + nott[l] << '\n';
      }
    }
  }
  return 0;
}
