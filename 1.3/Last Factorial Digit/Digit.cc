#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int N = stoi(s), F, D;
    for(int i = 0; i < N; i++){
        cin >> s;
        D = stoi(s);
        for(int j = D-1; j > 0; j--){
            D = (D*j)%10;
        }
        cout << D << endl;
    }
}
