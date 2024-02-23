//  (B) The Corridor or There and Back Again

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mod = 1000000007;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ans = 1e18;
        for(int i = 1; i <= n; i++) {
            ll d, s; cin >> d >> s;
            ans = min(ans, (2 * d + s - 1) / 2);
        }
        cout << ans << '\n';
    }
}