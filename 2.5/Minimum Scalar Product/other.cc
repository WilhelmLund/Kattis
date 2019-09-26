#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long T,n,v1[1000],v2[1000];
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> v1[i];
        for (int i = 0; i < n; i++)
            cin >> v2[i];
        sort(v1,v1+n);
        sort(v2,v2+n);
        long long p = 0;
        for (int i = 0; i < n; i++)
            p += v1[i]*v2[n-i-1];
        cout << "Case #" << t << ": " << p << endl;
    }
    return 0;
}