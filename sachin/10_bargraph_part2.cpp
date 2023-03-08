#include <iostream>
using namespace std;
int main(){

    int a[]={1,4,6,0,-4,6,3,-1,-3,4,0,3,2,6};
    int n = sizeof(a)/sizeof(int);
    int maxi = a[0];
    int mini = a[0];
    for(int i=0;i<n;i++){
        mini=min(a[i],mini);
        maxi=max(a[i],maxi);
    }

    int mini_copy = mini;
    int maxi_copy = maxi;

    for (int i = 1; i <= maxi; i++){
        for (int j = 0; j < n; j++){
            if (maxi_copy == a[j]){
                cout << "*";
                a[j]--;
            }
            else{
                cout << " ";
            }
        }
        maxi_copy--;
        cout << endl;
    }
    for(int i=0; i<n;i++){
        cout<<"-";
    }

    cout<<endl;
    if(mini<0){

        for (int i = 0; i < n; i++){
            a[i]*=-1;
        }

        mini_copy=-mini_copy;
        int comp=1;
        for(int i=1;i<= mini_copy;i++ ){
            for(int j= 0; j<n;j++){
                if(comp<=a[j]){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
                
                
            }
            comp++;
            cout<<endl;
        }
    }


}