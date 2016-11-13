#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin>>n;
    long long int array[n];
    for (int i = 0; i < n; i++)
        cin>>array[i];
    int counter = 1;
    long long int temp;
    while(counter != 0)
    {     
        counter = 0;
        for (int i = 1; i < n; i++)
        {                
            if(array[i] < array[i-1])
            {
                temp = array[i-1];
                array[i-1] = array[i];
                array[i] = temp;
                counter++;
            }
        }     
    }
    for (int i = 0; i < n; i++)
        cout<<array[i]<<" ";
    return 0;
}
