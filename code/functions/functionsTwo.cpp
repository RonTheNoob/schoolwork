#include <iostream>

using namespace std;

int beeg = 0;
int largest(int number)
{
    if (number > beeg){
        beeg = number;   
    }
    return beeg;
}


int main(){

    int num;
    cout << "Write 5 numbers: " << endl;

    for(int i = 1; i <= 5; i++){
        cout << "Number " << i << ": ";
        cin >> num;
        largest(num);
    }
    int x = beeg;

    cout << "The largest number is: " << x << endl;

    return 0;
}