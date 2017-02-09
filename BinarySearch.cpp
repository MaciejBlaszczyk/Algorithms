#include<iostream>

using namespace std;

long long binarySearch(long long *array, long long number, long long arrayLength);

int main() 
{
    long long n;
    long long questions;
    cin>>n>>questions;

    long long *array = new long long[n];
    long long *questionsArray = new long long[questions];

    for (long long i = 0; i < n; i++)
        cin>>array[i];
    for (long long i = 0; i < questions; i++)
        cin>>questionsArray[i];
    for (long long i = 0; i < questions; i++)
        cout<<binarySearch(array, questionsArray[i], n)<< " ";
}

long long binarySearch(long long *array, long long number, long long arrayLength) 
{
    long long first = 0;
    long long last = arrayLength - 1;
    while (first <= last) 
    {
        long long midPoint = (first + last)/2;
        if (array[midPoint] == number) 
        {
            while (midPoint > 0 && (array[midPoint] == array[midPoint-1]))
                midPoint--;           
            return midPoint + 1;
        }
        else 
        {
            if (number < array[midPoint])
                last = midPoint - 1;
            else
                first = midPoint + 1;
        }
    }
    return -1;
}
