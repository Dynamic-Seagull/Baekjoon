#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    
    int arr[n]={};//바구니의 개수
    
    for(int a=0;a<m;a++){
        int i,j,k;
        cin >> i >> j >> k;
        fill((arr+(i-1)),(arr+(j)),k);
    }
    for(int a=0;a<n;a++) cout << arr[a] << " ";
}