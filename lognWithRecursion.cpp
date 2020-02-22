#include<iostream>
using namespace std;

//log of base 2
int logarithm(int n){
    if(n==1){
        return 0;
    }
    else
        return 1+logarithm(n/2);
}

//main
int main(){
    int l;
    printf("Enter the value :");
    cin>>l;
    printf("\n%d",logarithm(l));
}