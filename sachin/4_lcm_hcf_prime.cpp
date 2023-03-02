#include<bits/stdc++.h>
using namespace std;

int hcf(int a, int b)
{
    while(a!=0){
        int temp=a;
        a=b%a;
        b=a;
    }
    return b;
}

int lcm(int a, int b){
    return (a*b)%hcf(a,b);
}

bool primeornot(int n){
    bool isprimeornot=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprimeornot=false;
        }
    }
    return isprimeornot;
}

int main(){
    int a,b;
    cin>>a>>b;

    
  

}
