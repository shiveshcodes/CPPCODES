#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    char meow[] = {'m', 'e', 'o', 'w'};
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        transform (s.begin(), s.end(), s.begin(), ::tolower);
        int meowIndex = 0;
        char current = meow[meowIndex];
        int i;
        for(i=0;i<n;i++){
            if(s[i]!=current)
            {
                if(i==0) {break;}
                else if (s[i-1] == current && current!='w' && s[i]==meow[meowIndex+1])
                {
                    meowIndex++;
                    current = meow[meowIndex];
                }
                else{
                    break;
                }
            }
        }
        if(i==n && current == 'w') cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}