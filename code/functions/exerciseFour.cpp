#include <iostream>

using namespace std;

void number(float x, float y, float z);


int main(){
    float a, b, c;

    cout << "Enter three decimal numbers. \n ---> ";
    cin >> a;
    cin >> b;
    cin >> c;

    cout << endl;
    number(a, b, c);
    
    return 0;
}

void number(float x, float y, float z){
    
    float ave, sum;

    sum = x + y + z;
    ave = sum / 3;

    if (ave >= 80.0){
        cout << "Passed!" << endl;
    }
    else{
        cout << "Failed..." << endl;
    }
}