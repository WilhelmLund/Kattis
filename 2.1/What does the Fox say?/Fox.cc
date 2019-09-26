#include <iostream>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;
	int T = stoi(s);
	getline(cin, s);
	for(int i = 0; i < T; i++){
		getline(cin, s);
		//cout << s << endl;
		istringstream iss(s);
		vector<string> sounds((istream_iterator<string>(iss)), istream_iterator<string>());
		getline(cin, s);
		while(s.compare("what does the fox say?") != 0){
			//cout << "still no fox" << endl;
			istringstream iss2(s);
			vector<string> input((istream_iterator<string>(iss2)), istream_iterator<string>());
			string curSound = input[2];
			vector<string>::iterator pos = std::find(sounds.begin(), sounds.end(), curSound);
			while(pos != sounds.end()){
				//cout << "more " + curSound + " sounds present" << endl;
				sounds.erase(pos);
				pos = std::find(sounds.begin(), sounds.end(), curSound);
			}
			getline(cin, s);
		}
		cout << sounds[0];
		for(int i = 1; i < sounds.size(); i++){
			cout << " " << sounds[i];
		}
		cout << endl;
	}
	return 0;
}