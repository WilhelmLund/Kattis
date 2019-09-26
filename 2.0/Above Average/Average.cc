#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed;
    cout << setprecision(3);
    string s;
    cin >> s;
    int N = stoi(s);
    for(int i = 0; i < N; i++){
        cin >> s;
        int M = stoi(s);
        int res[M];
        int sum = 0;
        for(int j = 0; j < M; j++){
            cin >> s;
            res[j] = stoi(s);
            sum += stoi(s);
        }
        double average = static_cast<double>(sum)/static_cast<double>(M);
        int passed = 0;
        for(int j = 0; j < M; j++)
            if(res[j] > average)
                passed++;
        double percentage = static_cast<double>(passed*100)/static_cast<double>(M);
        cout << percentage << "%" << endl;
    }
    return 0;
}
