#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;
    cin >> n;
    bitset<32> binary(n);  
    int maxOnes = 0, Ones = 0;
    for (int i = 0; i < 32; i++) {
        if (binary[i]) {
            Ones++;
            maxOnes = max(maxOnes, Ones);
        } else {
            Ones = 0;
        }
    }
    cout << maxOnes << endl;
    return 0;
}

