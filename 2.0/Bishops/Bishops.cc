#include <iostream>

int main(){
	std::string s;
	int N;
	while(std::cin >> s){
		N = std::stoi(s);
		if(N > 2)
			std::cout << N + N-2 << std::endl;
		else
			std::cout << N << std::endl;
	}
	return 0;
}