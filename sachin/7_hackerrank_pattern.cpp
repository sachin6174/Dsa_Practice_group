#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;

   int size=2*n-1; 

   int s_1=1; 
   int e_1=size-2;

   int s_2 = (n - 1) + 1-1; 
   int e_2 = (n - 1) + 1-1; 
   // inthe terms of indexing so -1
    // 2*n-1=(n-1)+1+(n-1)

   //array help
   int a[size]; // learn about run time allocation
   for (int i = 0; i < size; i++){
       a[i] = n;
    }

  for(int i=1;i<=size;i++){
    if(i<= n){
        for (int j = 0; j < size; j++){
            cout << a[j];
        }
        for (int k = s_1; k <= e_1; k++){
            a[k]--;
        }
        s_1++;
        e_1--;  
    }else{
        for (int k = s_2; k <= e_2; k++){
            a[k]++;
        }
        for (int j = 0; j < size; j++){
            cout << a[j];
        }
        s_2--;
        e_2++;
    }
    cout << endl;
  }
  

}
