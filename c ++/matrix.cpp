#include <iostream>
using namespace std;

class Matrix
{
public:
    int a[10][10], r, c;

    // Input matrix
    void input()
    {
        cout << "Enter rows and columns: ";
        cin >> r >> c;

        cout << "Enter elements:\n";

        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    // Sum of matrices
    void sum(Matrix m)
    {
        if(r != m.r || c != m.c)
        {
            throw "Addition not possible";
        }

        cout << "\nSum Matrix:\n";

        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                cout << a[i][j] + m.a[i][j] << " ";
            }

            cout << endl;
        }
    }

    // Product of matrices
    void product(Matrix m)
    {
        if(c != m.r)
        {
            throw "Multiplication not possible";
        }

        cout << "\nProduct Matrix:\n";

        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < m.c; j++)
            {
                int sum = 0;

                for(int k = 0; k < c; k++)
                {
                    sum = sum + a[i][k] * m.a[k][j];
                }

                cout << sum << " ";
            }

            cout << endl;
        }
    }

    // Transpose
    void transpose()
    {
        cout << "\nTranspose Matrix:\n";

        for(int i = 0; i < c; i++)
        {
            for(int j = 0; j < r; j++)
            {
                cout << a[j][i] << " ";
            }

            cout << endl;
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

    try
    {
        // SUM
        if(choice == 1)
        {
            cout << "\nEnter first matrix:\n";
            m1.input();

            cout << "\nEnter second matrix:\n";
            m2.input();

            m1.sum(m2);
        }

        // PRODUCT
        else if(choice == 2)
        {
            cout << "\nEnter first matrix:\n";
            m1.input();

            cout << "\nEnter second matrix:\n";
            m2.input();

            m1.product(m2);
        }

        // TRANSPOSE
        else if(choice == 3)
        {
            cout << "\nEnter matrix:\n";
            m1.input();

            m1.transpose();
        }

        else
        {
            cout << "Wrong Choice";
        }
    }

    catch(const char *msg)
    {
        cout << msg;
    }

    return 0;
}
