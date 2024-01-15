//      (D) Small GCD

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define pb     push_back
 
int main()
{
    int N = 1e5 + 10;
 
    vector<vector<int>> div(N);
    for(int i=1; i<N; i++)
    {
        for(int j=i; j<N; j+=i)
            div[j].pb(i);
    }
 
    for(int i=1; i<N; i++)
        sort(div[i].rbegin(), div[i].rend());
 
    vector<ll int> tmp(N), cnt(N);
 
    _test
    {
        int n;
        cin>>n;
 
        vector<int> a(n);
        for(auto &e: a)     cin>>e;
 
        sort(a.begin(), a.end());
 
        ll int ans = 0;
        ll int rem = n;
 
        for(auto e: a)
        {
            rem--;
            ll int val;
 
            for(auto d: div[e])
            {
                val = cnt[d] - tmp[d];
 
                for(auto d2: div[d])
                    tmp[d2] += val;
 
                ans += d*1ll*val*1ll*rem;
            }
 
            for(auto d: div[e])
            {
                for(auto d2: div[d])
                    tmp[d2] = 0;
            }
 
            for(auto d: div[e])
                cnt[d]++;
        }
 
        for(auto e: a)
        {
            for(auto d: div[e])
                cnt[d] = 0;
        }
 
        cout<<ans<<"\n";
    }
}