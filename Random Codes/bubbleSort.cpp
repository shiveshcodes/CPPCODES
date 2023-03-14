#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

int * bubbleSort(int arr[],int n)
{
    int temp;
    bool sorted = true;
    for(int i=0;i<n;i++)
    {
        sorted=true;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                sorted=false;
            }
            if(sorted) break;

        }
    }
    return arr;
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
auto start = high_resolution_clock::now();
int n;
int arr[n];
cin >> n;
for(int i=0;i<n;i++)
{
    cin >> arr[i];
}

for(int x:arr) cout << x << " ";
 
bubbleSort(arr,n);

for(auto x :arr)
{
    cout << x << " ";
}
cout << endl;

auto stop = high_resolution_clock::now();
cout << duration_cast<microseconds>(stop - start).count() << endl;
return 0;
}