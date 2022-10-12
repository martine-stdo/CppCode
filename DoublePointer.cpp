#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char a[500];
    gets(a);
    int n = strlen(a);
    for (int i = 0; i < n; i++) {
        int j = i; 
        while(j < n && a[j] != ' ') {
            j++;
        }
        for (int k = i; k < j; k++) {
            cout << a[k] << " ";
        }
        puts(" ");
        i = j;

    }
}