#include <iostream>

using namespace std;

int sum(int i){
	int sum = 0;
	while(i != 0){
		sum += i%10;
		i /= 10;
	}
	return sum;
}

int main(){
	string s;
	cin >> s;
	int L = stoi(s);
	cin >> s;
	int D = stoi(s);
	cin >> s;
	int X = stoi(s);
	int M, N, sumM, sumN;

	M = D;
	sumM = sum(M);

	N = L;
	sumN = sum(N);

	int step = 1;
	int i;
	while(sumM != X){
		for(i = 0; i < 10; i++){
			M -= step;
			sumM = sum(M);
			if(sumM == X){
				break;
			}
		}
		if(sumM == X)
			break;

		M = M - (M % (10*step)) + 10*step; 
		step *= 10;
	}

	step = 1;
	while(sumN != X){
		for(i = 0; i < 10; i++){
			N += step;
			sumN = sum(N);
			if(sumN == X)
				break;
		}
		if(sumN == X)
			break;

		N = N - (N % (10*step)) + 9*step; 
		i *= 10;
	}

	cout << N << endl;
	cout << M << endl;
}