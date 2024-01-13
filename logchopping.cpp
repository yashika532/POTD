#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            count += (arr[i] - 1);
        }
        if (count % 2 == 0)
            cout << "maomao90" << endl;
        else
            cout << "errorgorn" << endl;
    }

    return 0;
}