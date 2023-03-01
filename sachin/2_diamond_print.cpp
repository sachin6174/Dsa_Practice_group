// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int space_1=n-1;
    int star_1=1;
    for (int i = 1; i <= n - 1; i++)
    {
        for(int j=1;j<=space_1;j++){
            cout<<" ";
        }
        space_1--; //decreade by 1

        for(int j=1;j<=star_1;j++){
            cout<<"*";
        }
        star_1+=2; //increase by 2

        cout << endl;
    }

    //middlepart
    for(int i=0;i<2*n-1;i++){
        cout<<"*";
    }
    cout << endl;
    



    int space_2=1;
    int star_2=2*n-1-2;
    for(int i=1;i<=n-1;i++){

        for(int j=1;j<=space_2;j++){
            cout<<" ";
        }
        space_2++; //increase by 1

        for(int j=1;j<=star_2;j++){
            cout<<"*";
        }
        star_2-=2;// dwcrease by 2
        cout<<endl;

    }


}
