#include <iostream>
#include <map>

using namespace std;

int main(){
    int N;
    cin >> N;
    string s;
    map<string,int> Kattis, DOMjudge;
    for(int i = 0; i < N; i++){
        cin >> s;
        DOMjudge[s]++;
    }
    for(int i = 0; i < N; i++){
        cin >> s;
        Kattis[s]++;
    }
    int x = 0;
    for(map<string,int>::iterator it = Kattis.begin(); it != Kattis.end(); ++it) {   
        x += min(Kattis[it->first], DOMjudge[it->first]);
    }
    cout << x << endl;
}
