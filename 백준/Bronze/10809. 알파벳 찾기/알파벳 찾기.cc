#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();
    int apb[26];
    fill_n(apb,26,-1);
    int temp;
    
    for(int i=0; i<n; i++){
        temp = s[i]-97;
        if(apb[temp]==(-1)) apb[temp] = i;
    }
    
    for(int i=0; i<26; i++){
        cout << apb[i] << " ";    
    }
}