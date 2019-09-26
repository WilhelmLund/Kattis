#include <iostream>

int main(){
	std::string s;
	std::cin >> s;
	double X = std::stod(s);
	std::cin >> s;
	double Y = std::stod(s);
	if(Y == 1.0 && X != 0){
		std::cout << "IMPOSSIBLE" << std::endl;
		return 0;
	}
	else if(Y == 1.0 && X == 0){
		std::cout << "ALL GOOD" << std::endl;
		return 0;
	}
	double cross = X/(1.0-Y);
	std::cout.precision(10);
	std::cout << cross << std::endl;
}