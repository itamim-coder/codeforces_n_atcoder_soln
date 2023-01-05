#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;

    while (a--)
    {
        int b;
        cin >> b;

        if (b < 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b - 1 << endl;
        }
    }
}
