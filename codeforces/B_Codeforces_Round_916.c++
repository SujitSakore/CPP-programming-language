//  B. Preparing for the Contest

#include <bits/stdc++.h>
using namespace std;
 
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define pb     push_back
 
int main()
{
    _test
    {
        int n, k;
        cin>>n>>k;
 
        vector<int> ans;
 
        for(int i=1; i<=k; i++)
            ans.pb(i);
 
        for(int i=n; i>k; i--)
            ans.pb(i);
 
        for(auto &e: ans)       cout<<e<<" ";
        cout<<"\n";
    }
}
