#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int space = n - 1;
        int star = 1;
        // space print
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
            space--;
        }

        // star print
        for (int j = 1; j <= star; j++)
        {
            cout << '*';
            star++;
        }
        cout << endl;
    }
    cout << endl;
}
