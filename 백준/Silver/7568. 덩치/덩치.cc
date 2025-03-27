#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, a, b;
	cin >> n;
	
	vector <pair<int, int>> v;
	for (int i = 0; i < n; i++) 
	{
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}

	int rst = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j) continue;
			if (v[j].first > v[i].first && v[j].second > v[i].second)
				rst += 1;
		}
		cout << rst << " ";
		rst = 1;
	}
	return 0;
}