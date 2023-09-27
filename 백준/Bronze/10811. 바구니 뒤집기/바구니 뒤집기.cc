#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,a,b;
    cin >> n >> m;
    int arr[n];
    for(int i=0;i<n;i++) arr[i]=i+1;
    
    for(int j=0;j<m;j++){
        cin >> a >> b;
        reverse((arr+(a-1)),(arr+b));
    }
    for(int i=0;i<n;i++) cout << arr[i] << " ";
}