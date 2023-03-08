#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int n;
    cin>>n;
    int toprint='a';
    int space=n-1;
    int no_of_char=1;

    for(int i=0;i<n;i++){
     
     for(int j=1;j<=space;j++){
         cout<<" ";
     }
    
    for(int j=1;j<=no_of_char;j++){
        cout<<char(toprint++);
    }
     toprint='a';
     space--;
     no_of_char++;
     cout<<endl;
    }

    return 0;
}