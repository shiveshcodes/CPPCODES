#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test-- > 0)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n < 2)
            cout << 0;
        else if (n == 2)
            cout << 2;
        else
        {
            int maxlen = 2, templen = 2;
            int currdiff, prevdiff = arr[1] - arr[0];
            for (int i = 1; i < n - 1; i++)
            {
                currdiff = arr[i + 1] - arr[i];
                if (currdiff == prevdiff)
                {
                    templen++;
                }
                else
                {
                    maxlen = max(maxlen, templen);
                    templen = 2;
                }
                prevdiff = currdiff;
            }
            cout << maxlen;
        }
        cout << endl;
    }
    return 0;
}