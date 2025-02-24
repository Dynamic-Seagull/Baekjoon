#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, tmp; //카드 개수, 카드 합
    int max = 0; //카드 최대합
    vector<int> v; 
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }

    for (int i = 0; i < n; i++)//브루트포스
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                tmp = v[i] + v[j] + v[k];
                if (max <= tmp && tmp <= m)//최대값보다 크거나 같고 m보다 작거나 같고
                    max = tmp;
                else continue;
            }
        }
    }

    cout << max;
    
    return 0;
}