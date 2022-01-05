
#include <bits/stdc++.h>
using namespace std;

long long int countSquares(int n)
{
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

int main()
{

    int n;
    cin >> n;
    cout << countSquares(n);
    return 0;
}
