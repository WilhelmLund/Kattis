#include <iostream>

int main(){
    int X, k=0, n=2;
    std::cin >> X;
    while(n*n <= X){
        if(X%n == 0){
            X /= n;
            k++;
        }
        else n++;
    }
    k++;
    std::cout << k << std::endl;
}
