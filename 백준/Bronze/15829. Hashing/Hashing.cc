#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    int n; //문자개수
    string s; //문자열
    int sum = 0;
    cin >> n >> s;

    for (int i=0; i < n; i++)
    {
        sum = sum + ((s[i] - 'a' + 1) * pow(31,i));
    }

    cout << sum % 1234567891;

    return 0;
}