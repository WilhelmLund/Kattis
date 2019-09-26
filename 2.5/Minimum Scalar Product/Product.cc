#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long N, n;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> n;
        long long n1[n],n2[n];
        for(int j = 0; j < n; j++)
            cin >> n1[j];
        for(int j = 0; j < n; j++)
            cin >> n2[j];
        sort(n1, n1+n);
        sort(n2, n2+n);
        long long r = 0;
        for(int j = 0; j < n; j++)
            r += n1[j]*n2[n-1-j];
        cout << "Case #" << i+1 << ": " << r << endl;
    }
}
