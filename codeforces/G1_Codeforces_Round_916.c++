//  G1. Light Bulbs (Easy Version)

#include <bits/stdc++.h>
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define pb     push_back
#define ppb    pop_back
 
int main()
{
    int MOD = 998244353;
 
    _test
    {
        int n;
        cin>>n;
 
        vector<int> c(2*n);
        for(auto &e: c)     cin>>e;
 
        vector<int> a(n+1, -1), b(n+1);
 
        for(int i=0; i<2*n; i++)
        {
            if(a[c[i]] == -1)
                a[c[i]] = i;
            else
                b[c[i]] = i;
        }
 
        ll int x=0, y=1;
 
        vector<int> cnt(2*n+1);
 
        set<int> st, st2;
        vector<int> rem;
 
        for(int i=0; i<2*n;)
        {
            st2.insert(c[i]);
            cnt[c[i]] = 1;
 
            int j = i;
 
            i++;
 
            while(i<2*n && st2.size())
            {
                if(!cnt[c[i]])
                {
                    st2.insert(c[i]);
                    cnt[c[i]] = 1;
                }
                else
                    st2.erase(c[i]);
 
                i++;
            }
 
            x++;
 
            int val = 0;
 
            for(int l=j, k, mmin, mmax; l<i; l++)
            {
                st.clear();
                for(int _=j; _<i; _++)      st.insert(_);
 
                rem.clear();
                rem.pb(l);
 
                while(rem.size())
                {
                    mmin = a[c[rem.back()]];
                    mmax = b[c[rem.back()]];
                    rem.ppb();
 
                    if(mmin > mmax)     swap(mmin, mmax);
 
                    while(st.lower_bound(mmin)!=st.end() && *st.lower_bound(mmin)<=mmax)
                    {
                        k = *st.lower_bound(mmin);
                        st.erase(k);
                        rem.pb(k);
                    }
                }
 
                val += (st.size() == 0);
            }
 
            (y *= val) %= MOD;
        }
 
        cout<<x<<" "<<y<<"\n";
    }
}
