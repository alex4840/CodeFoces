#include<iostream>
using namespace std ;

int main(){
    string s,S ;
    cin>>s ;
    for(int i = 0 ; i<s.length();i++){
        if(s[i] == '.'){
            S += '0' ;
        }
        if(s[i] == '-' && s[i+1] == '.'){
            S += '1' ;
            i++ ;
        }
        if(s[i] == '-' && s[i+1] == '-'){
            S += '2' ;
            i++ ;
        }
    }
    cout<<S<<endl ;
    return 0 ;
}
