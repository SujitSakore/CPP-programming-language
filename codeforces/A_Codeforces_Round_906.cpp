//	(A) Doremy's Paint 3

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
	
	int n;
	cin >> n;
	
	vector<int> a (n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	sort (a.begin(), a.end());
	
	vector<int> b (n);
	int low = 0, high = n - 1;
	
	auto check = [&] (vector<int> &a) {
		int sum = a[0] + a[1];
		for (int i = 0; i < n - 1; i++) {
			if (a[i] + a[i + 1] != sum) {
				return false;
			}
		}
		return true;
	};
	
	for (int i = 0; i < n; i++) {
		if (i & 1) b[i] = a[high--];
		else b[i] = a[low++];
	}
	
	dbg (b);
	
	if (check (b)){
		cout << "YES" << endl;
		return;
	}
	
	low = 0, high = n - 1;
	for (int i = 0; i < n; i++) {
		if (i & 1) b[i] = a[low++];
		else b[i] = a[high--];
	}
	
	dbg (b);
	
	if (check(b)) {
		cout << "YES" << endl;
		return;
	}
	
	cout << "NO" << endl;
	
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

