//      (B) Milena and Admirer

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
        
        vector<ll> a(n);
        
        for(int i=0; i<n; i++)
            cin >> a[i];
        
        ll prev = INT_MAX;
        ll ans = 0;
        
        for(int i=n-1; i>=0; i--)
        {
            if(a[i] <= prev)
                prev = a[i];
            else
            {
                ll sa = (a[i] + prev - 1) / prev;
                ans += sa - 1;
                prev = a[i] / sa;
            }
        }
        
        cout<<ans<<"\n";
    }
}
