#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef pair<int,int> PII;
const int N = 3e5 + 10;
int m, n;
int a[N], s[N];
vector<PII> add, query;
vector<int> alls;

int find(int x) {
    int l = 0, r = alls.size() - 1;
    while(l < r) {
        int mid = l + r >> 1;
        if (alls[mid] >= x ) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return r + 1;
}

int main() {
    cin >> m >>n;
    for (int i = 0; i < m; i++) {
        int x, c;
        cin >> x >> c;
        add.push_back({x,c});
        alls.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        query.push_back({l, r});
        alls.push_back(l);
        alls.push_back(r);
    }
    sort(alls.begin(), alls.end());
    alls.erase(unique(alls.begin(),alls.end()), alls.end());

    for (auto item : add) {
        int x = find(item.first);
        a[x] += item.second;
    }
    for (int i = 0; i < alls.size(); i++) {
        s[i] = s[i - 1] + a[i];
    }

    for (auto item : query) {
        int l = item.first, r = item.second;
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
}
