//B. Following the String

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int sujit;
    cin>>sujit;
    while(sujit--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }

        map<int,vector<char>>m;
        string s="";
        int cnt = 0;
        for(auto c:v){
            if(m[c].size()==0){
                m[c].push_back('a');
                s+='a';
            }
            else{
                m[c].push_back(m[c][m[c].size()-1]+1);
                s+=m[c][m[c].size()-1];
            }
        }
        cout<<s<<endl;
    }
}