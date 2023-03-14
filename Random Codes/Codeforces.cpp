#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int count=0,in,pro=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cin >> in;
            if(in) count++;
        }
        if(count>=2) pro++;
        count=0;
    }
    cout << pro << endl;
    return 0;
}