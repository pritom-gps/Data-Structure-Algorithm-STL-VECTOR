#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, qry;
    cin >> n >> qry;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> vv(2);
    for (int q = 0; q < qry; q++)
    {
        for (int r = 0; r < 2; r++)
        {
            cin >> vv[r];
        }
        int sum=0;
        for(int o=vv[0]-1;o<vv[1];o++)
        {
            sum=sum+v[o];
        }
        cout<<sum<<endl;
    }
    return 0;
}