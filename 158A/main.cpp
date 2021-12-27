#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,k,i=0,j=0,a[51];
    cin>>n>>k;

    while(n>i)cin>>a[i++];

    while(a[j]&&a[j]>=a[k-1])++j;

    cout<<j;

    return 0;
}
