#include <iostream>
using namespace std;

int main()
{
    int n; //문자개수
    string s; //문자열
    long long sum = 0;
    long long pow = 1;
    int mod = 1234567891;
    cin >> n >> s;

    for (int i=0; i < n; i++)
    {
        sum = (sum + (s[i] - 'a' + 1) * pow) % mod;
        pow = (pow*31) % mod;
    }

    cout << sum;

    return 0;
}