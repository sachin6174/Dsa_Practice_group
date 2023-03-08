#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={4,5,0,8,3,9,1,3,4,5,6,0,9};
    int n=sizeof(a)/sizeof(int);

    int maxi=a[0];

    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
    }

    int maxi_copy=maxi;// as i am going to decrease thats why using copy of data

    for(int i=1; i<=maxi;i++){
        for(int j=0;j<n;j++){

            if(maxi_copy == a[j]){
                cout<<"*";
                a[j]--;
            }else{
                cout<<" ";
            }
            
        }
        maxi_copy--;
        cout<<endl;
    }

  
}
