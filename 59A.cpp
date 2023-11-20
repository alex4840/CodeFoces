// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;

int main(){
    
    string s ;
    cin>>s; 
    int cntU = 0; 
    int cntL = 0 ;
    
    for(int i = 0 ; i<s.length(); i++){
        if(s[i] >=65 && s[i] <= 90){
            cntU++ ;
        }
        else if(s[i] >=97 && s[i] <= 122){
            cntL++ ;
        }
    }
    if(cntU > cntL){
        for(int i = 0 ; i<s.length();i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] -= 32 ;
            }
        }
        cout<<s<<endl ;
    }
    else if(cntU <= cntL){
        for(int i = 0 ; i<s.length();i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += 32 ;
            }
    }
    cout<<s<<endl ;
    }
}
