#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    // for(int i=0,j=n-1;i<j;i++,j--)
    // {
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    // }
    reverse(v.begin(),v.end());
    for(int b:v)
    cout<<b<<" ";
    return 0;
}