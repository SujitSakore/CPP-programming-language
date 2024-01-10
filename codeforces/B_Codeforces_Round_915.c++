//      B. Begginer's Zelda

#include <bits/stdc++.h>
using namespace std;
 
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
 
int main()
{
    _test
    {
        int n;
        cin >> n;
 
        vector<int> indegree(n);
 
        for(int i=0; i<n-1; i++)
        {
            int u, v;
            cin >> u >> v;
            indegree[u-1]++;
            indegree[v-1]++;
        }
 
        int ans = count(indegree.begin(), indegree.end(), 1);
 
        cout << (ans+1)/2 << "\n";
    }
}
