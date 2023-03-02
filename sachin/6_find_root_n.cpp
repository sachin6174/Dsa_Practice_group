#include<bits/stdc++.h>
using namespace std;

int rootn_in_order_n(int n){
    //equal to n is must in loop//handle edge case
    if(n==1||n==0){
        return n;
    }
    for(int i=0;i<=n;i++){
        if(n<i*i){
            return i-1;
        }
    }
    return -1;
}
int rootn_in_order_logn(int n){
    // we can do jabardasti with edge cases
    // here it is automatically handled
    int s=0;
    int e=n;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid*mid<=n and n<(mid+1)*(mid+1)){
            return mid;
        }else if(n< mid*mid){
            e=mid;
        }else{
            s=mid+1;
        }
    }


     
    return -1;
}

int main(){
  int n;
  cin>>n;
  cout<<rootn_in_order_n(n)<<endl;
  cout<<rootn_in_order_logn(n)<<endl;

}
