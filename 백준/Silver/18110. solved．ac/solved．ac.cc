#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    if(n == 0)
    {
        cout << 0;
        return 0;
    }
    
    vector<int> lv(n);
    for(int i=0; i<n; i++)
        cin >> lv[i];
    
    sort(lv.begin(), lv.end());
    int cut = round(n*0.15);
    
    int sum = 0;
    for(int i = cut; i < n-cut; i++)
        sum += lv[i];
    
    cout << round((double)sum / (n-2*cut));
}