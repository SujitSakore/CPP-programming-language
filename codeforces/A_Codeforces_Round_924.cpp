// A. Rectangle Cutting

#include<bits/stdc++.h>
using namespace std;

void secret(){
    int l, w;
    cin >> l >> w;
    int hl = w, hw = l;
    if (l % 2 == 0)
        hl = l / 2;
    if (w % 2 == 0)
        hw = w / 2;
    if (hl != w || hw != l) 
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
}
int main(){
    int sujit;
    cin >> sujit;
    while (sujit--){
        secret();
    }
    return 0;
}