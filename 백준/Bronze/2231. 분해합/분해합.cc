#include <iostream>
using namespace std;

int main()
{
	int n, temp;
	int sum = 0;
	int cr = 0;
	cin >> n;
	
	while(cr<n)
	{
		sum = 0;
		temp = cr;
		while(!temp==0)
		{
			sum += temp%10;
			temp = temp/10;
		}
		if ((sum+cr) == n)
		{
			cout << cr;
			return 0;
		}
		cr++;
	}
	cout << 0;
	return 0;		
}