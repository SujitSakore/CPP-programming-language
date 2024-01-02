//  F. Greetings

#include <bits/stdc++.h> 
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp> 

using namespace std; 
using namespace __gnu_pbds; 

#define int long long 
#define pii pair<int, int> 
#define pb push_back 
#define F first 
#define S second 
#define pyes cout << "Yes\n" 
#define pno cout << "No\n" 

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set; 

void solve() { 
    int n; 
    cin >> n; 

    vector<pii> v(n); 
    for (int i = 0; i < n; i++) { 
        cin >> v[i].F >> v[i].S; 
    } 

    sort(v.begin(), v.end()); 
    ordered_set s; 
    s.insert(v[0].S); 
    int ans = 0; 

    for (int i = 1; i < n; i++) { 
        ans += i - s.order_of_key(v[i].S); 
        s.insert(v[i].S); 
    } 

    cout << ans << endl; 
} 

signed main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t = 1; 
    cin >> t; 

    while (t--) { 
        solve(); 
    } 

    return 0; 
}
