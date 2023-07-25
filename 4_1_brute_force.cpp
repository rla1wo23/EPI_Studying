#include <iostream>
using namespace std;

int main()
{
    long long input;
    cin >> input;
    int parity = 0;
    while (input)
    {
        if (input % 2 == 1)
        {
            parity++;
        }
        input = input >> 1;
    }
    if (parity % 2 == 0)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }
}
