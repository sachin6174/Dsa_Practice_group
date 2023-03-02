#include<bits/stdc++.h>
using namespace std;

int binarysearch(int *a,int t,int n){
    sort(a,a+n);
    for(int i=0;i<n;i++ ){
        cout<< a[i]<<" ";
    }
    cout<<endl;

    int ans=-1;
    int s=0;int e=n-1;
    while(s<=e){ //bunty show binary 
        int mid = s+(e-s)/2; // to avoid over flow condition
        if(a[mid]==t){
            ans=mid;
            break;
        }else if(a[mid]<t){
            s=mid+1;
        }else{
            e=mid-1;
        }
        
    }
    return ans;
}

int main(){
    int arr[] ={ 12,4,23,79,25,8,3,1,5,345};
    int target;
    cin>>target;
    cout<<binarysearch(arr,target,sizeof(arr)/sizeof(int));


  
}
