#include <iostream>

using namespace std;

int main(){
	int re;
	cin >> re;
	
	while(re--){
		int a; long long b;
		int result = 1;
		
		cin >> a >> b;
		
		if((a%10 == 0)||(a%10 == 1)||(a%10 == 5)||(a%10 == 6)){
			if (a%10 == 0){cout << 10 << endl;}
			else{cout << a%10 << endl;} //1의자리가 0, 1, 5, 6 중 하나이면 1의자리는 항상 같다 
		}
		else if((a%10 == 2)||(a%10 == 3)||(a%10 == 7)||(a%10 == 8)){//1의자리가 2, 3, 7, 8 이면 4번 주기로 같은 1의자리를 가진다 
			b = b%4; //(1이면 2, 2이면 4, 3이면 8, 0이면 6)
			if(b == 0){b = 4;}
			for(int i=0; i<b; i++){
				result = result*a;
			}
			cout << result%10 << endl;
		}
		else if((a%10 == 4)||(a%10 == 9)){//1의자리가 4, 9이면 2번 주기로 같은 1의 자리를 가진다 
			b = b%2;
			result = a;
			if(b==1){
				cout << a%10 << endl;
			}
			else if(b==0){
				cout << a*a%10 << endl;
			}
		}
	}
	
	return 0; 
}