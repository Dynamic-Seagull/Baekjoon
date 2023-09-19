#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int reward;
    cin >> a >> b >> c;
    
    if ((a==b)&&(a==c)) reward = 10000+(a*1000);
    else if (a==b) reward = 1000+(a*100);
    else if (a==c) reward = 1000+(a*100);
    else if (b==c) reward = 1000+(b*100);
    else {
        if((a>b)&&(a>c)) reward = a*100;
        else if((b>a)&&(b>c)) reward = b*100;
        else reward = c*100;
    }
    
    cout << reward; 
}