#include<bits/stdc++.h>
using namespace std;

int main(){
  int a[][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
  int row=4;
  int col=3;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
    cout<<endl;
    //spiral:



    for(int j=0;j<col;j++){
        if(j%2==0){
            for (int i = row - 1; i >= 0; i--){
                cout << a[i][j] << " ";
            }
        }else{
            for (int i = 0;i<row; i++){
                cout << a[i][j] << " ";
            }
        }

    }



}
