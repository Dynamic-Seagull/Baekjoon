#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while(T--)
    {
        int n,m;
        cin >> n >> m;
        
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        
        for(int i=0; i<n; i++)
        {
            int pri;
            cin >> pri;
            q.push({i,pri});
            pq.push(pri);
        }
        
        int count = 0;
        while(!q.empty())
        {
            int idx = q.front().first;
            int pri = q.front().second;
            q.pop();
            
            if(pri == pq.top())
            {
                count++;
                pq.pop();
                if(idx == m)
                {
                    cout << count << "\n";
                    break;
                }
            }
            else 
                q.push({idx, pri});
        }
    }
}