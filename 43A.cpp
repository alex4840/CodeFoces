#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int n ; 
    cin>>n ;
    map<string,int>mp ;
    while(n--){
        string s ;
        cin>>s ;
        mp[s]++ ;
    }
    int maxi = -1;
    string maxChar ;
    for(auto i : mp){
        if(maxi < i.second){
            maxi = i.second ;
            maxChar = i.first ;
        }
    }
    cout<<maxChar<<endl ;
}
