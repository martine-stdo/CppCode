#include<iostream>
using namespace std;
const int N = 1e6 + 10;
int q[N], temp[N];

void MergeSort(int q[], int l, int r) {
    if (l >= r) {
        return;
    }

    int mid = l + r >> 1;
    MergeSort(q, l, + mid), MergeSort(q, mid + 1, r);

    int k = 0, i = l, j = mid + 1;

    while(i <= mid && j <= r) {
        if (q[i] <= q[j]) {
            temp[k++] = q[i++];
        } else { 
            temp[k++] = q[j++];
        }
    }

    while(i <= mid) {
        temp[k++] = q[i++];
    }

    while(j <= r) {
        temp[k++] = q[j++]
    }

    for (int i = l, k = 0; i <= r; j++, k++) {
        q[i] = temp[k];
    }


}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }

    MergeSort(q, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << q[i] << " ";
    }

    return 0;
}
