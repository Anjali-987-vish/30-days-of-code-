#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        //even
        for (int i = 0; i < s.length(); i += 2) {
            cout << s[i];
        }
        cout << " ";
        //odd
        for (int i = 1; i < s.length(); i += 2) {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}

