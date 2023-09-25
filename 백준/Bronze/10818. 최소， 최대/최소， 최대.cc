#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int min = 1000000;
    int max = -1000000;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]<=min) min = arr[i];
        if(arr[i]>=max) max = arr[i];
    }
    
    cout << min << " " << max;
}