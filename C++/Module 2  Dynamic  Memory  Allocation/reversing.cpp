#include <bits/stdc++.h>
using namespace std;
int main  ()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin  >> a[i];
    }
    int i=0,j=n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;

    }
    for(int i=0;i<n;i++){
        cout  << a[i] <<" ";
    }
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;
int main  ()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin  >> a[i];
    }
    int i=0,j=n-1;
    while(i<j){
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;

    }
    for(int i=0;i<n;i++){
        cout  << a[i] <<" ";
    }
    return 0;
}
*/