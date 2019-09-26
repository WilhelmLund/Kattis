#include <iostream>

using namespace std;

int main(){
	string s;
	int W, L, xPos, yPos, dir, n = 1;
	char c;

	cin >> s;
	W = stoi(s);
	cin >> s;
	L = stoi(s);
	while(W != 0 && L != 0){
		char layout[L][W];
		for(int i = 0; i < L; i++){
			cin >> s;
			for(int j = 0; j < W; j++){
				layout[i][j] = s.at(j);	
				if(layout[i][j] == '*'){
					xPos = j;
					yPos = i;
					if(i == 0)
						dir = 2;
					else if(i == L-1)
						dir = 4;
					else if(j == 0)
						dir = 1;
					else
						dir = 3;
				}
			}
		}
		c = '*';
		while(c != 'x'){
			if(c == '\\'){
				if(dir == 1)
					dir = 2;
				else if(dir == 2)
					dir = 1;
				else if(dir == 3)
					dir = 4;
				else
					dir = 3;
			}
			else if( c == '/'){
				if(dir == 1)
					dir = 4;
				else if(dir == 2)
					dir = 3;
				else if(dir == 3)
					dir = 2;
				else
					dir = 1;
			}
			if(dir == 1)
				xPos++;
			else if(dir == 2)
				yPos++;
			else if(dir == 3)
				xPos--;
			else
				yPos--;
			c = layout[yPos][xPos];
		}
		layout[yPos][xPos] = '&';

		cout << "HOUSE " << n++ << endl;
		for(int i = 0; i < L; i++){
			for(int j = 0; j < W; j++){
				cout << layout[i][j];
			}
			cout << endl;
		}
		cin >> s;
		W = stoi(s);
		cin >> s;
		L = stoi(s);
	}
}