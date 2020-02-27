#include<bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> c)
{
    int count = 0;
    for (int i = 0; i < c.size();i++)
    {
        if(i+2<c.size()){
            if(c[i+2]==0){
                count++;
                i++;
            }
            else if(c[i+1]==0){
                count++;
            }
        }
        else if(i+1<c.size()){
            if(c[i+1]==0){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> a{0,0,1,0,0,0,0,0};
    cout<<jumpingOnClouds(a);
    return 0;
}