#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n; //주어진 수
    string str1, str2; //기존 수, 뒤집은 수
    while (1)
    {
        cin >> n;
        if (n == 0) break;

        str1 = to_string(n);
        str2 = str1;
        reverse(str2.begin(), str2.end());

        if (!str1.compare(str2)) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }

    return 0;
}