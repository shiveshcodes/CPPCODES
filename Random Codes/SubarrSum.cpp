#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum;
    cin >> sum;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int temp;

    int i,j;
    bool found;
    for(i=0;i<n;i++)
    {
        temp+=arr[i];
        for(j=i+1;j<n;j++)
        {
            temp+=arr[j];
            if(temp==sum) 
            {
                found=true;
                break;
            }
            else if(temp>sum) 
            {
                found=false;
                break;
            }
        }
        if(found) break;
        temp=0;
    }

    if(found) cout<<i+1<<" "<<j+1<<endl;
    else cout<<"Not Found"<<endl;
    return 0;
}