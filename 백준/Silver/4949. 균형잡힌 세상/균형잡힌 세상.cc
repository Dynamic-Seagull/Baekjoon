#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string line;
    
    while (true) {
        getline(cin, line);
        
        // 입력 .
        if (line == ".") break;

        stack<char> st;
        bool ok = true;
        for (char c : line) {
            if (c == '(' || c == '[') {
                st.push(c);
            }
            else if (c == ')') {
                if (st.empty() || st.top() != '(') {
                    ok = false;
                    break;
                }
                st.pop();
            }
            else if (c == ']') {
                if (st.empty() || st.top() != '[') {
                    ok = false;
                    break;
                }
                st.pop();
            }
        }
        cout << ((ok && st.empty()) ? "yes\n" : "no\n");
    }

    return 0;
}
