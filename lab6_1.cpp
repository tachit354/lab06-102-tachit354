#include<iostream>
using namespace std;

int main(){
    int x = -1;
    int y = 0;
    int z = 0;
    while (x != 0){
        cout << "Enter an integer: ";
        cin >> x;
        if (x % 2 == 0 && x != 0){
            y = y + 1;
        }
        else{
            z = z + 1;
        }

        if (x == 0){
            z = z - 1;
        }else{
            y = y;
        }
    }
    
    cout << "#Even numbers = " << y << "\n";
    cout << "#Odd numbers = " << z << "\n";
    return 0;
}
