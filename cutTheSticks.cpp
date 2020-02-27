#include<bits/stdc++.h>
using namespace std;

vector<int> cutTheSticks(vector<int> arr)
{
    sort(begin(arr), end(arr));
    // 1 1 2 2 3 3 3 4
    vector<int> res;
    for (int i = 0; i < arr.size(); i++)
    {
        int min=0;
        if(arr[i]!=0){
            min=arr[i];
            for (int j = i; j < arr.size(); j++)
            {
                arr[j]-=min;   
                
            }
            res.push_back(arr.size()-i);
        }

    }
    return res;    
}
int main(){
    vector<int> a{5 ,4 ,4 ,2, 2 ,8};
    vector<int> res=cutTheSticks(a);
    for(int i:res){
        cout<<i<<" ";
    }
}