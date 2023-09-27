#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int stdnum;
    int num[30]={};
    
    for(int i=0;i<28;i++){
        cin >> stdnum;
        num[stdnum-1]=stdnum;
    }
    for(int j=0;j<30;j++){
        if(num[j]==0) cout << j+1 << "\n";
    }
}