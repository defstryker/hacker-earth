#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	string a, b, temp;
	int n;
	getline(cin, temp);
	n = stoi(temp);

	map<char, int> ma;
	
	for (int i = 0; i < n; i++) {
		getline(cin, a);
		getline(cin, b);
		
		for (auto c : a) ma[c] += 1;
		for (auto c : b) ma[c] += 1;

		int moves = 0;
		for (auto it=ma.begin(); it != ma.end(); it++) {
			if (it->second == 1) moves += it->second;
		}

		cout << moves << endl;
	}

}