//    (A) Two Vessels

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mod = 1000000007;
int main() 
{
    int t; cin >> t;
    while(t --) {
        int a, b, c; cin >> a >> b >> c;
        int req = (abs(a - b) + 1) / 2;
        int ans = (req + c - 1)  / c;
        cout << ans << endl;
    }
}