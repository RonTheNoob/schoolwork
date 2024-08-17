#include <iostream>

using namespace std;

int main()
{
    int num;
    int sumEven = 0;
    int sumOdd = 0;
  
    while (num != -1){
        cout << "Enter a positive integer: ";
        cin >> num;
        
        if (num % 2 == 0){
            sumEven = sumEven + num; 

        }
        else {
            sumOdd = sumOdd + num;
        }

    }
    
    sumOdd += 1;
    
    cout << endl;
    cout << "The sum of all odd integers is " << sumOdd << endl;
    cout << "The sum of all even integers is " << sumEven << endl;
    
    return 0;
}