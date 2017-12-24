#include <iostream>

using namespace std;

int main() 
{
    int l = 0, w = 0, h = 0, n = 0;
    cin >> l;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> w;
        cin >> h;
        if (w < l || h < l) cout << "UPLOAD ANOTHER\n";
        else w == h ? cout << "ACCEPTED\n" : cout << "CROP IT\n";
    }
    return 0;
}