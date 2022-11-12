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
}