#include<bits/stdc++.h>
using namespace std;


int main(){
   

//for the firist half part vertically
//    for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//     if(j<t+1){
//     cout<<j;
//    }else{
//     cout<<"*";
//    }
//    }
//    //cout<<endl;
//    t--;
//    }


//for the second half vertically
//     int k=n;
//     for(int i=1;i<=n;i++){
//     for(int j=n;j>=1;j--){
//     if(j>k){
//     cout<<"*";
//    }else{
//     cout<<j;
//    }
//    }
//    cout<<endl;
//    k--;
//    }

  int n;
    cin>>n;
   int t=n;
    int k=n;


// for the first half 
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    if(j<t+1){
    cout<<j;
   }else{
    cout<<"*";
   }
   }
//for the second half
    for(int j=n;j>=1;j--){
    if(j>k){
    cout<<"*";
   }else{
    cout<<j;
   }
   }
   k--;
   t--;
   cout<<endl;
   
}
    return 0;
}