#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int temp;
    int max = 0;
    int max_index = 0;
    
    for(int i=0; i<9; i++){
        cin >> temp;
        if(temp >= max){max=temp; max_index = i+1;}
    }
    
    cout << max << "\n" << max_index;
}