#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100], temp[200];
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
        // Address of each character
        case 1:

            for(int i = 0; str1[i] != '\0'; i++)
            {
                cout << str1[i] << " = "
                     << (void*)&str1[i] << endl;
            }

            break;

        // Concatenate strings
        case 2:
        {
            int i = 0, j = 0;

            while(str1[i] != '\0')
            {
                temp[i] = str1[i];
                i++;
            }

            while(str2[j] != '\0')
            {
                temp[i] = str2[j];
                i++;
                j++;
            }

            temp[i] = '\0';

            cout << "Concatenated String: " << temp;

            break;
        }

        // Compare strings
        case 3:
        {
            int i = 0;
            int flag = 1;

            while(str1[i] != '\0' || str2[i] != '\0')
            {
                if(str1[i] != str2[i])
                {
                    flag = 0;
                    break;
                }

                i++;
            }

            if(flag == 1)
            {
                cout << "Strings are equal";
            }
            else
            {
                cout << "Strings are not equal";
            }

            break;
        }

        // Length using pointers
        case 4:
        {
            char *p = str1;

            while(*p != '\0')
            {
                len++;
                p++;
            }

            cout << "Length = " << len;

            break;
        }

        // Lowercase to uppercase
        case 5:

            for(int i = 0; str1[i] != '\0'; i++)
            {
                if(str1[i] >= 'a' && str1[i] <= 'z')
                {
                    str1[i] = str1[i] - 32;
                }
            }

            cout << "Uppercase String: " << str1;

            break;

        // Reverse string
        case 6:
        {
            int i = 0;

            while(str1[i] != '\0')
            {
                i++;
            }

            cout << "Reverse String: ";

            for(int j = i - 1; j >= 0; j--)
            {
                cout << str1[j];
            }

            break;
        }

        // Insert string
        case 7:
        {
            int pos, i, j, k = 0;

            cout << "Enter position: ";
            cin >> pos;

            // Copy before position
            for(i = 0; i < pos; i++)
            {
                temp[k] = str1[i];
                k++;
            }

            // Insert second string
            for(j = 0; str2[j] != '\0'; j++)
            {
                temp[k] = str2[j];
                k++;
            }

            // Copy remaining first string
            for(i = pos; str1[i] != '\0'; i++)
            {
                temp[k] = str1[i];
                k++;
            }

            temp[k] = '\0';

            cout << "New String: " << temp;

            break;
        }

        default:

            cout << "Invalid Choice";
    }

    return 0;
}
