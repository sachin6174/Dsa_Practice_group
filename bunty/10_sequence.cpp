#include<bits/stdc++.h>
using namespace std;


int sequence(int *arr, int n){
    
   

bool flag=true;
   
  for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1]){
       continue;
    }else{
        //for(int j=i;j<n;j++){

            if(arr[i]<arr[i+1]){
              continue;
            }else{
             cout<<"false"<<endl;
                break;
            }
            
        }
    cout<<"true"<<endl;

    //}
       
  }
  return 0;
};

int main(){
    
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }

    sequence(arr,n);

    return 0;
}
