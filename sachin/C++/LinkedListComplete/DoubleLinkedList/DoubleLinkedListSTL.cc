#include<bits/stdc++.h>
#include<list>  // it is double linked list
#include<iterator>
using namespace std;
int main(){
  /*
  it have methods like insert ,delete,create,reverse,link two linked list
  .push_back()
  .push_front
  */

    list <int>myll;
    myll.push_back(10);
    myll.push_back(20);
    myll.push_front(0);

    /*
        0  <=> 10 <=> 20
    */

   myll.pop_back();
   myll.pop_front();
   /*
        10
   */

   list <int>myll2={2 ,3 ,4 };
   /*
        2  <=> 3 <=> 4
   */

  list <int> myll3(5,10);// size and then data
     /*
        10<=>10<=>10<=>10<=>10
     */

   cout<< myll3.empty();// false it return weather list is empty or not

    cout<< myll3.size(); // will return size of linked list
    myll3.reverse(); // it will reverse linked list
    myll3.sort();// it wil;l sort

    // making iterator
    list <int>:: iterator it;
}
