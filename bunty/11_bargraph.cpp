#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    arr[i] = a;
  }

  int bda = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > bda)
    {
      bda = arr[i];
    }
  }

  int max = bda;

  for (int i = 0; i < max; i++)
  {

    for (int j = 0; j < n; j++)
    {

      if (bda > arr[j])
      {
        cout << " ";
      }
      else
      {
        cout << "*";
      }
    }
    bda--;
    cout << endl;
  }

  return 0;
}