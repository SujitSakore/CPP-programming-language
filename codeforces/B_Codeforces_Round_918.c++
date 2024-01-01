//  B. Not Quite Latin Square
//        time limit per test1 second
//        memory limit per test256 megabytes
//        input : standard input
//        output : standard output
//        A Latin square is a 3×3 grid made up of the letters A, B, and C such that:
//                in each row, the letters A, B, and C each appear once, and
//                in each column, the letters A, B, and C each appear once.
//        For example, one possible Latin square is shown below.
//            |A  B  C|
//            |C  A  B|
//            |B  C  A|
//        You are given a Latin square, but one of the letters was replaced with a question mark ?. Find the letter that was replaced.

#include <iostream>
#include <vector>

using namespace std;
#define ll long long

char findMissingCharacter(const string &str) {
    int sum = 0;
    int questionMarks = 0;

    for (char ch : str) {
        if (ch == '?') {
            questionMarks++;
        } else {
            sum += (ch - 'A');
        }
    }

    if (questionMarks > 0) {
        return char('A' + (3 - sum));
    }

    // No missing character, return a default value or handle it as needed
    return ' ';  
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> strings;

        // Input three strings for each test case
        for (int i = 0; i < 3; i++) {
            string str;
            cin >> str;
            strings.push_back(str);
        }

        // Find and output the missing character for each string
        for (const string &str : strings) {
            char missingChar = findMissingCharacter(str);
            cout << missingChar << endl;
        }
    }

    return 0;
}
