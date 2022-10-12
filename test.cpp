#include <iostream>
using namespace std;
const int N = 100010;
int a[N], b[N];

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int j = 0; j < n; j++) {
        scanf("%d", &b[j]);
    }
    bool flag;
    for (int i = 0; i < m; i++) {
        flag = false;
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]){
                flag = true;
            }    
        }
    }
    
    if (flag) {
        printf("Yes");
    } else {
        printf("No");
    }
    
}