#include <iostream>

using namespace std;

bool isValid(long number);
int sumOfDoubleEvenPlace(long number);
int getDigit(int number);
int sumOfOddPlace(long number);
bool prefixMatched(long number, int d);
int getSize(long long d);
long getPrefix(long number, int k);

int main(){

    long long num;
    long arr[16];

    cout << "Enter a credit card number as a long integer: " << endl;
    cin >> num;
    int x = getSize(num);
    cout << x << endl;
    sumOfDoubleEvenPlace(num);
    cout << "Sum of double even places: " << sumOfDoubleEvenPlace(num) << endl;

    return 0;
}

int getDigit(int number){
    if (number <= 9){
        return number;
    }
    else{
        return (number % 10) + (number / 10);
    }
}

int sumOfDoubleEvenPlace(long number){
    bool alt = false;
    int digit, sum, x;
    while (number > 0){
    digit = number % 10;
    if (alt == true){   
        digit = digit * 2;
        x += getDigit(digit);
        sum = sum + x;
    }
    number = number / 10;
    alt = !alt;
    }
    return sum;
}


int getSize (long long d){
    int digit, count=0;

    do
    {
    d /= 10;
    count++;
    }
    while (d != 0); 
    return count;
}