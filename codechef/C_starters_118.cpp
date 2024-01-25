//  Join States

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
	    vector<int>a(A);
	    for(int i=0;i<A;i++){
	        cin>> a[i];
	    }
	    int S=0;
	    int P=0;
	    for (int i=0;i<A;i++){
	        S +=a[i];
	        if (S>=B){
	            P++;
	            S=0;
	        }
	        
	    }
	    cout<<P<<endl;
    }

}
