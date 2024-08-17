#include <iostream>
using namespace std;

int main(){
    int i, space;

    for(i = 1; i <= 5; i++){
        for(space = 4; space > 0; space--){
            cout << " ";
        }
        for(int a = i; a <= space; a++){
            cout << "#";
        }
        for(i = 1; i <= 5; i++){
            cout << " ";
        }
    cout << endl;
    }


    return 0;
}