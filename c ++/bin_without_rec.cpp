#include <iostream>
using namespace std;

int main()
{
    int n, x;
    int low, high, mid;

    cout << "Enter size: ";
    cin >> n;

    int *a = new int[n];

    cout << "Enter sorted array: ";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter number to search: ";
    cin >> x;

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == x)
        {
            cout << "Found";
            return 0;
        }

        if(x < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << "Not Found";

    delete[] a;

    return 0;
}