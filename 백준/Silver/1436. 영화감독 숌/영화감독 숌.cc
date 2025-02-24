#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n; //n번째 영화제목
    cin >> n;
    
    int count = 0;
    int i = 666;
    string str;
    while (1)
    {
        str = to_string(i);
        if (str.find("666") != string::npos) count++; //해당 문자열이 있으면 카운트업
        if (n == count) { cout << i; break; }
        i++;
    }
    return 0;
}