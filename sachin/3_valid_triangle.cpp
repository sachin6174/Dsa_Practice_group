#include<bits/stdc++.h>
using namespace std;
/*
5 3 4   right
// bug 3 5 4
// bug  3 4 5

6 6 6   acute
6 10 6  obtuse
*/
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int maxi= max(a,max(b,c));
    int mini= min(a,min(b,c));
    int middle=

    if(a+b>c && b+c>a && c+a>b){
        if(a*a+b*b==c*c){
            cout<<"right";
        }
        else if (a * a + b * b > c * c){   
            cout<<"acute";
        }else{
            cout<<"obtuse";
        }
    }else{
        cout<<"Not Valid";
    }

  
}
