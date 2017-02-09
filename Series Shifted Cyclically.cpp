#include<iostream>

using namespace std;

long long binarySearch(long long *array, long long number, long long first, long long last);

int main() 
{
    long long n;
    long long questions;
    long long border;    
    long long *array = new long long[n];
    long long *questionsArray = new long long[questions];

    cin>>n>>questions;
    for(long long i = 0; i < n; i++)
        cin>>array[i];
    for(long long i = 0; i < questions; i++)
        cin>>questionsArray[i];
    
    long long i;
    for(i = 1; array[i] > array[i - 1]; i++);
    border = i - 1;
                                     
    for(long long i = 0; i < questions; i++)
    {
        if(questionsArray[i] <= array[border] && questionsArray[i] >= array[0])
            cout<<binarySearch(array, questionsArray[i], 0, border)<< " ";
        else
            cout<<binarySearch(array, questionsArray[i], border + 1, n - 1)<< " "; 
    }
}

long long binarySearch(long long *array, long long number, long long first, long long last) 
{
    
    while (first <= last) 
    {
        long long midPoint = (first + last) / 2;
        if(array[midPoint] == number) 
        {
            while (midPoint > 0 && (array[midPoint] == array[midPoint - 1]))
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
