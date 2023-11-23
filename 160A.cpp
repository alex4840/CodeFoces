#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int n ; 
    cin>>n ; 
    int cnt = 0 ;
    int sum = 0 ;
    int arr[n];
    int sum1 = 0 ;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
        sum += arr[i] ;
    }
    int half = sum/2 ;
    sort(arr,arr+n) ;
    for(int i = n-1 ; i>=0; i--){
        sum1 += arr[i] ;
        cnt++ ;
        if(sum1 > half){
            break ;
        }
    }
    cout<<cnt<<endl ;
    
}
