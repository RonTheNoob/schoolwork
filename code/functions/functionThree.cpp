#include <iostream>

using namespace std;

int arr[10];
int even(int x)
{   
    cout << "The even numbers are: ";
    for (x = 0; x < 10; x++){
        if (arr[x] % 2 == 0){
             cout << arr[x] << ", ";
        }
    }
    return x;
}

int odd(int y)
{   
    cout << "The odd numbers are: ";
    for (y = 0; y < 10; y++){
        if (arr[y] % 2 != 0){
             cout << arr[y] << ", ";
        }
    }
    return y;
}

int main(){

    int i;
    cout << "Write 10 numbers: " << endl;

    for(i = 1; i <= 10; i++){
        cout << "Number " << i << ": ";
        cin >> arr[i];
    }

    odd(i);
    cout << endl;
    even(i);

    return 0;
}