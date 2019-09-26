#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int i,int j){ 
	return (i>j); 
}

int main(){
	string s;
	cin >> s;
	int N = stoi(s);
	int books[N], sum = 0;

	for(int i = 0; i < N; i++){
		cin >> s;
		books[i] = stoi(s); 
	}
	sort(books, books+N, comp);
	for(int i = 0; i < N;i++){
		if(i%3 != 2)
			sum += books[i];
	}
	cout << sum << endl;
}