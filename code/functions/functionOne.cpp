#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x + y;
}
int subtract(int x, int y)
{
    return x - y;
}
int multiply(int x, int y)
{
    return x * y;
}
int divide(int x, int y)
{
    return x / y;
}

int main(){

    int num1, num2;
    cout << "Write two numbers: ";
    cin >> num1 >> num2;

    int sum = add(num1,num2);
    int difference = subtract(num1,num2);
    int product = multiply(num1,num2);
    int quotient = divide(num1,num2);

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}