#include <iostream>
#include <math.h>

using namespace std;

# define M_PI2 3.14159265358979323846

int main(){
	string s;
	getline(cin, s);
	int N = stoi(s), count, current, tmp;
	double distance, diff, time;
	cout.precision(16);

	for(int i = 0; i < N; i++){
		distance = 0.0;
		count = 0;
		getline(cin, s);

		current = static_cast<int>(s.at(0));
		for(char& c : s){
			tmp = static_cast<int>(c);
			if(tmp == 13 || tmp == 10)
				break;

			if(tmp == 32){
				diff = abs(current - 91);
				current = 91;
			}

			else if(tmp == 39){
				diff = abs(current - 92);
				current = 92;
			}

			else{
				diff = abs(current - tmp);
				current = tmp;
			}

			distance += min(diff, 28.0-diff)/7.0;
			count++;
		}
		time = distance*M_PI2 + count;
		cout << time << endl;
	}
}