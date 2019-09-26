#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int T = 0, G = 0, C = 0;
	char c;
	while(cin.get(c)){
		if(c == 'T') T++;
		else if(c == 'G') G++;
		else if(c == 'C') C++;
	}
	int sum =  T*T + C*C + G*G + min(min(T,C),G)*7;
	cout << sum << endl;
}