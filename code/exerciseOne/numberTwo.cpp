#include <iostream>

using namespace std;

int main(){
    int input, sec, min, hour;

    cout << "Enter the elapsed time in seconds: ";
    cin >> input;

    hour = input / 3600;
    min = (input % 3600) / 60;
    sec = (input % 3600) % 60;

    cout << endl;

    cout << "The time is " << hour << ":" << min << ":" << sec << endl;

    return 0;
}