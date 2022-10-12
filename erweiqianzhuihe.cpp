#include<iostream>
using namespace std;

const int N = 10010;

int a[N][N], s[N][N];

int main() {
    int m, n, q;
    cin >> m >> n >> q;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", a[i][j]);
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            s[i][j] = s[i][j - 1] + s[i - 1][j] + a[i][j];
        }
    }

    while(q--) {
        int x1, y1, x2, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        printf("%d",s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 -1][y1 - 1]);
    }


}