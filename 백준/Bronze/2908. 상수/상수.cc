#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    string b;
    cin >> a >> b;
    
    int alen = a.length();
    int blen = b.length();
    
    for(int i=0; i<alen/2; i++){
        int temp=a[i];
        a[i]=a[alen-1-i];
        a[alen-1-i]=temp;
    }
    for(int i=0; i<blen/2; i++){
        int temp=b[i];
        b[i]=b[blen-1-i];
        b[blen-1-i]=temp;
    }
    if(a>b) cout << a;
    else cout << b;
}