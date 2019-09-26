#include <iostream>

using namespace std;

#define min(a,b) ((a)<(b)?(a):(b))

int main(){
    string s;
    cin >> s;
    int N = stoi(s);
    cin >> s;
    int M = stoi(s);

    if(M<N){
        int t = N;
        N = M;
        M = t;
    }

    int res[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++)
            res[i][j] = i+j+2;
    }

    for(int r = N-1; r < M; r++)
        cout << res[0][r] << endl;

    return 0;
}
         
