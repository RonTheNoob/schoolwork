#include <iostream>

using namespace std;

int main()
{
    int input, indiv, sum = 0;
    
    cout << "Enter a positive integer: ";
    cin >> input;
    cout << "The individual digits are: ";
    
    //rightmost digit instead of left :(
    while (input > 0) {
        indiv = input % 10;
        sum = sum + indiv;
        cout << indiv << " ";
        input = input / 10;
    }
    
    cout << endl;
    cout << "The sum of the digits is " << sum << endl;
    
    return 0;
}