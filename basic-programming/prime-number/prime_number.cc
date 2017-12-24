#include <iostream>
#include <vector>
#include <numeric>
#include <math.h>

using namespace std;

bool tester(int x, int m) {return x % m == 0 && x != m;}

int main()
{
    int n = 0;
    cin >> n;
    vector<int> v(n-1);
    std::iota(v.begin(), v.end(), 2);
    for (int i = 2; i <= round(sqrt(n)); i++)
        for (int j = 0; j < v.size(); j++)
           if (tester(v.at(j), i)) v.erase(v.begin() + j);

    for (auto c : v) cout << c << " ";
    cout << endl;

    return 0;
}