#include <iostream>

using namespace std;

int main()
{
	int n, tmp;
	int max = 0;
	int arr[10001] = { 0, };

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		arr[tmp] += 1;
		if (tmp > max) max = tmp;
	}

	for (int i = 1; i <=max; i++)
		if (arr[i] != 0)
			for (int j = 0; j < arr[i]; j++)
				cout << i << "\n";

	return 0;
}