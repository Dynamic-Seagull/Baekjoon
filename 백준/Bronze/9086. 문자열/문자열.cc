#include <iostream>
using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    
    while(t>0){
        cin >> s;
        cout << s.front() << s.back() << "\n";
        t--;
    }
}