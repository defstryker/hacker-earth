#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	string a, b, temp;
	int n, count = 0;
	getline(cin, temp);
	n = stoi(temp);

	map<char, int> ma, mb;
	
	for (int i = 0; i < n; i++) {
		getline(cin, a);
		getline(cin, b);
		
		for (auto c : a) ma[c] += 1;
		for (auto c : b) mb[c] += 1;

		// cout << "c : " << ma['c'] << " and " << mb['c'] << endl;

		for (auto it=ma.begin(); it != ma.end(); it++) {
			//std::cout << it->first << " => " << it->second << '\n';
			for (auto jt=mb.begin(); jt != mb.end(); jt++) {
				//cout << "ma " << it->first << " " << it->second << "\n";
				//cout << "mb " << jt->first << " " << jt->second << "\n\n";
				if (it->first != jt->first && (it->second - jt->second) == 0) {
					//cout << "test2\t" << count << endl;
					count++;
				}
			}
		}
		cout << count/2 << endl;
		count = 0;
	}

}