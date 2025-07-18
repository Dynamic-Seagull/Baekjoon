#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int k, tmp;
	string str;
	cin >> k;
	stack<int> s;

	while (k--)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> tmp;
			s.push(tmp);
		}
		else if (str == "pop")
		{
			if (s.empty() == 0)
			{
				cout << s.top() << "\n";
				s.pop();
			}
			else cout << -1 << "\n";
		}
		else if (str == "size")
		{
			cout << s.size() << "\n";
		}
		else if (str == "empty")
		{
			cout << s.empty() << "\n";
		}
		else
		{
			cout << ((s.empty()) ? -1 : s.top());
			cout << "\n";
		}
	}
}
