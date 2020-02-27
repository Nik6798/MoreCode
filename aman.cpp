#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void logarithm(ll n)
{
    ll sum=0;
    for(int i=1;i<=n;i++){
        sum+=(1/i);
    }
}

//main
int main()
{
    ll l;
    printf("Enter the value :");
    cin >> l;
    logarithm(l);
    
}