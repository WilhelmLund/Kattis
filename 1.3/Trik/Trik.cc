#include <iostream>

using namespace std;

int main(){
	bool cups[4] = {true, false, false, false};
	char c;
	while(cin.get(c)){
		if(c == 'A'){
			cups[3] = cups[1];
			cups[1] = cups[0];
			cups[0] = cups[3];
		}
		else if(c == 'B'){
			cups[3] = cups[2];
			cups[2] = cups[1];
			cups[1] = cups[3];
		}
		else if(c == 'C'){
			cups[3] = cups[0];
			cups[0] = cups[2];
			cups[2] = cups[3];
		}
	}
	int i = 0;
	while(!cups[i])
		i++;

	i++;
	cout << i << endl;
}