//  Largest K

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int sujit;
    cin>>sujit;
    while(sujit--){
        int x,y;
        cin>>x>>y;
        int sakore=(x>1) ? min(y/(x-1),y):y;
        cout<<sakore<<endl;
    }
}
int main() {
	// your code goes here
    solve();
    return 0;
}
