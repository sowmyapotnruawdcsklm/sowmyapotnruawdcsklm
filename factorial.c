include <iostream> 
#include <bits/stdc++.h>

using namespace std;
 
// Function to return the factorial of n

int factorial(int n)
{

    int f = 1;

    for (int i = 1; i <= n; i++)

    {

        f *= i;

    }

    return f;
}
 
// Function to return the sum of
// factorials of the array elements

int sumFactorial(int *arr, int n)
{
 

    // To store the required sum

    int s = 0,i;

    for (i = 0; i < n; i++)

    {
 

        // Add factorial of all the elements

        s += factorial(arr[i]);

    }

    return s;
}
 
// Driver code

int main()
{

    int arr[] = { 7, 3, 5, 4, 8 };

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << sumFactorial(arr, n);

    return 0;
}
