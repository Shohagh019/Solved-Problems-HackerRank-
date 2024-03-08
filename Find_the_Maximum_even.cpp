// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >>n;
//     int a[n];
//     int even = 0;
//     for(int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int maxOdd1 = 0;
//     int maxEven1 = 0;
//     for(int i = 0; i < n; i++)
//     {
//         if(a[i]%2==0)
//         {
//             maxEven1 = max(maxEven1,a[i]);
//         }
//         else
//         {
//             maxOdd1 = max(maxOdd1,a[i]);
//         }
//     }
//     int maxOdd2 = 0;
//     int maxEven2 = 0;
//     for(int i = 0; i < n; i++)
//     {
//         if(a[i]%2==0 && a[i]!=maxEven1)
//         {
//             maxEven2= max(maxEven2,a[i]);
//         }
//         else if(a[i]%2!=0 && a[i]!=maxOdd1)
//         {
//             maxOdd2 = max(maxOdd2,a[i]);
//         }
//     }
//     int result1= maxEven1+maxEven2;
//     int result2= maxOdd1+ maxOdd2;
//     if(result1>result2) cout<<result1;
//     else cout<<result2;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    }
    int maxEven = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            maxEven = max(maxEven, arr[i]);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if ((arr[i] + arr[j]) % 2 == 0) {
                maxEven = max(maxEven, arr[i] + arr[j]);
            }
        }
    }
    cout << maxEven << endl;
    return 0;
}
