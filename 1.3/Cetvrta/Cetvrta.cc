#include <iostream>

using namespace std;

int main(){
	string s;
	int X1=0, X2, Y1=0, Y2;
	int *x=&X1, *y=&Y1;
	cin >> s;
	X1 = stoi(s);
	cin >> s;
	Y1 = stoi(s);
	for(int i = 1; i < 3; i++){
		cin >> s;
		if(X1 == stoi(s)){
			x = &X2;
		}else{
			X2 = stoi(s);
		}
		cin >> s;
		if(Y1 == stoi(s)){
			y = &Y2;
		}else{
			Y2 = stoi(s);
		}
	}
	cout << *x << " " << *y << endl;
}