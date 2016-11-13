#include<iostream>

using namespace std;

long long Binary_Search(long long * array, long long number, long long arrayLength);

int main() 
{
    long long n;
    long long questions;
    cin>>n>>questions;

    long long * array = new long long[n];
    long long * questions_array = new long long[questions];

    for (long long i = 0; i < n; i++)
        cin >> array[i];
    for (long long i = 0; i < questions; i++)
        cin >> questions_array[i];
    for (long long i = 0; i < questions; i++)
        cout <<Binary_Search(array, questions_array[i], n)<< " ";
}

long long Binary_Search(long long * array, long long number, long long length_of_array) 
{
    long long first = 0;
    long long last = length_of_array - 1;
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
