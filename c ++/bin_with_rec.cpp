#include <iostream>
using namespace std;

int search(int a[], int low, int high, int x)
{
    if(low > high)
    {
        return 0;
    }

    int mid = (low + high) / 2;

    if(a[mid] == x)
    {
        return 1;
    }

    if(x < a[mid])
    {
        return search(a, low, mid - 1, x);
    }

    return search(a, mid + 1, high, x);
}

int main()
{
    int a[10], n, x;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter sorted array: ";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter number to search: ";
    cin >> x;

    if(search(a, 0, n - 1, x))
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}