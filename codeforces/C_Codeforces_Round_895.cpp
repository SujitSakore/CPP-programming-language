//(C) Non-coprime Split

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
        ll l, r; cin >> l >> r;
        if(l == r && l % 2) {
            bool sac = false;
            for(int i = 2; i * i <= l; i++) {
                if(l % i == 0) {
                    cout << i <<" " << l - i << endl;
                    sac = true;
                    break;
                }
            }
            if(!sac) {
                cout << -1 << endl;
            }
            continue;
        }
        
        l = l / 2 + l % 2;
        r =  r / 2 ;
        
        ll ans = -1;
        if(r == l && l != 1) {
            ans = l;
        } else if(r > l) {
            ans = l + 1;
        }
        if(ans != -1) {
             cout << ans <<" " << ans << endl;
        }
        else {
            cout << ans << endl;
        }
    }
}
