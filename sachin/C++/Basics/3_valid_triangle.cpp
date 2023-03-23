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
    vector<int>sot;
    sot.push_back(a);
    sot.push_back(b);
    sot.push_back(c);
    sort(sot.begin(),sot.end());

    cout<<endl;
    for(int item : sot){
        cout<<item<<" ";
    }
    cout<<endl;

    if(a+b>c && b+c>a && c+a>b){
        if (sot[0] * sot[0] + sot[1] * sot[1] == sot[2] * sot[2])
        {
            cout<<"right";
        }
        else if (sot[0] * sot[0] + sot[1] * sot[1] > sot[2] * sot[2])
        {
            cout<<"acute";
        }
        else
        {
            cout<<"obtuse";
        }
    }else{
        cout<<"Not Valid";
    }

  
}
