#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	unsigned int n, temp;
  	bool * array;

  	cin >> n;
  	array = new bool[n + 1];
  	for(unsigned int i = 2; i <= n; i++)
      	array[i] = true;  
		  	
  	for(unsigned int i = 2; i <= (unsigned int)sqrt(n); i++)
      	if(array[i])
      	{
          	temp = i * i;
          	while(temp <= n)
          	{
              	array[temp] = false;
				temp += i;
          	}
      	}
      	
  	for(unsigned int i = 2; i <= n; i++)
      	if(array[i])
          	cout<<i<<" ";
  	cout<<endl;
  	
  	delete[]array;

  	return 0;
}
