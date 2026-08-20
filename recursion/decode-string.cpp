#include <stack>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> strings;

        string current = "";
        int count = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                count = count * 10 + (ch - '0');
            }
            else if (ch == '[') {
                counts.push(count);
                strings.push(current);
                count = 0;
                current = "";
            }
            else if (ch == ']') {
                int repeat = counts.top();
                counts.pop();

                string previous = strings.top();
                strings.pop();

                string repeated = "";
                for (int i = 0; i < repeat; ++i) {
                    repeated += current;
                }

                current = previous + repeated;
            }
            else {
                current += ch;
            }
        }

        return current;
    }
};