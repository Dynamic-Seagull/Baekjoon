#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
	string s[3];

	cin >> s[0] >> s[1] >> s[2];

	int count = 3;
	int num;
	for (int i = 0; i < 3; i++)
	{
		if ((s[i] == "Fizz") || (s[i] == "Buzz") || (s[i] == "FizzBuzz"))
			count--;
		else
		{
			num = stoi(s[i]) + count;
			break;
		}
	}
	
	if ((num % 3 == 0) && (num % 5 == 0)) cout << "FizzBuzz";
	else if (num % 3 == 0) cout << "Fizz";
	else if (num % 5 == 0) cout << "Buzz";
	else cout << num;

	return 0;
}