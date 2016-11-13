#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int a);

int main()
{
    int a = 4;
    if(IsPrime(a) == true)
    	cout<<"It is prime number";
    else
    	cout<<"It is not prime number";
}
bool IsPrime(int a)
{
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
