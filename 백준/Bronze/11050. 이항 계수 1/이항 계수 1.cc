#include <iostream>
#include <vector>
using namespace std;

long bc(int n, int k) //dp
{
	vector<vector<long>> c(n + 1, vector<long>(k + 1, 0));

	for(int i=0; i<=n; i++)
		for (int j = 0; j <= min(i, k); j++)
		{
			if (j == 0 || j == i)
				c[i][j] = 1;
			else
				c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
		}

	return c[n][k];
}

int main()
{
	int n, k; //두 수
	cin >> n >> k;
	cout << bc(n,k);
}