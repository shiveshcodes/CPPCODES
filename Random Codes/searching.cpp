#include<iostream>

using namespace std;

int linearsearch(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==arr[i]) return i;
    }
    return -1;
}

int binarysearch(int arr[], int n, int key)
{
    int start=0;
    int end=n-1;
    int mid;

    while(start<=end)
    {
        mid=(start+end)/2;
        if(key==arr[mid])
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }

    }
    return -1;
    }

int main()
{
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the key to find: ";
    int key;
    cin>>key;

    cout<<binarysearch(arr,n,key)<<endl;
    return 0;
}
