#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t ; 
    cin>>t ;
    while(t--){
        int a,b ;
        cin>>a>>b ;
        if(a+b >= 4 && a != 0 && b != 0){
            if((a+b) == 4){
               cout<<1<<endl ;
            }
            else if(a == b){
                cout<<a/2<<endl ;
            }
            else{
                int max = (a+b) /4 ;
                if(a>b){
                    if(b>=max){
                        cout<<max<<endl ;
                    }
                    else{
                        cout<<b<<endl ;
                    } 
                }
                else if(b>a){
                      if(a>=max){
                          cout<<max<<endl ;
                      }
                      else{
                         cout<<a<<endl ;
                      }
                }
            }
        }
        else{
            cout<<0<<endl ;
        }
    }
}
