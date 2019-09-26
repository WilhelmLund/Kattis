#include <iostream>

int main(){
	std::string s;
	std::cin >> s;
	int n = std::stoi(s);
	for(int i = 1; i <= n; i++)
		std::cout << i << " Abracadabra" << std::endl;
}