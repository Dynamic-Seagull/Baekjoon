#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int dp(vector<int>& money, int st, int end)
{
    int p1 = 0, p2 = 0, sum = 0;
    
    for (int i = st; i <= end; i++)
    {
        sum = max(p1, p2 + money[i]);
        p2 = p1; p1 = sum;
    }
    
    return sum;
}

int solution(vector<int> money) {
    int l = money.size();
    int t1 = dp(money, 0, l-2);
    int t2 = dp(money, 1, l-1);

    int answer = max(t1, t2);
    return answer;
}
