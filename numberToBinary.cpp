#include <iostream>
using namespace std;

//binary converter
void toBinary(int n)
{
    if (n == 0)
    {
        return;
    }
    toBinary(n / 2);
    printf("%d", n % 2);
}

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<endl;
    toBinary(n);
}