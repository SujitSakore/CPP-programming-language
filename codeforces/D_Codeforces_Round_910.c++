//       (D) Absolute Beauty

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
 
int main()
{
    _test
    {
        int n;
        cin>>n;
 
        vector<ll int> a(n), b(n);
        for(auto &e: a)     cin>>e;
        for(auto &e: b)     cin>>e;
 
        ll int ans = 0;
 
        for(int i=0; i<n; i++)
            ans += fabs(a[i] - b[i]);
 
        ll int low=1e18;
 
        for(int i=0; i<n; i++)
        {
            if(a[i] >= b[i])
                low = min(low, a[i]);
        }
 
        ll int ex = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>low && b[i]>low)
                ex = max(ex, 2ll*(min(b[i], a[i])-low));
        }
 
        low=1e18;
 
        for(int i=0; i<n; i++)
        {
            if(a[i] <= b[i])
                low = min(low, b[i]);
        }
 
        for(int i=0; i<n; i++)
        {
            if(a[i]>low && b[i]>low)
                ex = max(ex, 2ll*(min(b[i], a[i])-low));
        }
 
        cout<<ans + ex<<"\n";
    }
}