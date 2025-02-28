#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool fst(pair<string, string> a, pair<string, string> b)
{
	return a.first < b.first;
}

bool sec(pair<string, string> a, pair<string, string> b)
{
	return a.second < b.second;
}

int main()
{
	int n;
	cin >> n;
	string fname, sname;

	vector<pair<string, string>> students;

	for (int i = 0; i < n; i++)
	{
		cin >> fname >> sname;
		students.push_back(make_pair(fname, sname));
	}

	sort(students.begin(), students.end(), fst); //sort with first name
	stable_sort(students.begin(), students.end(), sec); //sort with second name next

	for (int i = 0; i < n; i++)
		cout << students[i].first << " " << students[i].second << "\n";

	return 0;
}