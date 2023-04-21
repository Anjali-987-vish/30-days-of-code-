#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, string> phoneBook;
    while (n--) {
        string name, number;
        cin >> name >> number;
        phoneBook[name] = number;
    }

    string query;
    while (cin >> query) {
        map<string, string>::iterator it = phoneBook.find(query);
        if (it != phoneBook.end()) {
            cout << (*it).first << "=" << (*it).second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}

