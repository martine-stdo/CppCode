#include <iostream>
using namespace std;
int lowbit(int x) {
    return x & -x;
}
int main() {
    int x;
    cin >> x;
    int res = 0;
    while(x) {
        x -= lowbit(x);
        res++;
    }
    cout << res <<endl;


}