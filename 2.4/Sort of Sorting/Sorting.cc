#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int comp(string s1, string s2){
    if(s1[0] == s2[0])
        return s1[1] < s2[1];
    return s1[0] < s2[0];
}

int main(){
    int N;
    cin >> N;
    string s;
    while(N != 0){
        vector<string> names;
        for(int i = 0; i < N; i++){
            cin >> s;
            names.push_back(s);
        }
        stable_sort(names.begin(), names.end(), comp);
        for(string& n : names)
            cout << n << endl;
        cin >> N;
        if(N!=0)
            cout << endl;
    }
}
