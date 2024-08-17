#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int carton;
    double milk, cost, profit;

    cout << "Enter the total amount of milk produced: ";
    cin >> milk;

    carton = ceil(milk/3.78); // ceil because it always rounds down even if the nearest integer is on rounding up
    cost = milk * 0.38;
    profit = carton * 0.27;
    
    cout << endl;

    cout << "The number of milk cartons needed to hold milk is/are: " << carton << " carton/s." << endl;
    cout << "The cost of the milk is: $" << cost << endl;
    cout << "The profit of/for producing milk is: $" << profit << endl;

    return 0;
}