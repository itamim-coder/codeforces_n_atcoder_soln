#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;

        int sumAB = a + b;
        int sumBC = b + c;
        int sumAC = a + c;

        if (sumAB == c || sumBC == a || sumAC == b)
        {
            cout << "YES"<<endl;
        }
        else{
              cout << "NO"<<endl;
        }
    }
}