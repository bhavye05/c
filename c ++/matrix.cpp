#include <iostream>
using namespace std;

class Matrix
{
public:

    int **a, r, c;

    void input()
    {
        cout << "Enter rows and columns: ";
        cin >> r >> c;

        // Dynamic memory
        a = new int*[r];

        for(int i = 0; i < r; i++)
        {
            a[i] = new int[c];
        }

        cout << "Enter elements:\n";

        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
    }
};

int main()
{
    Matrix m1, m2;
    int choice;

    cout << "1. Sum";
    cout << "\n2. Product";
    cout << "\n3. Transpose";

    cout << "\nEnter choice: ";
    cin >> choice;

    // SUM
    if(choice == 1)
    {
        cout << "Enter first matrix:\n";
        m1.input();

        cout << "Enter second matrix:\n";
        m2.input();

        if(m1.r != m2.r || m1.c != m2.c)
        {
            cout << "Addition not possible";
        }

        else
        {
            cout << "Sum Matrix:\n";

            for(int i = 0; i < m1.r; i++)
            {
                for(int j = 0; j < m1.c; j++)
                {
                    cout << m1.a[i][j] + m2.a[i][j] << " ";
                }

                cout << endl;
            }
        }
    }

    // PRODUCT
    else if(choice == 2)
    {
        cout << "Enter first matrix:\n";
        m1.input();

        cout << "Enter second matrix:\n";
        m2.input();

        if(m1.c != m2.r)
        {
            cout << "Multiplication not possible";
        }

        else
        {
            cout << "Product Matrix:\n";

            for(int i = 0; i < m1.r; i++)
            {
                for(int j = 0; j < m2.c; j++)
                {
                    int sum = 0;

                    for(int k = 0; k < m1.c; k++)
                    {
                        sum = sum + m1.a[i][k] * m2.a[k][j];
                    }

                    cout << sum << " ";
                }

                cout << endl;
            }
        }
    }

    // TRANSPOSE
    else if(choice == 3)
    {
        cout << "Enter matrix:\n";
        m1.input();

        cout << "Transpose Matrix:\n";

        for(int i = 0; i < m1.c; i++)
        {
            for(int j = 0; j < m1.r; j++)
            {
                cout << m1.a[j][i] << " ";
            }

            cout << endl;
        }
    }

    else
    {
        cout << "Wrong Choice";
    }

    return 0;
}