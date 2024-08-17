#include <iostream>

using namespace std;

int main() {
    int row, space, ast;

    for (row = 0; row < 5; row++){
        for (space = 0; space < row; space++){
            cout << " ";
        }
        for (ast = 1; ast < 6 - row; ast++){
            cout << "o ";
        }
        cout << endl;
    }
        for (row = 2; row <=5; row ++){
            for (space = 4; space >= row; space--){
                cout << " ";
            }
            for (ast = row; ast >= 1; ast--){
                cout << "o ";
            }
        cout << endl;
        }
    return 0;
    }
