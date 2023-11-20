#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n, m ;
    cin>>n>>m ;
    if((n+m) >= 2){
        if(min(n,m) %2 !=0 ){
            cout<<"Akshat"<<endl ;
        }
        else{
            cout<<"Malvika"<<endl ;
        }
    }
    return 0 ;
}
