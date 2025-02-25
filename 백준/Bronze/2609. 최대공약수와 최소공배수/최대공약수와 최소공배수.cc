#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int gcd(int a, int b) //최대공약수
{
    int r = a % b;
    if (r == 0) return b;
    return gcd(b, r);
}

int main()
{
    int a,b; //두 자연수
    cin >> a >> b;
    int rst = gcd(a, b);
    cout << rst << "\n" << a * b / rst;

    return 0;
}