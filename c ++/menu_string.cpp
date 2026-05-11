#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    int choice, len = 0;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    cout << "\n1. Show address of each character";
    cout << "\n2. Concatenate strings";
    cout << "\n3. Compare strings";
    cout << "\n4. Length of string";
    cout << "\n5. Convert lowercase to uppercase";
    cout << "\n6. Reverse string";
    cout << "\n7. Insert string";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        // Address
        case 1:

            for(int i = 0; str1[i] != '\0'; i++)
            {
                cout << str1[i] << " = "
                     << (void*)&str1[i] << endl;
            }

            break;

        // Concatenate
        case 2:

            str1 = str1 + str2;

            cout << "Concatenated String: " << str1;

            break;

        // Compare
        case 3:

            if(str1 == str2)
            {
                cout << "Strings are equal";
            }
            else
            {
                cout << "Strings are not equal";
            }

            break;

        // Length
        case 4:

            while(str1[len] != '\0')
            {
                len++;
            }

            cout << "Length = " << len;

            break;

        // Uppercase
        case 5:

            for(int i = 0; str1[i] != '\0'; i++)
            {
                if(str1[i] >= 'a' && str1[i] <= 'z')
                {
                    str1[i] = str1[i] - 32;
                }
            }

            for(int i = 0; str2[i] != '\0'; i++)
            {
                if(str2[i] >= 'a' && str2[i] <= 'z')
                {
                    str2[i] = str2[i] - 32;
                }
            }

            cout << "First String: " << str1 << endl;
            cout << "Second String: " << str2;

            break;

        // Reverse
        case 6:

            len = 0;

            while(str1[len] != '\0')
            {
                len++;
            }

            cout << "Reverse String: ";

            for(int i = len - 1; i >= 0; i--)
            {
                cout << str1[i];
            }

            break;

        // Insert
        case 7:
        {
            int pos;

            cout << "Enter position: ";
            cin >> pos;

            str1.insert(pos, str2);

            cout << "New String: " << str1;

            break;
        }

        default:

            cout << "Invalid Choice";
    }

    return 0;
}