#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int freq[10005] ={0};
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x] = 1;
        }
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if(freq[i] == 0)
            {
                count++;
            }
        }
        if(count<=k) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}