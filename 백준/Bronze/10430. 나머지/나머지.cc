#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    float remA, remB, remC, remD;
    remA = (a+b)%c;
    cout << remA <<endl;
    remB = ((a%c)+(b%c))%c;
    cout << remB <<endl;
    remC = (a*b)%c;
    cout << remC <<endl;
    remD = ((a%c)*(b%c))%c;
    cout << remD ;
    
    return 0;
}