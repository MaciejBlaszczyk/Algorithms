#include<iostream>

using namespace std;

long long Binary_Search(long long * array, long long number, long long first, long long last);

int main() 
{
    long long n;
    long long questions;
    long long border;    
    long long * array = new long long[n];
    long long * questions_array = new long long[questions];

    cin>>n>>questions;
    for (long long i = 0; i < n; i++)
        cin >> array[i];
    for (long long i = 0; i < questions; i++)
        cin >> questions_array[i];
    
    long long i;
    for (i = 1; array[i] > array[i-1]; i++);
    border = i-1;
                                     
    for (long long i = 0; i < questions; i++)
    {
        if(questions_array[i] <= array[border] && questions_array[i] >= array[0])
            cout <<Binary_Search(array, questions_array[i], 0, border)<< " ";
        else
            cout <<Binary_Search(array, questions_array[i], border + 1, n - 1)<< " "; 
    }
}

long long Binary_Search(long long * array, long long number, long long first, long long last) 
{
    
    while (first <= last) 
    {
        long long midpoint = (first + last)/2;
        if (array[midpoint] == number) 
        {
            while (midpoint > 0 && (array[midpoint] == array[midpoint-1]))
                midpoint--;           
            return midpoint + 1;
        }
        else {
            if (number < array[midpoint])
                last = midpoint - 1;
            else
                first = midpoint + 1;
        }
    }
    return -1;
}
