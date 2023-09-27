#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,temp;
    cin >> n >> m;
    int arr[n];
    for(int i=0;i<n;i++) arr[i]=i+1;
    
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        temp=arr[a-1];
        arr[a-1]=arr[b-1];
        arr[b-1]=temp;
    }
    for(int i=0;i<n;i++) cout << arr[i] << " ";
}