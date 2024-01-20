//      (D) Doremy's Connecting Plan

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define dbg(...) ; 
#define debug(...) ; 
#define crndl ; 
#endif

#define int long long

void solve () {
	
	int n, c;
	cin >> n >> c;
	
	vector<int> a (n + 1);
	int pending = 0;
	set<int> st;
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		
		if (i == 1) continue;
		
		pending += a[i];
		st.insert (i);
		
		if (a[1] + a[i] >= c * i) {
			a[1] += pending;
			pending = 0;
			st.clear();
		} 
	}
	
	if (!st.empty()) {
		cout << "NO" << endl;
		return;
	}
	
	cout << "YES" << endl;
	
}

int32_t main () {
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

