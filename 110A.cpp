#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long a ; 
    cin>>a ;
    int cnt  = 0 ;
    while(a){
        if(a%10 == 4 || a%10 == 7 ){
            cnt++ ;
        }
        a = a/10 ;
    }
    if(cnt == 4 || cnt == 7){
        cout<<"YES"<<endl ;
    }
    else{
        cout<<"NO"<<endl ; 
    }
    return 0 ;
}
