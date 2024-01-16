//      (C) Colorful Grid

#include <bits/stdc++.h>
 
using namespace std;
 
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
 
int main()
{
    _test
    {
        int n, m, k;
        cin>>n>>m>>k;
 
        if((n+m)%2 != k%2 || n+m-2>k)
        {
            cout<<"No\n";
            continue;
        }
 
        string x, y;
        while(x.size() < m-1)    x += 'R';
        while(y.size() < m)      y += 'R';
 
        vector<string> r(n, x), c(n-1, y);
 
        r[0][0] = r[1][0] = 'R';
        c[0][0] = c[0][1] = 'B';
 
        int f = 1;
 
        for(int i=1; i<n-1; i++)
        {
            if(f)       c[i][0] = 'R';
            else        c[i][0] = 'B';
 
            f ^= 1;
        }
 
        for(int j=0; j<m-1; j++)
        {
            if(f)       r[n-1][j] = 'R';
            else        r[n-1][j] = 'B';
 
            f ^= 1;
        }
 
        if(r[n-1][m-3] == 'R')
            c[n-2][m-1] = c[n-2][m-2] = 'B', r[n-2][m-2]='R';
        else
            c[n-2][m-1] = c[n-2][m-2] = 'R', r[n-2][m-2]='B';
 
        cout<<"Yes\n";
        for(auto e: r)
        {
            for(auto _: e)
                cout<<_<<" ";
            cout<<"\n";
        }
        for(auto e: c)
        {
            for(auto _: e)
                cout<<_<<" ";
            cout<<"\n";
        }
    }
}
