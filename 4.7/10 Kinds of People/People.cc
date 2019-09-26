#include <iostream>
#include <vector>

using namespace std;

struct coord{
	int x;
	int y;
};

void color(int x, int y, vector<vector<int>>& map, int colour){
	int tmp = map[y][x];
	map[y][x] += colour;
	if(y+1 < map.size() && map[y+1][x] == tmp)
		color(x, y+1, map, colour);
	if(y-1 >= 0 && map[y-1][x] == tmp)
		color(x, y-1, map, colour);
	if(x+1 < map[0].size() && map[y][x+1] == tmp)
		color(x+1, y, map, colour);
	if(x-1 >= 0 && map[y][x-1] == tmp)
		color(x-1, y, map, colour);
}

int main(){
	string s;
	cin >> s;
	int r = stoi(s);
	cin >> s;
	int c = stoi(s);
	int colour = 2;
	vector<vector<int>> map(r, vector<int>(c));

	for(int i = 0; i < r; i++){
		cin >> s;
		for(int j = 0; j < c; j++)
			map[i][j] = s.at(j)-'0';
 	}
 	coord cor = {-1,-1}, newCor = {0,0};
 	while(cor.x != newCor.x || cor.y != newCor.y){
 		cor = newCor;
 		color(cor.x, cor.y, map, colour);

 		for(int i = 0; i < map.size(); i++){
			for(int j = 0; j < map[0].size(); j++){
				if(map[i][j] == 0 || map[i][j] == 1){
					newCor.x = j;
					newCor.y = i;
					break;
				}
			}
			if(cor.x != newCor.x || cor.y != newCor.y)
				break;
		}
 		colour += 2;
 	}

 	cin >> s;
 	int N = stoi(s);
 	int r1, c1, r2, c2;
 	for(int i = 0; i < N; i++){
 		cin >> s;
 		r1 = stoi(s)-1;
 		cin >> s;
 		c1 = stoi(s)-1;
 		cin >> s;
 		r2 = stoi(s)-1;
 		cin >> s;
 		c2 = stoi(s)-1;

 		if(map[r1][c1] == map[r2][c2]){
 			if(map[r1][c1] % 2 == 1)
 				cout << "decimal" << endl;
 			else
 				cout << "binary" << endl;
 		}
 		else
 			cout << "neither" << endl;
 	}

 	return 0;
}