#include <iostream>
using namespace std;

int main()
{
    int a[8];

    for (int i = 0; i < 8; i++)
        cin >> a[i];

    if (a[0] == 1)
    {
        for (int i = 1; i < 8; i++)
        {
            if (a[i] != (a[i - 1] + 1))
            {
                cout << "mixed" << endl;
                return 0;
            }
        }
        cout << "ascending" << endl;
    }
    else if (a[0] == 8)
    {
        for (int i = 1; i < 8; i++)
        {
            if (a[i] != (a[i - 1] - 1))
            {
                cout << "mixed" << endl;
                return 0;
            }
        }
        cout << "descending" << endl;
    }
    else
        cout << "mixed" << endl;
    return 0;
}