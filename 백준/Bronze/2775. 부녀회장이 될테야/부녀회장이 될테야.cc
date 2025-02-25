#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    
	int arr[15][15] = { 0, };
	int T, k, n; //테스트케이스, 층, 호수
	cin >> T;

	for (int i = 0; i < 15; i++) //1층 세팅
		arr[0][i] = i;

	for (int i = 1; i < 15; i++) //각 층 세팅
		for (int j = 1; j < 15; j++)
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1]; //아래층 같은호수 + 같은층 이전호수
	
	for (int i = 0; i < T; i++)
	{
		cin >> k >> n;
		cout << arr[k][n] << "\n";
	}
}