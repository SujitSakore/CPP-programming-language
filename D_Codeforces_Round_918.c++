// D. Unnatural Language Processing

#include <iostream>
#define ll long long
using namespace std;

string modifyString(const string& input) {
    string result = "";
    bool vowelFlag = false;

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'a' || input[i] == 'e') {
            result += input[i];
            vowelFlag = true;

            if (i + 2 < input.size() && (input[i + 2] == 'a' || input[i + 2] == 'e')) {
                vowelFlag = false;
                result += '.';
            }
        } else {
            result += input[i];
            if (vowelFlag) {
                result += '.';
                vowelFlag = false;
            }
        }
    }

    if (!result.empty() && result.back() == '.') {
        result.pop_back();
    }

    return result;
}

void solve() {
    ll n;
    cin >> n;

    string s;
    cin >> s;

    string modifiedString = modifyString(s);

    cout << modifiedString << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
