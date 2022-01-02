#include <bits/stdc++.h>

int main() {
    int k,n,w, amountToBorrow=0;
    std::cin>>k>>n>>w;
    for(int i=1; i<=w;i++) {
        amountToBorrow+=k*i;
    }

    if (n<=amountToBorrow) {
        std::cout<<amountToBorrow-n;
    } else {
        std::cout<<0;
    }

    return 0;
}
