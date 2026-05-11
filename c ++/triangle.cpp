#include <iostream>
#include <math.h>
using namespace std;

class Triangle
{
public:

    float area(float base, float height)
    {
        return 0.5 * base * height;
    }

    float area(float a, float b, float c)
    {
        if(a <= 0 || b <= 0 || c <= 0)
        {
            throw "Sides must be greater than 0";
        }

        if(a + b <= c || a + c <= b || b + c <= a)
        {
            throw "Invalid Triangle";
        }

        float s = (a + b + c) / 2;

        return sqrt(s * (s-a) * (s-b) * (s-c));
    }
};

int main()
{
    Triangle t;

    float base, height;
    float a, b, c;

    try
    {
        cout << "Enter base and height: ";
        cin >> base >> height;

        cout << "Area of Right Angle Triangle = ";
        cout << t.area(base, height) << endl;

        cout << "\nEnter three sides: ";
        cin >> a >> b >> c;

        cout << "Area using Heron Formula = ";
        cout << t.area(a, b, c);
    }

    catch(const char *msg)
    {
        cout << msg;
    }

    return 0;
}