#include <iostream>
using namespace std;

int main()
{
    int a = 77, b = 100;
	int ab = a * b;
    while(b != 0)
    {
        int temp;
        temp = a % b;
        a = b;
        b = temp;
    }
    cout<<(ab/a);
    return 0;
}
