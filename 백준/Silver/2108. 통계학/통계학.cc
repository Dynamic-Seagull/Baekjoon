#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> num(n);
    map<int, int> fr;
    int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        cin >> num[i];
        sum += num[i];
        fr[num[i]]++;
    }
    
    sort(num.begin(), num.end());
    
    int avr = round((double)sum / n);
    
    int med = num[n/2];
    
    int mf = 0;
    for(auto &p : fr)
        mf = max(mf, p.second);
    vector<int> modes;
    for(auto &p : fr)
        if(p.second == mf)
            modes.push_back(p.first);
    
    int mode = (modes.size() > 1) ? modes[1] : modes[0];
    
    int range = num.back() - num.front();
    
    cout << avr << "\n" << med << "\n" << mode << "\n" << range << "\n";
    
}