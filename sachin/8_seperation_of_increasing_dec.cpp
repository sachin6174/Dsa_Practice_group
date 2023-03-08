#include<bits/stdc++.h>
using namespace std;

bool seprator (int *a , int n){


    if(n<=1 ){
        return true;
    }

    for(int i=1;i<n;i++){
        if(a[i-1]==a[i]){
            return false;
        }
    }

    int change_dec = false;
    int change_inc = false;

    if(a[0]<a[1]){
        for(int i=1;i<n;i++){
            if(a[i-1]>a[i]){
                change_dec=true;
            }else if(change_dec==true && a[i-1]<a[i] ){
                return false;
            }
        }
    }
    if(a[0]>a[1]){
        for(int i=1;i<n;i++){
            if (a[i - 1] < a[i]){
                change_inc=true;
            }else if (change_inc == true && a[i - 1] > a[i]){
                return false;
            }
        }

    }
    if((change_dec && change_inc) == false){
        return true;
    }
    return false;
}


int main(){
  int n;
  cin>>n;
  int a[n];
  int element;
  for(int i=0;i<n;i++){
    cin>> element;
    a[i]=element;
  }
  cout<<seprator(a,n);
}
