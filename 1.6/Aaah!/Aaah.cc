#include <iostream>
#include <string>

int main(){
	std::string s;
	std::cin >> s;
	int i = s.length();
	std::cin >> s;
	int j = s.length();
	if(i >= j){
		std::cout << "go" << std::endl;
		return 0;
	}
	std::cout << "no" << std::endl;
	return 0;
}