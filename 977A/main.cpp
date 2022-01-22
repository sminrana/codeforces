#include <bits/stdc++.h>

int main() {
    int n,k;

    for(std::cin>>n>>k;k--;)
        n%10?n--:n/=10;
    std::cout<<n;

    return 0;
}
