#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int count[26] = {0};

    // Count alphabets
    for(int i = 1; i < argc; i++)
    {
        for(int j = 0; argv[i][j] != '\0'; j++)
        {
            char ch = argv[i][j];

            // For small letters
            if(ch >= 'a' && ch <= 'z')
            {
                count[ch - 'a']++;
            }

            // For capital letters
            else if(ch >= 'A' && ch <= 'Z')
            {
                count[ch - 'A']++;
            }
        }
    }

    // Display result
    cout << "Alphabet Occurrences\n";

    for(int i = 0; i < 26; i++)
    {
        if(count[i] > 0)
        {
            cout << char(i + 'A') << " = " << count[i] << endl;
        }
    }

    return 0;
}