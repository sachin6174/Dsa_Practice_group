#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
   cin >> n;
   if (n % 4 == 0)
   {
      if (n % 100 == 0)
      {
         if (n % 400 == 0)
         {
            cout << "yes" << endl;
         }
         else
         {
            cout << "no" << endl;
         }
      }
      else
      {
         cout << "yes" << endl;
      }
   }
   else
   {
      cout << "no" << endl;
   }
   return 0;
}