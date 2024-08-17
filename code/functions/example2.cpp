//Program: Roll Dice

#include <iostream>
#include <cstdlib>

#include <ctime>

using namespace std;

int rolldice(int num);

int main()
{
    cout << "The number of times the dice are rolled to "
         << "get the sum 10 = " << rolldice(10) << endl;
    cout << "The number of times the dice are rolled to"
         << "get the sum 6 = " << rolldice(6) << endl;

    return 0;
}

int rolldice(int num)
{
    int die1;
    int die2;
    int sum;
    int rollCount = 0;

    srand(time(0));

    do
    {
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        sum = die1 + die2;
        rollCount++;
    }
    while (sum != num);

    return rollCount;
}