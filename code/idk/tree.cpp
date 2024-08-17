#include <iostream>

using namespace std;

int main() {
    int rows, space, ast;
    for (rows = 1; rows <= 3; rows++){
        for (space = 5; space >= rows; space--){
            cout << " ";
        }
        
        for (ast = rows; ast >= 1; ast--){
            cout << "*";
        }
        
        for (ast = 1; ast <= space; ast++ )
            cout <<"*";
        
        cout << endl;
    }

    return 0;
}