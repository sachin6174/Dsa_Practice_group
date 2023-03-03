#include<bits/stdc++.h>

using namespace std;


int main(){
    int a,b,c;
    
    cin>>a;
    cin>>b;
    cin>>c;

    vector<int>v1;
    v1.push_back(a);
    v1.push_back(b);
    v1.push_back(c);
    sort(v1.begin(), v1.end());
  
   if(a+b>c && b+c>a && c+a>b){

   if(v1[0]*v1[0]+v1[1]*v1[1]==v1[2]*v1[2]){
        cout<<"right angle traingle"<<endl;
    }else if(v1[0]*v1[0]+v1[1]*v1[1]>v1[2]*v1[2]){
        cout<<"acute angle triangle"<<endl;
    }else{
        cout<<"obtuse angle triangle"<<endl;

    }
  
}else{
    cout<<"invalid"<<endl;
}
    return 0;
}