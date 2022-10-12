#include <iostream>
using namespace std;

void print(int n) {
    // if (n > 1) {
    //     print(n - 1);
    // }
    // printf("%d", n);
    //1.递归
    if (n) {
        print(n - 1);
        cout << n << endl;
    }
    // //2.正常循环
    // for (int i = 1; i <= n; i++) {
    //     cout << i <<endl;
    // }

}

int main() {
    int N = 1e6;
    //scanf("%d",&N);
    print(N);
    return 0;

}