#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
    int min,minpos,temp;
    for(int i=0;i<n;i++)
    {
        min=arr[i];
        minpos=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                minpos=j;
            }
        }
        temp=arr[i];
        arr[i]=min;
        arr[minpos]=temp;
    }
}

void bubblesort(int arr[], int n)
{
    int temp;
    bool sorted;
    for(int i=0;i<n;i++)
    {
        sorted=true;
        for(int j=n-1;j>i;j--)
        {
            if(arr[j]<arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                sorted=false;
            }
        }
        if(sorted) break;
    }
}

void insertionsort(int arr[],int n)
{
    int j,temp;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        while(j>=0 && arr[j]>arr[j+1])
        {
            temp= arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    insertionsort(arr,n);
    printarray(arr,n);
    return 0;
}