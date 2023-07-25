#include <iostream>
#include <sys/resource.h>
using namespace std;

int main()
{
    long long input;
    cin >> input;
    int parity = 0;
    while (input)
    {
        if ((input & 1))
        {
            parity++;
        }
        input = input >> 1;
    }
    if (parity & 1)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}
