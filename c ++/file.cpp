#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char ch;

    // Open file.txt
    ifstream fin("file.txt");

    // Create output.txt
    ofstream fout("output.txt");

    // Check file
    if(!fin)
    {
        cout << "File not found";
        return 0;
    }

    // Copy without spaces
    while(fin.get(ch))
    {
        if(ch != ' ' && ch != '\n' && ch != '\t')
        {
            fout << ch;
        }
    }

    cout << "File copied without whitespaces";

    fin.close();
    fout.close();

    return 0;
}