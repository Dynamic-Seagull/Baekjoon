#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[42]={};
    int count=0;
    int num;
    
    for(int i=0;i<10;i++){
        cin >> num;
        num = num % 42;
        arr[num]+=1;
    }
    for(int j=0;j<42;j++){
        if(arr[j]!=0) count++;
    }
    cout << count;
}