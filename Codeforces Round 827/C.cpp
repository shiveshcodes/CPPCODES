#include<bits/stdc++.h>
using namespace std;


char check(char arr[8][8], bool row, bool col, int num)
{
    if(row)
    {
        for(int i=0;i<8;i++)
        {
            if(arr[num][i]!='R')
            {
                return check(arr, false, true, i);
            }
        }
        return 'R';
    }
    else if(col)
    {
        for(int i=0;i<8;i++)
        {
            if(arr[i][num]!='B')
            {
                return check(arr, true, false, i);
            }
        }
        return 'B';
    }
    return 'N';
}


int main(){
    int t;
    cin >> t;
    while(t--)
    {
        char arr[8][8];
        char ans;

        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                char c;
                cin >> c;
                arr[i][j] = c;
            }
        }

        for(int i=0;i<8;i++)
        {
            if(arr[0][i]!='.' || arr[i][0]!='.')
            {
                if(arr[0][i]=='R')
                {
                    ans = check(arr, true, false, 0);
                    break;
                }
                else if(arr[0][i]=='B')
                {
                    ans = check(arr, false, true, i);
                    break;
                }
                else if(arr[i][0]=='R')
                {
                    ans = check(arr, true, false, i);
                    break;
                }
                else if(arr[i][0]=='B')
                {
                    ans = check(arr, false, true, 0);
                    break;
                }
            }
        }

        cout << ans << endl;
    }
}

