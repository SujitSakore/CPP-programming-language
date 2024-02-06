//A. Make it White

#include <iostream>
#include <string>
using namespace std;

int main() {
    int sujit;
    cin >> sujit;

    while (sujit--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int blackCount = 0;

        for (char c : s) {
            if (c == 'B') {
                blackCount++;
            }
        }

        int firstBlackIndex = -1;
        int lastBlackIndex = -1;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'B') {
                firstBlackIndex = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == 'B') {
                lastBlackIndex = i;
                break;
            }
        }
        int consecutiveBlackCount = (lastBlackIndex - firstBlackIndex) + 1;

        cout << consecutiveBlackCount << endl;
    }

    return 0;
}