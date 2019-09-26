#include <iostream>

int main(){
	std::string s;
	std::cin >> s;
	int N = std::stoi(s);
	std::cin >> s;
	int M = std::stoi(s);

	if(N < M)
		if(M-N == 1)
			std::cout << "Dr. Chaz will have " << 1 << " piece of chicken left over!" << std::endl;
		else
			std::cout << "Dr. Chaz will have " << M-N << " pieces of chicken left over!" << std::endl;
	else
		if(N-M == 1)
			std::cout << "Dr. Chaz needs " << 1 << " more piece of chicken!" << std::endl;
		else
			std::cout << "Dr. Chaz needs " << N-M << " more pieces of chicken!" << std::endl;
	return 0;
}