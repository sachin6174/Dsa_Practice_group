#include<bits/stdc++.h>
using namespace std;


int main(){
   int n;
   cin>>n;

   int space1=n-1;
   int star1=1;
   

   int space2=1;
   int star2=(2*n-1)-2;//for the layer after nth layer


   for(int i=1;i<=2*n-1;i++){

    if(i<=n){
        //printing space
        for(int j=1;j<=space1;j++){
            cout<<" ";
        }
     //printing star
        for(int j=1;j<=star1;j++ ){
             cout<<"*";
        }
         
         space1--;
         star1+=2;
    }else{
         for(int j=1;j<=space2;j++){
            cout<<" ";
         }

         for(int j=1;j<=star2;j++){
             cout<<"*";
         }

         space2++;
         star2-=2;
    }

     cout<<endl;
   }

    return 0;
}