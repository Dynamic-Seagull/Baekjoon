#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int k, tmp;
	int sum = 0;
	cin >> k;
	stack<int> s;

	while (k--)
	{
		cin >> tmp;
		if (tmp == 0 && !s.empty()) s.pop();
		else s.push(tmp);
	}
	
	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}
	
	cout << sum;
}
