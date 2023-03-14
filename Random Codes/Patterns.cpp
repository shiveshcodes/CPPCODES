#include <iostream>
using namespace std;

void butterfly()
{
    cout<<"Enter the value of n: ";
    int n;
    cin>>n;
    int len=2*n;
    int i;
    for(int k=1;k<=len;k++)
    {
        i=k>n?len-k+1:k;
        for(int j=1;j<=len;j++)
        {
            if(j<=i || j>len-i)
            {
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void rectangle()
{
    cout << "Enter the value of length and breadth: ";
    int len, bred;
    cin >> len >> bred;
    for (int i = 1; i <= len; i++)
    {
        for (int j = 1; j <= bred; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void binarypattern()
{
    cout<<"Enter value of n: ";
    int n;
    cin>>n;
    int ele;
    for(int i=1;i<=n;i++)
    {
        ele=i%2;
        for(int j=1;j<=i;j++)
        {
            cout<<ele<<" ";
            ele=(ele+1)%2;
        }
        cout<<endl;
    }
}

void rhombuspattern()
{
    cout<<"Enter the value of n: ";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=n;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void palindromicnumbers()
{
    cout<<"Enter the value of n: ";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int k=i;k>1;k--)
        {
            cout<<k<<" ";
        }
        for(int l=1;l<=i;l++)
        {
            cout<<l<<" ";
        }
        cout<<endl;
    }
}

void zigzag()
{
    cout<<"Enter the value on n: ";
    int n;
    cin>>n;

    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i+j)%4==0 || i==2 & j%4==0)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;

    }
  
}

int main()
{
    zigzag();
    return 0;
}

