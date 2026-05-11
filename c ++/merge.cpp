#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    int *a = new int[n1];

    cout << "Enter sorted first array: ";

    for(int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    int *b = new int[n2];
    int *c = new int[n1 + n2];

    cout << "Enter sorted second array: ";

    for(int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    int i = 0, j = 0, k = 0;

    // Merge arrays
    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements of first array
    while(i < n1)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while(j < n2)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    cout << "\nMerged Sorted Array: ";

    for(i = 0; i < n1 + n2; i++)
    {
        cout << c[i] << " ";
    }

    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}
