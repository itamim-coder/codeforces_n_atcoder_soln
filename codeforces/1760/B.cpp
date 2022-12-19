#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;
    int max;
    for (int i = 0; i < n; i++)
    {

        int y;
        cin >> y;
        int max = 0;
        string s;
        cin >> s;
        for (int x = 0; x < y; x++)
        {

            // cout << int(s[x]) << endl;
            if (max < int(s[x]))
            {
                max = int(s[x]);
            }
        }
        cout << max - 96 << endl;
    }
}
