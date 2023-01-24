#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int j = 0; j < n; j++)
    {
        int ans = 0;
        int foundOne = 0;
        int g;
        cin >> g;
        int arr[g];
        for (int i = 0; i < g; i++)
        {
            cin >> arr[i];
        }
        for (int x = 0; x < g; x++)
        {
            if (arr[x] == 1)
            {
                foundOne++;
            }

            else if (arr[x] > 1)
            {
                ans++;
            }
        }
        int one = ceil(foundOne / 2.00);
        cout << ans+one << endl;
    }
}