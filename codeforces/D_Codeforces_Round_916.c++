//  D. Three Activities

#include <bits/stdc++.h>
 
using namespace std;
 
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define ff     first
#define ss     second
 
int main()
{
    _test
    {
        int n;
        cin>>n;
 
        vector<int> a(n), b(n), c(n);
        for(auto &e: a)     cin>>e;
        for(auto &e: b)     cin>>e;
        for(auto &e: c)     cin>>e;
 
        multiset<pair<int, int>> x, y;
 
        for(int i=0; i<n; i++)
        {
            x.insert({b[i], i});
            y.insert({c[i], i});
        }
 
        int ans = 0;
 
        for(int i=0; i<n; i++)
        {
            x.erase({b[i], i});
            y.erase({c[i], i});
 
            if((*x.rbegin()).ss == (*y.rbegin()).ss)
                ans = max({ans, a[i] + (*(--x.end())).ff + (*(--(--y.end()))).ff,
                                a[i] + (*(--y.end())).ff + (*(--(--x.end()))).ff});
            else
                ans = max(ans, a[i] + (*(--x.end())).ff + (*(--y.end())).ff);
 
            x.insert({b[i], i});
            y.insert({c[i], i});
        }
 
        cout<<ans<<"\n";
    }
}
