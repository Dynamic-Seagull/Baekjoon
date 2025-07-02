#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		stack<char> st;
		string s;
		cin >> s;

		for (int j = 0; j < s.length(); j++)
		{
			// 스택이 비어있으면
            if (st.empty()) st.push(s[j]);
			else
			{
				// 스택 top이 여는 괄호이고 해당 글자가 닫는괄호이면 pop
                if (st.top() == '(' && s[j] == ')') st.pop();
                // 그 외에는 전부 push
				else st.push(s[j]);
			}
		}
		
        if (st.empty()) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
}
