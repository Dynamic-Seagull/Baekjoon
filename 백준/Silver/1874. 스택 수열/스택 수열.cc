#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	vector<char> v; //부호저장
	stack<int> st; //숫자저장
	int n; //수 개수
	cin >> n;
	int pn = 1; //스택에 넣을 숫자

	for (int i = 0; i < n; i++)
	{
		int num; //수열에 주어진 숫자
		cin >> num;

		while (pn <= num) //필요한 숫자가 나올때까지
		{
			st.push(pn);
			v.push_back('+');
			pn++;
		}

		if (st.top() == num) //해당 숫자가 나오면 팝
		{
			st.pop();
			v.push_back('-');
		}
		else
		{
			cout << "NO\n";
			return 0;
		}
	}
	for (auto i : v) cout << i << "\n";
	return 0;
}