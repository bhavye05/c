#include <iostream>
using namespace std;

int main()
{
    int n1, n2, i, j;

    cout << "Enter size of first array: ";
    cin >> n1;

    int *a = new int[n1];

    cout << "Enter first array: ";

    for(i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    int *b = new int[n2];
    int *c = new int[n1 + n2];

    cout << "Enter second array: ";

    for(i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    // Copy first array
    for(i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    // Copy second array
    for(j = 0; j < n2; j++)
    {
        c[i] = b[j];
        i++;
    }

    // Sort merged array
    for(i = 0; i < n1 + n2; i++)
    {
        for(j = i + 1; j < n1 + n2; j++)
        {
            if(c[i] > c[j])
            {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    cout << "Merged Array: ";

    for(i = 0; i < n1 + n2; i++)
    {
        cout << c[i] << " ";
    }

    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}