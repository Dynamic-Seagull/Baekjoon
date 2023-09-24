#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,temp,v;
    int count = 0;
    vector<int> vec;
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    cin >> v;
    for(int i=0; i<n; i++){
        if(vec[i]==v) count++;
    }
    cout << count;
}