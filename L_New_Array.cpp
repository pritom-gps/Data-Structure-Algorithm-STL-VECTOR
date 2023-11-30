#include <bits/stdc++.h>
using namespace std;
vector<int> fun(int *a, int *b, int n)
{
    vector<int> p(b, b + n);
    for (int i = 0; i < n; i++)
    {
        p.push_back(a[i]);
    }
    return p;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<int> v = fun(a, b, n);
    for (int c : v)
        cout << c << " ";
    return 0;
}