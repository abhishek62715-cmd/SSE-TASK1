#include<iostream>
using namespace std;

int main () {

    char grade;
    cout << "Enter your grade (A, B, C, D, or F): ";
    cin >> grade;


    switch(grade){                                //USED TO SWITCH STATEMENT TO CHECK THE GRADE AND PRINT THE CORRESPONDING MESSAGE
        case 'A': cout << "Excellent!" << endl;
            break;
        case 'B': cout << "Good job!" << endl;
            break;
        case 'C': cout << "You can do better." << endl;
            break;
        case 'D': cout << "You need to work harder." << endl;
            break;
        case 'F': cout << "You failed." << endl; 
            break;
        default: cout << "Invalid grade entered." << endl;

    }

    return 0;
    
}