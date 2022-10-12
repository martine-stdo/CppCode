#include <iostream>
#include <algorithm>
using namespace std;

int n;
const int N = 1e6 + 10;
int q[N];

int main()
{

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &q[i]);
    }

    sort(q, q + n);

    for (int i = 0; i < n; i++)
    {
        printf("%d", q[i]);
    }

    return 0;
}