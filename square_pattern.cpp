#include <iostream>
using namespace std;
int main()
{
    int i, j, n = 4;
    for (i = 1; i <= n; i++)//outer
    {
        for (j = 1; j <= n; j++)//inner
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}