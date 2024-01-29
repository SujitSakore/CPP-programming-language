//  Xorry 1

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
    int Sujit;
    cin>>Sujit;
    while (Sujit > 0) {
        int Sakore;
        cin>>Sakore;
        int nearest_power_of_2 = pow(2, static_cast<int>(log2(Sakore)));
        int A = Sakore - nearest_power_of_2;
        int B = nearest_power_of_2;
        cout<<A<<" "<<B<<endl;
        Sujit--;
    }
    return 0;
}