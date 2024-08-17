#include <iostream>

using namespace std;

int reverseDigit(int x);


int main(){
    int input;

    cout << "Enter an integer: ";
    cin >> input;

    cout << endl;

    cout << "The reversed number is: " << reverseDigit(input) << endl;
    
    return 0;
}

int reverseDigit(int x){

    int rev = 0;

    while (x != 0){
        int r = x % 10;
        rev = (rev * 10) + r;
        x = x / 10;
    }

    if (rev < 0){
        rev *= -1;
    }

    return rev;
}