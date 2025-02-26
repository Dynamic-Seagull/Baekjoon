#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool fst(pair<int, string> a, pair<int, string> b) //나이기준 정렬
{
	return a.first < b.first;
}

int main()
{
	int n;
	int age; string name;
	cin >> n;
	vector<pair<int, string>> user;

	for (int i = 0; i < n; i++)
	{
		cin >> age >> name;
		user.push_back(make_pair(age, name));
	}

	stable_sort(user.begin(), user.end(), fst);

	for (int i = 0; i < n; i++)
		cout << user[i].first << " " << user[i].second << "\n";
}