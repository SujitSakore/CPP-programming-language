//      D. Cyclic MEX

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define pb     push_back
 
int main()
{
    _test
    {
        int i,j,k,n;
        cin>>n;
        deque<int> que;
        for(int i=0; i<n; i++)
        {
            int z;
            cin>>z;
            que.pb(z);
        }
 
        while(que.front()!=0)
        {
            ll t = que.back();
            que.pop_back();
            que.push_front(t);
        }
 
        vector<int> a;
        while(que.size())
        {
            a.pb(que.front());
            que.pop_front();
        }
 
        vector<ll int> vals(n,n);
        stack<ll> s;
        vector<int> ind(n);
        s.push(0);
 
        for(int i=1; i<n; i++)
        {
            while(s.size() && a[s.top()]>a[i])
                s.pop();
 
            ind[i] = s.top();
            s.push(i);
        }
 
        for(int i=1; i<n; i++)
            vals[i] = vals[ind[i]] + (i-ind[i])*1ll*a[i];
 
        cout<<*max_element(vals.begin(), vals.end())<<"\n";
    }
}

