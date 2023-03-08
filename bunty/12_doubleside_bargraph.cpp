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

    int max = arr[0];
    int min = arr[0];
    // for max
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int max1 = max;
    // for min
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    int min1 = (-(min));

    for (int i = 0; i < max1; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (max > arr[j])
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        max--;

        cout << endl;
    }
    // cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "-";
    }
    cout << endl;
    for (int i = 0; i < min1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < 0)
            {
                cout << "*";
                arr[j]++;
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}