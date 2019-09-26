#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int N = stoi(s);

	int sum = 0, count = 0, tmp;
	for(int i = 0; i < N; i++){
		cin >> s;
		tmp = stoi(s);
		if(tmp == -1)
			continue;
		else{
			sum += tmp;
			count++;
		}
	} 

	double average = static_cast<double>(sum)/static_cast<double>(count);
	cout << average << endl; 
}