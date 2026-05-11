#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int *a = new int[n];

    cout << "Write your array: ";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Array after removing duplicates: ";

    for(int i = 0; i < n; i++)
    {
        if(a[i] != a[i + 1])
        {
            cout << a[i] << " ";
        }
    }

    delete[] a;

    return 0;
}