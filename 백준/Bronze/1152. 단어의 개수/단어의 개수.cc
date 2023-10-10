#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int cnt=0;
    getline(cin,s);
    int l = s.length();
    
    for(int i=0; i<l; i++){
        if(s[i] == ' ') cnt++; 
    }
    cnt += 1;
    if(s[0]==' ') cnt -= 1;
    if(s[l-1]==' ') cnt -= 1;
    
    cout << cnt;
}