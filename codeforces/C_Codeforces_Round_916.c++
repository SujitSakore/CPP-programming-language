//  C. Quests

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
 
int main()
{
    _test
    {
        int n, k;
        cin>>n>>k;
 
        vector<ll int> a(n), b(n);
        for(auto &e: a)     cin>>e;
        for(auto &e: b)     cin>>e;
 
        ll int ans = 0;
        ll int val = 0;
        ll int mmax = 0;
 
        for(int i=0; i<min(n, k); i++)
        {
            val += a[i];
            mmax = max(mmax, b[i]);
            ans = max(ans, val + mmax*1ll*(k-i-1));
        }
 
        cout<<ans<<"\n";
    }
}
