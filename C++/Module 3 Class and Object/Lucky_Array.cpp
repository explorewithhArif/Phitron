#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    //finding minimum element
    int minimum = INT_MAX;
    for(int i=0;i<n;i++){
        minimum = min(a[i],minimum);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(minimum==a[i]){
            count++;
        }
    }
    if(count%2!=0){
        cout << "Lucky";
    }
    else{
        cout << "Unlucky";
    }
    return 0;
}