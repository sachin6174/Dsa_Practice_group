// singly linked list stl
#include<bits/stdc++.h>
#include<forward_list>// for singly linked list
#include <iterator> // for printing  ll

using namespace std;
int main(){
    // it comes inside forward_list header file
    forward_list<int> mylist;
    mylist.assign(5,10);

    for (auto it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<" ";
    }

}
