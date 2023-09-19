#include <iostream>
using namespace std;

int main(){
    int h,m;
    cin >> h >>m;
    
    if(m<45){
        m=m+15;
        if(h==0) h=23;
        else h=h-1;
    }
    else m=m-45;
    
    cout << h << " " << m;
    
    return 0;
}