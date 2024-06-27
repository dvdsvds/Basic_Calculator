#include "cal.h"

int main() {
    double a, b; 
    int choice;
    
    cout << "PLEASE TYPE YOUR NUMBERS" << endl;
    cout << "a > ";
    cin >> a;
    cout << "b > ";
    cin >> b;

    cout << "WHICH DO YOU CHOOSE?" << endl;
    cout << "(1)+ (2)- (3)* (4)/" << endl << "> ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << add(a, b) << endl;
            break;
        case 2:
            cout << sub(a, b) << endl;
            break;
        case 3:
            cout << mlt(a, b) << endl;
            break;
        case 4:
            cout << dvs(a, b) << endl;
            break;
        default:
            break;
    }
    
    return 0;
}

