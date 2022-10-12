#include<iostream>
using namespace std;
int n;
int temp;
const int N = 1e6 + 10;
int q[N];

void bubble_sort(int q[], int l, int r) {
    for (int i = 0; i <= r; i++) {
        for (int j = 0; j < r - i; j++) {
            if (q[j] >= q[j + 1]) {
                temp = q[j];
                q[j] = q[j + 1];
                q[j + 1] = temp;       
            }
        }
    }
}


int main() {
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &q[i]);
    }
    bubble_sort(q, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d",q[i]);
    }

    return 0;
}