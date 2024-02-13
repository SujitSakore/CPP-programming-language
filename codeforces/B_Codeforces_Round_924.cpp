// B. Equalize

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll sujit;
    cin >> sujit;
    while (sujit--)
    {
        ll sakore;
        cin >> sakore;
        vector<ll> v(sakore);
        set<ll> s;
        for (ll i = 0; i < sakore; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        vector<ll> l;
        for (auto x : s)
        {
            l.push_back(x);
        }
        ll k = sakore;
        sakore = l.size();
        ll ans = 1;
        for (ll i = 0; i < sakore; i++)
        {
            ll en = l[i] + k - 1;
            ll it = upper_bound(l.begin(), l.end(), en) - l.begin() - i;
            ans = max(ans, it);
        }
        cout << ans << endl;
    }
}