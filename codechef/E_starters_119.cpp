//  K Odd Sum

#include <iostream>
#define ll long long
#include <bits/stdc++.h>
using namespace std;
	// your code goes here
	void printSequence(ll start, ll end, ll step){
    for (ll i= start; i <= end; i+= step) {
        cout << i << " ";
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll sujit;
    cin>>sujit;
    while (sujit--) {
        ll n,k;
        cin>>n>>k;
        printSequence(1, k, 1);
        printSequence(k + 2, n, 2);
        printSequence(k + 1, n, 2);
         cout << "\n";
    }
    return 0;
}