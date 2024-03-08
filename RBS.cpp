#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n%2!=0)
        {
            cout<<"Impossible"<<endl;

        }
        else
        {
            int count1=0;
            int count2=0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='(')
                {
                    count1++;
                }
                else if(s[i]==')')
                {
                    count2++;
                }
            }
            if(count1==count2) cout<<"Possible"<<endl;
            else cout<<"Impossible"<<endl;
        }
    }
    return 0;
}