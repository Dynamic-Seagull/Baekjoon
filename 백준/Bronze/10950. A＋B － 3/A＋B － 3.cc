#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    for(int i=0; i < T; i++){
        int a,b;
        cin >> a >> b;
        a= a+b;
        cout << a << endl;
    }
}