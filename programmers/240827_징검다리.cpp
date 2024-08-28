#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int distance, vector<int> rocks, int n) {
    int answer = 0;
    rocks.push_back(distance);
    sort(rocks.begin(), rocks.end());
    
    int st = 0; int end = distance;
    while (st <= end)
    {
        int m = (st + end)/2;
        int cnt = 0;
        int l =0;
        for(int i=0; i < rocks.size(); i++)
        {
            if(rocks[i]-l >= m)
                l = rocks[i];
            else cnt++;
        }
        if(cnt>n) end = m-1;
        else 
        {
            answer = max(answer,m);
            st = m +1;    
        }
    }
    return answer;
}
