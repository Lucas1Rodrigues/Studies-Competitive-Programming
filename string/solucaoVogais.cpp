#include <iostream>

using namespace std;

int main() {
	string s, consoantes, vogais;
	cin >> s;
	
	for (int i=0; i<s.size(); i++) {
		if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u') {
			vogais+=s[i];
		}
		else {
			consoantes+=s[i];
		}
	}
	cout << "Vogais: " << vogais << endl;
	cout << "Consoantes: " << consoantes << endl;
}

