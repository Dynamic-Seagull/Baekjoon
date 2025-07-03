#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N, M, tmp;
	vector<int> v;

	// 데이터 입력
	cin >> N;
	while (N--){ cin >> tmp; v.push_back(tmp); }
	cin >> M;

	// 데이터 정렬
	sort(v.begin(), v.end());

	// 탐색
	while (M--)
	{
		cin >> tmp;
		cout << upper_bound(v.begin(), v.end(), tmp) - lower_bound(v.begin(), v.end(), tmp) << " ";
	}
}