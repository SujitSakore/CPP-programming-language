//      (C) Anji's Binary Tree

#include <bits/stdc++.h>
 
using namespace std;
 
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define pb     push_back
 
int main()
{
    _test
    {
        int n;
        cin>>n;
 
        string s;
        cin>>s;
 
        vector<int> l(n), r(n);
 
        for(int i=0; i<n; i++)
            cin>>l[i]>>r[i];
 
        vector<int> ans(n);
 
        vector<int> ll(n, -1), rr(n, -1);
 
        for(int i=0; i<n; i++)
        {
            if(l[i]==0 && r[i]==0)
                ans[i] = 0;
            else
                ans[i] = 1e9;
 
            if(l[i])
                ll[l[i]-1] = i;
            if(r[i])
                rr[r[i]-1] = i;
        }
 
        set<pair<int, int>> sp;
 
        for(int i=0; i<n; i++)
            sp.insert({ans[i], i});
 
        while(sp.size())
        {
            auto [x, i] = *sp.begin();
            sp.erase(sp.begin());
 
            if(x > ans[i])      continue;
 
            if(ll[i] != -1)
            {
                if(ans[ll[i]] > x+(s[ll[i]]!='L'))
                {
                    ans[ll[i]] = x+(s[ll[i]]!='L');
                    sp.insert({ans[ll[i]], ll[i]});
                }
            }
 
            if(rr[i] != -1)
            {
                if(ans[rr[i]] > x+(s[rr[i]]!='R'))
                {
                    ans[rr[i]] = x+(s[rr[i]]!='R');
                    sp.insert({ans[rr[i]], rr[i]});
                }
            }
        }
 
        cout<<ans[0]<<"\n";
    }
}
