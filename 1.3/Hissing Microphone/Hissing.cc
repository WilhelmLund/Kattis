#include <iostream>

using namespace std;

int main(){
	char c;
	while(cin.get(c)){
		if(c == 's')
			if(cin.get(c))
				if(c == 's'){
					cout << "hiss" << endl;
					return 0;
				}
	}
	cout << "no hiss" << endl;
	return 0;
}