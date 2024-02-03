// Judged

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int sujit;
    cin>>sujit;
    while(sujit--){
        int R1,R2,R3,R4,R5;
        cin>>R1>>R2>>R3>>R4>>R5;
        cout<<(R1+R2+R3+R4+R5>=4 ? "YES": "NO")<<endl;
    }
    return 0;
}
