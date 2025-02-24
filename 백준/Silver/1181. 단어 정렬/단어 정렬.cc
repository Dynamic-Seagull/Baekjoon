#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool shorter(const string& a, const string& b)
{
    if (a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main()
{
    int n; //단어개수
    cin >> n;

    vector<string> word(n);
    for (int i = 0; i < n; i++)
        cin >> word[i];

    sort(word.begin(), word.end(), shorter); //오름차순 정렬

    word.erase(unique(word.begin(), word.end()), word.end()); //중복제거

    n = word.size();

    for (int i = 0; i < n; i++)
        cout << word[i] << '\n';
    
    return 0;
}