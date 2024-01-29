/// Subset GCD

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int Sujit;
	cin>>Sujit;
	while(Sujit--){
	    int A,B;
	    cin>>A>>B;
	    int step = A/B;
	    int current = step, count=0;
	    while (count<B){
	        cout<<current<<" ";
	        current += step;
	        count++;
	    }
	    cout<<endl;
	}
	return 0;

}
