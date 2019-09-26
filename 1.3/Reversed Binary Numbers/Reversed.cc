#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int x = stoi(s);
	int length = log2(x)+1, tmp;
	int binary[length];
	int i = 0;
	while(x != 0){
  		tmp = x%2;
  		binary[i++] = tmp;
 		x /= 2;
	}
	int res = 0;
	for(i = 0; i < length; i++){
		res += pow(2, length-1-i)*binary[i];
	}
	cout << res << endl;
}