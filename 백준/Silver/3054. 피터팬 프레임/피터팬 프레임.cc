#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string word, tmp;
	cin >> word;
	int length = word.length();
	vector<string> line1; //line1 line5
	vector<string> line2; //line2 line4
	vector<string> line3; //line3

	for (int i = 0; i < length; i++)
	{
		tmp = word[i];
		if ((i+1) % 3 == 0) //3의 배수일때 웬디프레임
		{
			if (i != 0)
			{
				line1.pop_back(); line2.pop_back(); line3.pop_back();
			}
			line1.push_back("."); line1.push_back("."); line1.push_back("*"); line1.push_back("."); line1.push_back(".");
			line2.push_back("."); line2.push_back("*"); line2.push_back("."); line2.push_back("*"); line2.push_back(".");
			line3.push_back("*"); line3.push_back("."); line3.push_back(tmp); line3.push_back("."); line3.push_back("*");
		}
		else
		{
			if (i != 0)
			{
				line1.pop_back(); line2.pop_back(); line3.pop_back();
			}
			line1.push_back("."); line1.push_back("."); line1.push_back("#"); line1.push_back("."); line1.push_back(".");
			line2.push_back("."); line2.push_back("#"); line2.push_back("."); line2.push_back("#"); line2.push_back(".");
			if ((i + 1) != 1 && (i + 1) % 3 == 1)
			{
				line3.push_back("*"); line3.push_back("."); line3.push_back(tmp); line3.push_back("."); line3.push_back("#");
			}
			else
			{
				line3.push_back("#"); line3.push_back("."); line3.push_back(tmp); line3.push_back("."); line3.push_back("#");
			}
		}
	}
	
	for (auto i : line1)
		cout << i;
	cout << "\n";
	for (auto i : line2)
		cout << i;
	cout << "\n";
	for (auto i : line3)
		cout << i;
	cout << "\n";
	for (auto i : line2)
		cout << i;
	cout << "\n";
	for (auto i : line1)
		cout << i;
	cout << "\n";

	return 0;
}