#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    // sort(starting,ending)
    /*
    sort (a,a+n);//ascending
    */
    
    sort (a,a+n,greater<int>());//descending
    //if the array is long long int then we put long long int after greater

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}