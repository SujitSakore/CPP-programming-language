//     A. Problemsolving Log

#include <bits/stdc++.h>
 
using namespace std;
 
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
 
int main()
{
    _test
    {
        int n;
        string s;
        cin>>n>>s;
 
        int ans=0, x=1;
 
        for(char ch='A'; ch<='Z'; ch++)
        {
            ans += (count(s.begin(), s.end(), ch) >= x);
            x++;
        }
 
        cout<<ans<<"\n";
    }
}
