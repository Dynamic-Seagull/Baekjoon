#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m,n;
    cin >> m >> n;
    
    vector<bool> isp(n+1,true);
    isp[0] = isp[1] = false;
    
    for(int i = 2; i*i <= n; i++) 
    {
        if(isp[i])
            for(int j = i*i; j <= n; j+=i)
                isp[j] = false;
    }
    
    for(int i = m; i <= n; i++)
        if(isp[i])
            cout << i << "\n";
}