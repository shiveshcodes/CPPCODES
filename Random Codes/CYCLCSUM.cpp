#include <bits/stdc++.h>

using namespace std;

int best;int bi;
void kadane(int arr[],int start, int end)
{
    int sum,ti;
    best = INT_MIN;
    sum = 0;
    for (int i=start; i<end; i++)
    {
        sum = max(sum + arr[i], arr[i]);
        if(sum=arr[i]) ti=i;
        best = max(sum, best);
        if(best==sum) bi=ti;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, i = 0;
        cin >> n;
        int arr[2 * n];
        while (i < n)
        {
            cin >> arr[i];
            arr[n + i] = arr[i];
            i++;
        }
        kadane(arr,0,n);
        cout << best ;
        string ans = to_string(best)+" ";

        for (int i = 1; i < n; i++)
        {
            if(!(i<=bi && best + arr[i-1]<best)) kadane(arr,i,i+n);
            ans+=to_string(best)+" ";
        }
        cout << ans <<"\n";
    }
    
    return 0; // 1 2 3 4 1 2 3 4
}