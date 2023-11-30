#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (int c : s)
        freq[c - 'a']++;
    // for (int i = 0; i < s.size(); i++)
    //     freq[s[i] - 'a']++;
    // for (char i = 'a'; i <= 'z'; i++)
    // {
    //     if (freq[i - 97] != 0)
    //     {
    //         cout << i << " : " << freq[i-97] << endl;
    //     }
    // }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            cout << (char)(i + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}