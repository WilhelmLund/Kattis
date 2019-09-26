#include <iostream>

int main(){
	std::string s;
	std::cin >> s;
	std::cin >> s;
	int y = std::stoi(s);
	y%2 ? (std::cout << "impossible" << std::endl) :( std::cout << "possible" << std::endl);
	return 0;
}