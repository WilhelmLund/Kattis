#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> split(string s, char delimiter)
{
   vector<string> tokens;
   string token;
   istringstream tokenStream(s);
   while (getline(tokenStream, token, delimiter))
   {
      tokens.push_back(token);
   }
   return tokens;
}

int main(){
	string s;
	cin >> s;
	int T = stoi(s), N;
	long sum;
	vector<string> v;
	vector<int> preferances;

	for(int i = 0; i < T; i++){
		preferances.clear();
		cin >> s;
		N = stoi(s);
		getline(cin, s); // eat empty line

		sum = 0;
		for(int j = 0; j < N; j++){
			getline(cin, s);
			v = split(s, ' ');
			preferances.push_back(stoi(v[v.size()-1]));
		}
		sort(preferances.begin(), preferances.end());

		for(int j = 1; j <= N; j++){
			sum += max(j-preferances[j-1], preferances[j-1]-j);
		}

		cout << sum << endl;
	}
}