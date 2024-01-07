//  B. Erase First or Second Letter

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
        int n; cin >> n;
        string s; cin >> s;
        vector<int>f(26);

        long long answer = 0;

        for(int i = 0; i < n; i++)
        {
            if(!f[s[i] - 'a'])
            {
                f[s[i] - 'a'] = 1;
                answer += (n - i);
            }
        }

        cout << answer << "\n";
    }
}
