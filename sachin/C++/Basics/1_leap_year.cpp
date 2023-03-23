#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                cout<<"yes";
            }else{
                cout<<"No";
            }
        }else{
            cout<<"Yes";
        }
    }else{
        cout<<"No";
    }
  
}
