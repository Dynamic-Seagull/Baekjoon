#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}

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

	stable_sort(v.begin(), v.end(),cmp);

	for (int i = 0; i < n; i++)
		cout << v[i].first << " " << v[i].second << "\n";

	return 0;
}