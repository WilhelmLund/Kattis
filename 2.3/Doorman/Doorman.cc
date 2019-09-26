#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int Max = stoi(s);
	cin >> s;
	int i = 0, men = 0, women= 0;
	char c;
	while(i < s.length()){
		c = s.at(i);
		if(c == 'W')
			women++;
		else if(c == 'M')
			men++;
		if(men - women < -1*Max){
			if(i+1 < s.length() && s.at(i+1) == 'M'){
				i++;
				men++;
			}
			else
				break;
		}
		else if(men - women > Max){
			if(i+1 < s.length() && s.at(i+1) == 'W'){
				i++;
				women++;
			}
			else
				break;
		}
		i++;
	}
	cout << i << endl;
}