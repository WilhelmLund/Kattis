#include <iostream>
#include <vector>

using namespace std;

vector<long> lastNon0Digit;

long getDigit(long x){
	//cout << lastNon0Digit.size() << endl;
	if(x < lastNon0Digit.size())
		return lastNon0Digit[x];

	else{
		long tmp = getDigit(x-1) * x;
		while(!(tmp%10))
			tmp /= 10;
		tmp %= 10000000000; // don't need full accuracy for this to work in this range (would need full precision if numbers were arbitrarily big)

		lastNon0Digit.push_back(tmp);
		return tmp;
	}
}

int main(){
	lastNon0Digit.push_back(0); // for easier indexing
	lastNon0Digit.push_back(1); // 1!
	string s;
	cin >> s;
	long x = stol(s);

	while(x != 0){
		//cout << lastNon0Digit.size() << endl;
		cout << getDigit(x)%10 << endl;
		cin >> s;
		x = stol(s);
	}
}