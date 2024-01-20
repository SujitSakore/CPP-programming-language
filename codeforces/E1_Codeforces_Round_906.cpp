//  (E1) Doremy's Drying Plan (Easy Version)

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
	
	int n, m, k;
	cin >> n >> m >> k;
	
	vector<pair<int,int>> a(m);
	for (int i = 0; i < m; i++) {
		cin >> a[i].first >> a[i].second;
		a[i].first--, a[i].second--;
	}
	
	sort (a.begin(), a.end());
	
	int ans = 0;
	int cnt = 0;
	
	vector<int> rains (m);
	map<pair<int,int>, int> mp;
	
	set<pair<int,int>> rainStart;
	set<pair<int,int>> rainEnd;
	
	for (int i = 0; i < m; i++) {
		rainStart.insert ({a[i].first, i});
	}
	
	int breakLoop = 0;
	
	for (int i = 0; i < n; i++) {
		
		while (!rainStart.empty()) {
			auto front = *rainStart.begin();
			int day = front.first;
			int ind = front.second;
			if (day > i) break;
			cnt++;
			rainStart.erase (front);
			rainEnd.insert ({a[ind].second + 1, ind});
		}
		
		while (!rainEnd.empty()) {
			auto front = *rainEnd.begin();
			int day = front.first;
			int ind = front.second;
			if (day > i) break;
			cnt--;
			rainEnd.erase (front);
		}
		
		if (cnt == 0) {
			ans++;
		}
		
		if (cnt == 1) {
			int ind = rainEnd.begin() -> second;
			rains[ind]++;
		}
		
		if (cnt == 2) {
			int ind1 = rainEnd.begin() -> second;
			int ind2 = rainEnd.rbegin() -> second;
			mp[{ind1, ind2}]++;
		}
	}
	
	dbg (rains);
	dbg (mp);
	
	multiset<int> st {0, 0};
	
	for (int i = 0; i < m; i++) {
		st.insert (rains[i]);
		if (st.size() > 2) {
			st.erase (st.begin());
		}
	}
	
	cnt = *st.begin() + *st.rbegin();
	
	for (auto it : mp) {
		int ind1 = it.first.first;
		int ind2 = it.first.second;
		int val = it.second;
		
		cnt = max (cnt, rains[ind1] + rains[ind2] + val);
	}
	
	ans += cnt;
	
	cout << ans << endl;
	
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

