#include <iostream>
using namespace std;
TODO:this task is yet to complete;
int fibonacci(int n, int memo[])
{
    int memo[n+2];
    int i;
    memo[0]=0;
    memo[1]=1;  
    if(n<=1){
        return n;
    }
    else if(memo[n]){
        memo[n]= fibonacci(n-1,memo)+fibonacci(n-2,memo);
    }
    return memo[n];
}

//mian
int main()
{
    int ar[1005];
    int T,N;
    printf("Enter the number of Tese Cases: ");
    cin>>T;
    while(T--){
        printf("\nEnter the value :");
        cin>>N;
        cout<<fibonacci(N,ar);
    }
}