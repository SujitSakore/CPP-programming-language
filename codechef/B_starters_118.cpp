//  Literacy Rate

#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
    int Sujit;
    cin>>Sujit;
    while (Sujit--){
        int TP,LP;
        cin>>TP>>LP;
        double LR = static_cast<double>(LP)/TP*100;
        cout<<(LR >=75? "YES":"NO")<<endl;
    }
}
