//  (B) Qingshan Loves Strings

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define dbg(...) ; 
#define debug(...) ; 
#define crndl ; 
#endif

void solve () {
	
	int n, m;
	cin >> n >> m;
	
	string S, T;
	cin >> S >> T;
	
	bool ok = true;
	
	for (int i = 0; i < m - 1; i++) {
		if (T[i] == T[i + 1]) {
			ok = false;
			break;
		}
	}
	
	if (T[0] != T[m - 1]) {
		ok = false;
	}
	
	char edge = T[0];
	
	for (int i = 0; i < n - 1; i++) {
		if (S[i] == S[i + 1]) {
			if (!ok || S[i] == edge) {
				cout << "NO" << endl;
				return;
			}
		}
	}
	
	cout << "YES" << endl;
	
}

int main () {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("io/input.txt", "r", stdin);
    freopen("io/output.txt", "w", stdout);
    freopen("io/error.txt", "w", stderr);
    #endif
	
	int t = 1;
	cin >> t;
	
	for (int tc = 1; tc <= t; tc++) {
		debug (Testcase, tc);
		solve();
		debug ();
	}
	
	return 0;
}

