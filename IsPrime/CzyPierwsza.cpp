#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a = 34757;
    DWORD start = GetTickCount();
    if( a < 2)
		return false;
	if(a == 2 || a == 3)
		return true;
    for(int i = 2; i <= sqrt(a); i++)
	{
		if(a % i == 0)
			return false;
	}
	return true;
}

