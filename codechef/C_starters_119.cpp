//  Cookie Day

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int sujit;
    cin>>sujit;
    while(sujit--){
        int n,k;
        cin>>n>>k;
        vector <int> a(n);
        vector <int> ans;
        int count =0;

        for (int i = 0; i < n; ++i) {
            cin>>a[i];
            if (k<=a[i]) {
                ans.push_back(a[i] % k);
                count++;
            }
        }
        if (count<1) {
            cout<<"-1"<<endl;
        } else {
            sort(ans.begin(), ans.end());
            cout<<ans[0]<<endl;
        }
    }
    return 0;
}
