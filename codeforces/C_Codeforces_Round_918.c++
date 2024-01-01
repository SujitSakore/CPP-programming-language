//  C. Can I Square?
//            time limit per test1 second
//            memory limit per test256 megabytes
//            input : standard input
//            output : standard output
//            Calin has n buckets, the i-th of which contains ai wooden squares of side length 1.
//       Can Calin build a square using all the given squares?

#include <iostream>
#include <cmath>

using namespace std;
#define ll long long

void solve() {
    ll n, a, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
    }

    ll k = sqrt(sum);

    if (k * k == sum) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        solve();
        cout << "\n";
    }

    return 0;
}
