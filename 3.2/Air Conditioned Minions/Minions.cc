#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

bool compair(pair<int,int> a, pair<int,int> b){
    return a.first < b.first;
}

int main(){
    string s;
    cin >> s;
    int N = stoi(s), L,H;
    vector<pair<int, int>> pref;

    for(int i = 0; i < N; i++){
        cin >> L;
        cin >> H;
        pref.push_back(make_pair(L, H));
    }
    sort(pref.begin(), pref.end(), compair);
    
    H = pref[0].second;
    int rooms = 1;
    for(int i = 1; i < N; i++){
        if(pref[i].first > H){
            H = pref[i].second;
            rooms++;
        }
        else if(pref[i].second < H)
            H = pref[i].second;
    }

    cout << rooms << endl;
}
