#include <iostream>
using namespace std;

int main()
{
    int a = 16, b = 8;
    while(b != 0)
    {
        int temp;
        temp = a % b;
        a = b;
        b = temp;
    }
    cout<<a;
    return 0;
}

