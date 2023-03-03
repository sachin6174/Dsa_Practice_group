#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
 
    while(a!=0){
        int temp=a;
        a=b%a;
        b=temp;
    }
    return b;
}

int lcm(int a, int b){
    return a*b/(gcd(a,b));
}

int megatron_prime(int n){

    bool sahi=true;

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            sahi=false;
            break;
        }
    }
    return sahi;
}

int main(){
    

    cout<<lcm(18,4)<<endl;
    cout<<gcd(18,4)<<endl;
    cout<<megatron_prime(7)<<endl;

    return 0;
}