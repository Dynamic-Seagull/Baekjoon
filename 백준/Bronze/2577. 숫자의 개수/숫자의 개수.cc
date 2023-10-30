#include <iostream>
using namespace std;

int main(){
    int a,b,c,mul, temp;
    cin >> a >> b >> c;
    mul = a*b*c;
    string smul = to_string(mul);
    int len = smul.length();
    
    int arr[10] = {0, };
    for(int i = 0; i < len; i++){
    	temp = (int)smul[i]- '0';
		arr[temp] += 1;
	}
	for(int j=0; j<10; j++) cout << arr[j] << "\n";
}