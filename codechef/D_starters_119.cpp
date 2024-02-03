// Another Good String

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
    vector<int> longest_beautiful_substring(int n, string s,vector<string>& queries){
    int ct =0, mxc =0;
    vector<int> res;
    for (int i=0; i<n; ++i) {
        ct=(i>0&&s[i]==s[i-1]) ? ct+1:1;
        mxc=max(mxc, ct);
    }
    res.push_back(mxc);
    for (const auto& q : queries) {
        s += q;
        ct =(s.back()==s[s.length() - 2]) ? ct + 1 : 1;
        mxc =max(mxc, ct);
        res.push_back(mxc);
    }
    return res;
}
int main() {
	// your code goes here
    int sujit;
    cin>>sujit;
    while (sujit--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<string>queries(q);
        for (int i=0; i<q; ++i) {
            cin>>queries[i];
        }
        vector<int> res = longest_beautiful_substring(n, s, queries);
        for (int val : res) {
            cout<<val<<' ';
        }
        cout<<endl;
    }
    return 0;
}