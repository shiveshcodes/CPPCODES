#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while(testcase-->0)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        
        if(n==1) cout<<1;
        else{
        int total=0;
        int max=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                if(arr[i+1]<max) total++;
            }
        }
        if(arr[n-1]>max) total++;
        
        cout<<total<<endl;
        }
    }
    return 0;
}