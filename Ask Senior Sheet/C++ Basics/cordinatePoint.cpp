#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    float a, b;
    cin >> a >> b;

    if (a == 0 && b == 0)
    {
        cout << "Origem" << "\n";
    }
    else if (b == 0)
    {
        cout << "Eixo X" << "\n";
    }
    else if (a == 0)
    {
        cout << "Eixo Y" << "\n";
    }
    else if (a > 0 && b > 0)
    {
        cout << "Q1" << "\n";
    }
    else if (a < 0 && b > 0)
    {
        cout << "Q2" << "\n";
    }
    else if (a < 0 && b < 0)
    {
        cout << "Q3" << "\n";
    }
    else if (a > 0 && b < 0)
    {
        cout << "Q4" << "\n";
    }

    return 0;
}
