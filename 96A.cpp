#include<bits/stdc++.h>
using namespace std ; 

string checking(string &s){
    int cnt = 0 ; 
    for(int i = 0 ; i<s.length()-1 ; i++){
        if(s[i] == s[i+1]){
            cnt++ ;
            if(cnt == 6){
                return "YES";
            }
        }
        else{
            cnt = 0 ;
        }
    }
    return "NO";
}

int main(){

    string s  ; 
    cin>>s ; 
    string ans = checking(s);
    cout<<ans<<endl ;
    return 0 ;
}
