#include <iostream>

using namespace std;

int main()
{
	int v, a, b, rst;
	cin >> a >> b >> v;

	if (a > v) cout << 1;
	else {
		if ((v-a) % (a - b) == 0)
			rst = ((v - a) / (a - b)) + 1;
		else rst = ((v - a) / (a - b)) + 2;
	}
	cout << rst;

	return 0;
}