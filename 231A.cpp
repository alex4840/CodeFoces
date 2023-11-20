#include<bits/stdc++.h>
using namespace std ;
 
int main(){
    int t ; 
    cin>>t ;
    int cnt = 0 ;
    while(t){
        int a,b,c;
        cin>>a>>b>>c ;
        if(a+b == 2 || b+c == 2 || a+c == 2){
            cnt += 1 ;
        }
        t--;
    }
    cout<<cnt<<endl ;
    return 0 ; 
}
