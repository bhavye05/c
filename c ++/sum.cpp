#include <iostream>
#include <cstdlib>   // for atoi()

using namespace std;

int main(int argc, char* argv[])
{
    int n, sum = 0;

    // Check if command line argument exists
    if(argc > 1)
    {
        n = atoi(argv[1]);
    }
    else
    {
        cout << "Enter value of n: ";
        cin >> n;
    }

    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
