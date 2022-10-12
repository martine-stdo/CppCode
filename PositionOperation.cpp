#include <iostream>
using namespace std;
int n;
int main() {
    cin >> n;

    for (int i = 31; i >= 0; i--) {
        cout << (n >> i & 1) << " ";
    }
}