//  (C) Qingshan Loves Strings 2

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
	
	string str;
	cin >> str;
	
	vector<int> cnt (2, 0);
	for (int i = 0; i < n; i++) {
		cnt[str[i] - '0']++;
	}
	
	if (cnt[0] != cnt[1]) {
		cout << -1 << endl;
		return;
	}
	
	int low = 0, high = n - 1;
	vector<int> ans;
	
	while (low <= high) {
		if (str[low] != str[high]) {
			low++, high--;
			continue;
		}
		
		if (str[low] == '0') {
			str.insert (high + 1, "01");
			ans.push_back (high + 1);
			high += 2;
		}
		
		else {
			str.insert (low, "01");
			ans.push_back (low);
			high += 2;
		}
	}
	
	cout << ans.size() << endl;
	
	for (int x : ans) {
		cout << x << " ";
	} cout << endl;
	
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
