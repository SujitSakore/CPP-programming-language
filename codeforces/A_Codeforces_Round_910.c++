//      (A) Milica and String

#include <bits/stdc++.h>
 
using namespace std;
 
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
 
int main()
{
    _test
    {
        int n, k;
        string s;
        cin>>n>>k>>s;
 
        if(count(s.begin(), s.end(), 'B') == k)
        {
            cout<<0<<"\n";
            continue;
        }
 
        int x = count(s.begin(), s.end(), 'B');
        int a=0, b=0;
 
        for(int i=0; i<n; i++)
        {
            a += (s[i] == 'A');
            b += (s[i] == 'B');
 
            if(k-x == a)
            {
                cout<<1<<"\n"<<i+1<<" B\n";
                break;
            }
 
            if(x-k == b)
            {
                cout<<1<<"\n"<<i+1<<" A\n";
                break;
            }
        }
    }
}
