#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool compair(pair<int,int> a, pair<int,int> b)
    return a.second < b.second;

int main(){
    int N, T, c, t;
    cin >> N;
    cin >> T;
    vector<int,int> queue;
    for(int i = 0; i < N; i++){
        cin >> c;
        cin >> t;
        queue.push_back(make_pair(c,t));
    }
    sort(queue.begin(), queue.end(), compair);

    int ppl = min(:wq

