//      (A) Cover in Water

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test  int _TEST; cin>>_TEST; while(_TEST--)
#define pb     push_back
 
int main()
{
    _test
    {
        int n;
        cin>>n;
 
        string s;
        cin>>s;
 
        int ans = 0;
 
        int x = 0;
 
        vector<int> cnt;
        cnt.pb(0);
 
        for(int i=0; i<n; )
        {
            if(s[i] == '#')
            {
                i++;
                continue;
            }
 
            while(i<n && s[i]=='.')
            {
                i++;
                x++;
            }
 
            cnt.pb(x);
            x = 0;
        }
 
        sort(cnt.begin(), cnt.end());
 
        if(cnt.back() < 3)
            cout<<accumulate(cnt.begin(), cnt.end(), 0)<<"\n";
        else
            cout<<2<<"\n";
    }
}
