#include <iostream>

using namespace std;

int main(){
	string s;
	int start, a, b, c;
	while(true){
		cin >> s;
		start = stoi(s);
		cin >> s;
		a = stoi(s);
		cin >> s;
		b = stoi(s);
		cin >> s;
		c = stoi(s);

		if(start == 0 && a == 0 && b == 0 && c == 0)
			return 0;

		int degrees = 1080;
		if(a == start)
			a = start;
		else if(a < start)
			degrees += (start - a)*9;
		else
			degrees += (start + 40-a)*9;

		if(a < b)
			degrees += (b-a)*9;
		else
			degrees += (b + 40-a)*9;

		if(c < b)
			degrees += (b-c)*9;
		else
			degrees += (b + 40-c)*9;

		cout << degrees << endl; 
	}
}