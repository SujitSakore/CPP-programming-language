//International Education Day!

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int A,B,C;
    cin>>A>>B>>C;
    long long ChefSales = static_cast <long long>(A)*C;
    long long ChefinaSales = static_cast < long long >(B)*C;
    cout<<(ChefSales > ChefinaSales ? ChefSales : ChefinaSales) <<endl;
    return 0;
}
