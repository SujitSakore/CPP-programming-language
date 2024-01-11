//      C. Largest Subsequence

#include <bits/stdc++.h>
 
using namespace std;
 
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
 
int main()
{
    _test
    {
        int n;
        string s;
        cin >> n >> s;
 
        vector<int> cnt(26);
        for(auto e : s) 
            cnt[e - 'a']++;
 
        vector<int> v(n);
 
        string t;
        for(int i = 0; i < n; i++)
        {
            char mmax = 'a';
            for(char ch = 'a'; ch <= 'z'; ch++)
            {
                if(cnt[ch - 'a'] > 0)
                    mmax = ch;
            }
 
            if(s[i] == mmax)
            {
                t.push_back(mmax);
                v[i] = 1;
            }
 
            cnt[s[i] - 'a']--;
        }
 
        int ans = 0;
        for(int i = 25; i >= 0; i--)
        {
            if(count(t.begin(),t.end(),i + 'a') > 0)
            {
                ans -= count(t.begin(),t.end(),i + 'a');
                break;
            }
        }
 
        for(int i = 0; i < n; i++)
        {
            if(v[i])
            {
                ans++;
                s[i] = t.back();
                t.pop_back();
            }
        }
 
        if(is_sorted(s.begin(),s.end()))
            cout<<ans<<"\n";
        else
            cout<<-1<<"\n";
    }
}

