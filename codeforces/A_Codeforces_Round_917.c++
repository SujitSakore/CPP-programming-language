//      A. Least Product

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int tt; cin >> tt;

    while(tt--)
    {
        int n, zero = 0, neg = 0; cin >> n;

        vector<int>a(n);
        for(auto &i : a) cin >> i;

        for(auto &i : a) 
        {
            neg += (i < 0);
            zero += (i == 0);
        }

        if(zero || neg % 2) 
        {
            cout << 0 << "\n";
        }
        else 
        {
            cout << 1 << "\n";
            int idx = 0;
            for(int i = 0; i < n; i++)
            {
                if(a[i] < 0) idx = i;
            }
            cout << idx + 1 << " " << 0 << "\n";
        }
    }
}
