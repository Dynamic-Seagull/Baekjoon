#include <iostream>
using namespace std;

int main(){
    int x,n,a,b;
    int sum = 0;
    cin >> x >> n;
    
    for(int i=0; i<n; i++){
        cin >> a >> b;
        sum += (a*b);
    }
    
    if(x==sum) printf("Yes");
    else printf("No");
}