#include<iostream>
using namespace std;
 
 const int N = 100010;
 int son[N][26], cnt[N], idx;

 void insert(char str[]) {
    int p = 0;
    for (int i = 0; str[i]; i++) {
        int u = str[i] - 'a';
        if (!son[p][u]) {
            son[p][u] = ++idx;
            p = son[p][u];
        }
    }
 }

 int main() {
    insert("abcccdfff");
 }