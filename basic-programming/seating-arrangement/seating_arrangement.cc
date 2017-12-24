#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		string s;
		cin >> x;
		x % 2 == 0 ? s.append(to_string(x+1)) : s.append(to_string(x-1));

		cout << s << endl;
	}
}