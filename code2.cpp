#include <iostream>
using namespace std;

int main()
{
    int n, i, count=0;
    cout<<"Enter n:";
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        // count = 0;
        for (int a = 1; a <= i; a++)
        {
            if (i % a == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout<<i<<" ";
        }
    }
    cout<<" ";
    return 0;
}