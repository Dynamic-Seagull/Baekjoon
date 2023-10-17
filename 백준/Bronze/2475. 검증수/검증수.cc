#include <iostream>
using namespace std;

int main(){
    int num;
    int sum=0;
    
    for(int i=0; i<5; i++){
        cin >> num;
        sum += num*num;
    }
    sum = sum%10;
    
    cout << sum;
}