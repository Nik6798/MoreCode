#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<char> a;
    string s="<{{[{()}]}}";
    for(int i=0;i<s.size();i++){
        if(a[i]==s[i]){
            a.pop_back();
        }
        else
        {
            a.push_back(s[i]);
        }
    }    
    cout<<a.size();
    return 0;
}