//Jefferson Zheng
//October 7, 2024
//Lecture 5

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    //Variables
    float initValue, finalValue, debitValue, creditValue, transactionValue;
    string transactionType;
    int transactions;

    //Bank Details
    cout << "Money in the Bank at the Start of the Day: ";
    cin >> initValue;
    cout << "Amount of Bank Transactions Done that Day: ";
    cin >> transactions;
    
    //Variable Setup
    finalValue = initValue;
    debitValue = creditValue = 0;

    //For Loop: Ask for Transaction Type, Ask for Value
    for (int i = 0; i < transactions; i++) {
        cout << "\nTransaction Type (Debit/Credit): ";
        cin >> transactionType;
        cout << "Transaction Amount: ";
        cin >> transactionValue;
        if (transactionType == "Debit") {
            finalValue -= transactionValue;
            debitValue += transactionValue;
        } else {
            finalValue += transactionValue;
            creditValue += transactionValue;
        }
        cout << "\nYour Account Now Has $" << fixed << setprecision(2) << finalValue << "!" << endl;
    }
    
    //Print Values
    cout << "Total Debit Value: $" << fixed << setprecision(2) << debitValue << endl;
    cout << "Total Credit Value: $" << fixed << setprecision(2) << creditValue << endl;

    //Exits Successfully
    return 0;
}

/*
Money in the Bank at the Start of the Day: 700
Amount of Bank Transactions Done that Day: 3

Transaction Type (Debit/Credit): Credit
Transaction Amount: 125

Your Account Now Has $825.00!

Transaction Type (Debit/Credit): Debit
Transaction Amount: 50

Your Account Now Has $775.00!

Transaction Type (Debit/Credit): Debit
Transaction Amount: 50

Your Account Now Has $725.00!
Total Debit Value: $100.00
Total Credit Value: $125.00
*/