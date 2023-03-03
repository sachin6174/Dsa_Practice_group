#include<bits/stdc++.h>
using namespace std;


void binary(int *arr, int target, int size){
   
   sort(arr,arr+size);
   for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
   }
   cout<<endl;
   int f=0;int l=size; int mid;


    for(int i=0;i<size;i++){
        mid = (f+l)/2;

        if(target==arr[mid]){
            cout<<mid;
            break;
        }else if(target>arr[mid]){
            f=mid-1;
        }else{
            l=mid+1;
        }
    }
    


}

int main(){
   

    int arr[]={23, 4,23 ,454 ,34,33};
     
    int target;
    cin>>target;
    binary(arr,target,sizeof(arr)/sizeof(int));
    return 0;
}