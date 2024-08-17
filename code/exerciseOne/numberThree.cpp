#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double size, bytes, actual;

    cout << "Enter the size of the hard drive (in GB): ";
    cin >> size;

    bytes = size * pow(1000, 3);
    actual = bytes / pow(1024,3);

    cout << endl;

    cout << "The actual storage capacity of the hard drive is " << actual << " GB" << endl;

    return 0;
}