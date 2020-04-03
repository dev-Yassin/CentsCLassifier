#include <iostream>

using namespace std;


int main() {
    char reClassify;
    while(true) {
        // Credits
        cout << "======================================================================" << endl;
        cout << "\t Made by Yassine Cheracher in 03/04/2020" << endl;
        cout << "======================================================================" << endl << endl;
        
        // Reminder about US Currency System : 
        
        cout << "\twelcome to the CentsClassifier !! " << endl;
        cout << "\n In the US : " << endl << "100 Cents = 1 Dollar"<< endl << "25 Cents = 1 Quater" << endl << "10 Cents = 1 Dime " << endl << "5 Cents = 1 Nickel" << endl << "1 Cent = 1 Penny" << endl;      
        
        //  Declaring the variables That we need :
        
        long number_of_cents {0};
        long number_of_dollars {0};
        int number_of_quaters {0};
        int number_of_dimes {0};
        int number_of_nickels {0};
        int number_of_pennies {0};
        
        // Prompts the user for input :
        
        cout << " Please enter How much you Cents you want to classify : ";
        cin >> number_of_cents;
        
        // Verifies That the input is valid
        
        while (true) {
            if(number_of_cents >= 0) {
                break;
            }
            else {
                cout << " Please enter How much you Cents you want to classify : ";
                cin >> number_of_cents;
                cout << "\n";
                continue;
            }
        }
        
        // Classifies precisely the input into Dollars then Quaters then Dimes then pennies 
        
        while (!(number_of_cents == 0)) { 
            
            number_of_dollars = number_of_cents / 100;
            number_of_cents -= (number_of_dollars * 100);
            if ( number_of_cents < 100) {
                break;
            }
            else {
                continue;
            }
        }
        while (!(number_of_cents == 0)) {
            
            number_of_quaters = (number_of_cents / 25 );
            number_of_cents -= (number_of_quaters * 25 );
            if ( number_of_cents < 25) {
                break;
            }
            else {
                continue;
            }
        } 
        
        while (!(number_of_cents == 0)) {
                
            number_of_dimes = (number_of_cents / 10);
            number_of_cents -= (number_of_dimes * 10);
            if ( number_of_cents < 10) {
                break;
            }
            else {
                continue;
            }
        }
        
        while (!(number_of_cents == 0)) {
            number_of_nickels = (number_of_cents / 5);
            number_of_cents -= (number_of_nickels * 5);
            if ( number_of_cents < 5) {
                break;
            }
            else {
                continue;
            }
        }
        if ((number_of_cents >= 0) && (number_of_cents < 5)) {
            number_of_cents =number_of_pennies;
        }
        else {
            cout << " Something went wrong";
        }
        
        // Prints out the result :
        
        cout << "The number of Dollars is : " << number_of_dollars << endl;
        cout << "The number of Quaters is : " << number_of_quaters << endl;    
        cout << "The number of Dimes is : " << number_of_dimes << endl;
        cout << "The number of Nickels is : " << number_of_nickels << endl;
        cout << "The number of Cents is : " << number_of_pennies << endl; 
        
        cout << "Do you want to classify your cents another time [Y/n] : ";
        cin >> reClassify;

        if (reClassify == 'Y' || reClassify == 'y') {
            continue;
        }
        else if (reClassify == 'N' || reClassify == 'n') {
            break;
        }
        else { 
            while (!(reClassify == 'Y' || reClassify == 'y' || reClassify == 'N' || reClassify == 'n')) {
                cout << "Do you want to classify your cents another time [Y/n] : ";
                cin >> reClassify;
            }
        }
        
    }
    return 0;
    
}