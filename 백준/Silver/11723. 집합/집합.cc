#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
	bool s[21] = { 0, };
	int m; //case
	string com; //command
	int num; //number
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> com;

		if (com == "add")
		{
			cin >> num;
			s[num] = s[num] | 1;
		}
		else if (com == "remove")
		{
			cin >> num;
			s[num] = s[num] & 0;
		}
		else if (com == "check")
		{
			cin >> num;
			cout << s[num] << "\n";
		}
		else if (com == "toggle")
		{
			cin >> num;
			s[num] = !s[num];
		}
		else if (com == "all")
			for (int j = 0; j < 21; j++) s[j] = s[j] | 1;
		else if (com == "empty")
			for (int j = 0; j < 21; j++) s[j] = s[j] & 0;
	}
	return 0;
}