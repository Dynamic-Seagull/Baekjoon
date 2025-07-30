#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    unordered_map<string,int> name; //name to number
    vector<string> num(n+1); //number to name 
    
    for(int i=1; i <= n; i++)
    {
        string pokemon;
        cin >> pokemon;
        name[pokemon] = i;
        num[i] = pokemon;
    }
    
    for(int i=0; i<m; i++)
    {
        string q;
        cin >> q;
        if(isdigit(q[0]))
        {
            int no = stoi(q);
            cout << num[no] << "\n";
        }
        else 
            cout << name[q] << "\n";
    }
    return 0;
}