#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>>s ;
    set<char>distinct;
    distinct.insert(s.begin(), s.end());
    if(distinct.size()>=2){
        if(distinct.size()%2 == 0 ){
            cout<<"CHAT WITH HER!"<<endl ;
        }
        else{
            cout<<"IGNORE HIM!"<<endl ;
        }
    }
    else{
        return 0 ;
    }
    
}
