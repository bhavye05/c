#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int *a = new int[n];

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Array after removing duplicates: ";

    for(int i = 0; i < n; i++)
    {
        int flag = 0;

        // Check previous occurrences
        for(int j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                flag = 1;
                break;
            }
        }

        // Print only unique element
        if(flag == 0)
        {
            cout << a[i] << " ";
        }
    }

    delete[] a;

    return 0;
}
