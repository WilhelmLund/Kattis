#include <iostream>
#include <vector>
#include <map>

using namespace std;


int main(){
    map<int, string> res;
    char ops[] = {'+','-','*','/'};

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 4; k++){
                vector<char> operations = {ops[i], ops[j], ops[k]};
                vector<int> v = {4,4,4,4};
                for(int it = 0; it < operations.size(); it++){
                    if(operations[it] == '*'){
                        v[it] = v[it]*v[it+1];
                        v.erase(v.begin()+it+1);
                        operations.erase(operations.begin()+it);
                        it--;
                    }
                    else if(operations[it] == '/'){
                        v[it] = v[it]/v[it+1];
                        v.erase(v.begin()+it+1);
                        operations.erase(operations.begin()+it);
                        it--;
                    }
                }
                for(int it = 0; it < operations.size(); it++){
                    if(operations[it] == '+'){
                        v[it] = v[it]+v[it+1];
                        v.erase(v.begin()+it+1);
                        operations.erase(operations.begin()+it);
                        it--;
                    }
                    else if(operations[it] == '-'){
                        v[it] = v[it]-v[it+1];
                        v.erase(v.begin()+it+1);
                        operations.erase(operations.begin()+it);
                        it--;
                    }
                }
                res[v[0]] = "4 " + string(1, ops[i]) + " 4 " + string(1, ops[j]) + " 4 " + string(1, ops[k]) + " 4 = " + to_string(v[0]);
            }
        }
    }

    string s;
    cin >> s;
    int N = stoi(s), x;
    for(int loop = 0; loop < N; loop++){
        cin >> s;
        x = stoi(s);
        if(res.find(x) != res.end())
            cout << res[x] << endl;
        else
            cout << "no solution" << endl;

    }
}
