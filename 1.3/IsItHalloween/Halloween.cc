#include <iostream>

int main(){
    std::string s;
    std::getline(std::cin,s);
    if(s == "OCT 31" || s == "DEC 25")
        std::cout << "yup" << std::endl;
    else
        std::cout << "nope" << std::endl;
    return 0;
}
