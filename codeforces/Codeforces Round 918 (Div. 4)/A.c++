//     A. Odd One Out
//            time limit per test1 second
//            memory limit per test256 megabytes
//            input : standard input
//            output : standard output
//            You are given three digits a, b, c. Two of them are equal, but the third one is different from the other two.
//     Find the value that occurs exactly once.


#include <iostream>
#define ll long long

using namespace std;

void findUnique(ll a, ll b, ll c) {
    if (a == b) {
        cout << c << endl;
    } else if (c == b) {
        cout << a << endl;
    } else if (a == c) {
        cout << b << endl;
    }
}

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        findUnique(a, b, c);
    }

    return 0;
}
