//  E2. Game with Marbles (Hard Version)

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define ss     second
 
int main()
{
    _test
    {
        int n;
        cin>>n;
 
        vector<int> a(n), b(n);
        for(auto &e: a)     cin>>e;
        for(auto &e: b)     cin>>e;
 
        multiset<pair<int, int>> x;
 
        for(int i=0; i<n; i++)
            x.insert({a[i]+b[i], i});
 
        int f = 1;
 
        ll int ans = 0;
 
        while(x.size())
        {
            int i = (*x.rbegin()).ss;
 
            if(f)
            {
                ans += a[i]-1;
                x.erase({a[i]+b[i], i});
            }
            else
            {
                ans -= b[i]-1;
                x.erase({a[i]+b[i], i});
            }
 
            f ^= 1;
        }
 
        cout<<ans<<"\n";
    }
}