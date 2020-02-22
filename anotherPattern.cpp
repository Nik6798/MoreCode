#include<iostream>
using namespace std;

void fun(int n){
    if(n>0)
    {
        fun(--n);
        printf("%d\t",n);
        fun(--n);
    }
}

int main(int argc, char const *argv[])
{
    fun(4);
    return 0;
}
