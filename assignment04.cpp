//Bailey Pratt Assignment04
#include <iostream>
#include <string>

using namespace std;

string validationTable(){
    return 0;
}

int main()
{
    cout << "Enter a number between 1 and 7 to select your product. " << endl;
    int productNum = 0;
    float price = 0;
    cin >> productNum;
    switch(productNum)
    {
        case 1: 
            cout << "You selected Hershey Bar " << endl;
            price = 1.25;
            break;
        case 2: 
            cout << "You selected MnMs " << endl;
            price = 1.99;
            break;
        case 3: 
            cout << "You selected Mini Oreos " << endl;
            price = 2.50;
            break;
        case 4: 
            cout << "You selected Cheetos " << endl;
            price = 1.00;
            break;
        case 5: 
            cout << "You selected Lays " << endl;
            price = 1.75;
            break;
        case 6: 
            cout << "You selected Tedy Grahams " << endl;
            price = 2.55;
            break;
        case 7: 
            cout << "You selected Water Bottle " << endl;
            price = 1.99;
            break;
        default: 
            cout << " You selected an invalid number please try again. "<< endl;
            break;
    
    }
    
    cout << "Select the quantity you would like to purchase. " << endl;
    int quantity = 0;
    cin >> quantity;
    float finalPrice = price * quantity;
    cout << "You have selected " << productNum << " and will recieve " << quantity << ". The total transaction will cost $" << finalPrice << endl;
   
    cout << "If you would like to confirm the transaction, enter y, if not, enter anything else. " << endl;
    char confirm = 'y';
    cin >> confirm;
    if (confirm == 'y') {
        cout << "Confirming your purchase. " << endl;
    }
    else {
        cout << "Cancelling your purchase. " << endl;
        return 0;
    }

    string USERS[5] = {"shiela berman", "frick maven", "david wolf", "emily warren", "frick maven"};
    cout << "Enter your credit card details. " << endl;
    string nameCC = ""; //name on credit card
    getline(cin,nameCC);
    if (nameCC.size() > 2 && nameCC.size() < 16 && nameCC == USERS) {
        cout << "Enter the 4 digit Credit Card Number with no spaces. " << endl;
        string numberCC = ""; //Credit Card Number
        if(numberCC.size() == 4){
            cout << "Enter the date of Expiry following the format MMYYYY. Enter the MM first. " << endl;
            int expiryMonthCC = 0;
            cin >> expiryMonthCC; //Credit Card Expiry Month
            cout << "Enter the YYYY now. " << endl;
            int expiryYearCC = 0;
            cin >> expiryYearCC; //Credit Card Expiry Year
            if(expiryMonthCC >=1 && expiryMonthCC <=12 && expiryYearCC >=2022 && expiryYearCC <= 2099){
                int expiryDateCC = 0;
                expiryDateCC = expiryMonthCC + expiryYearCC;
                cout << "Enter the CVS 3-digit number. " << endl;
                int cvsCC = 0;
                cin >> cvsCC;
                if(cvsCC == 3){
                    cout << "Enter a billing address between 5 and 7 letters. " << endl;
                    string billAddress = "";
                    getline(cin,billAddress);
                    if(billAddress.size() > 4 && billAddress.size() < 8)
                        cout << validationTable() << endl;
                        return 0;
                }


            }

        }
    }
    else {
        cout << "Invalid repsonse, please try again. " << endl;
        return 0;
    }
}