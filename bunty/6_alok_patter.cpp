#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int size=2*n-1;
   int arr[size];
   int start1=1;
   int end1=size-2;

   int start2=(n-1)+1-1;
   int end2=(n-1)+1-1;
   for(int i=0;i<size;i++){
       arr[i]=n;
   }

   for(int i=1;i<=2*n-1;i++){
     if(i<=n){
        for(int j=0;j<size;j++){
            cout<<arr[j];
        }
        for(int k=start1;k<=end1;k++){
            arr[k]--;
        }
        start1++;
        end1--;
     }else{
         for(int j=start2;j<=end2;j++){
            arr[j]++;
         }

         for(int k=0;k<size;k++){
            cout<<arr[k];
         }

         start2--;
         end2++;
     }

     cout<<endl;
   }

    return 0;
}