//      (B) Laura and Operations


#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define pb     push_back
 
int main()
{
    _test
    {
        int a, b, c, x, y, z;
        cin>>a>>b>>c;
 
        int tmp;
 
        {
            x = a, y = b, z = c;
            tmp = min(y, z);
            y -= tmp;
            z -= tmp;
            x += tmp;
 
            if(max(y, z)%2)     cout<<0<<" ";
            else
            {
                if(x)
                    cout<<1<<" ";
                else
                    cout<<0<<" ";
            }
        }
 
        {
            x = b, y = a, z = c;
            tmp = min(y, z);
            y -= tmp;
            z -= tmp;
            x += tmp;
 
            if(max(y, z)%2)     cout<<0<<" ";
            else
            {
                if(x)
                    cout<<1<<" ";
                else
                    cout<<0<<" ";
            }
        }
 
        {
            x = c, y = b, z = a;
            tmp = min(y, z);
            y -= tmp;
            z -= tmp;
            x += tmp;
 
            if(max(y, z)%2)     cout<<0<<" ";
            else
            {
                if(x)
                    cout<<1<<" ";
                else
                    cout<<0<<" ";
            }
        }
 
        cout<<"\n";
    }
}
