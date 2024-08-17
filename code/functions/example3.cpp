// Program: Fibonacci Number

#include <iostream>
using namespace std;

int nthFibonnaciNum(int first, int second, int position);

int main()
{
    int firstFibonacciNum;
    int secondFibonacciNum;
    int nthFibonacci;

    cout << "Enter the first two Fibonacci "
         << "numbers: ";
    cin >> firstFibonacciNum >> secondFibonacciNum;
    cout << endl;

    cout << "The first two Fibonacci numbers are "
         << firstFibonacciNum << " and "
         << secondFibonacciNum
         << endl;

    cout << "Enter the first position of the desired "
         << "Fibonacci number: ";
    cin >> nthFibonacci;
    cout << endl;

    cout << "The Fibonacci number at position "
         << nthFibonacci << " is "
         << nthFibonnaciNum(firstFibonacciNum, secondFibonacciNum, nthFibonacci)
         << endl;

    return 0;
}

int nthFibonnaciNum(int first, int second, int nthFibNum)
{
    int current;
    int counter;

    if (nthFibNum == 1)
        current = first;
    else if (nthFibNum == 2)
        current = second;
    else
    {
        counter = 3;

        while (counter <= nthFibNum)
        {
            current = second + first;
            first = second;
            second = current;
            counter++;
        }// end while
    }//end else
    return current;
}
