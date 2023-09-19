#include <iostream>
using namespace std;

int main(){
    int a,b,c; //현재 시간, 걸리는시간
    int h,m; //걸리는 시간을 시간과 분으로 나눔
    cin >> a >> b >> c;
    h=c/60; m=c%60;
    
    if((b+m)<60) b=b+m;
    else {h+=1; b=(b+m)%60;}//분 계산
    
    if((a+h)<24) a=a+h;
    else a=(a+h)%24;//시간 계산
    
    cout << a << " " << b;
    
    return 0;
}