//  A.Valentines Contest

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool valentine(int sujit){
    (sujit-120)%5==0;
}

int main() {
	// your code goes here
    int sujit;
    cin>>sujit;
        if (valentine(sujit)){
            cout<<"Likely"<<endl;
        }else{
            cout<<"Unlikely"<<endl;
        }
    return 0;
}
