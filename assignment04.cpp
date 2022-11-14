//Bailey Pratt CPSC146
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

string GetCreditCard() {
    string USERS[5] = {"shiela berman", "frick maven", "david wolf", "emily warren", "frick maven"};
    string nameCC = ""; // Name on card
    string numberCC = ""; // Credit Card Number
	string billAddress = ""; //Billing Address
    int expiryMonthCC = 0;
	int expiryYearCC = 0;
	string cvsCC = "";

    cout << "Please enter your credit card details: First, Name on Card. " << endl;
    cin.ignore();
    getline(cin, nameCC);
    	bool exist = false;
    	exist = (nameCC == USERS[0]
			or nameCC == USERS[1]
    		or nameCC == USERS[2]
    		or nameCC == USERS[3]
    		or nameCC == USERS[4]);
    	bool valid_length = false;
    		 valid_length = ((nameCC.length() >= 2) && (nameCC.length() <=16));
    	if (!exist && valid_length){
    		cout << "Invalid Name. " << endl;
    	}
    	else {
    		cout << "Name is valid " << endl;}
    	cout << "Enter the 4 digit Credit Card Number with no spaces: " << endl;
    	cin.ignore();
    	getline(cin, numberCC);
    	bool numberCCflag = false;
    		bool alldigits = false;
    		alldigits = (isdigit(numberCC[0]), (numberCC[1]), (numberCC[2]), (numberCC[3]));
    		numberCCflag = (numberCC.length() == 4 && alldigits);
    		    if (numberCCflag == true){
    		    	cout << "Card number valid!" << endl;
    		    }
    		    else {
    		    	cout << "Invalid card number." << endl;
    		    }
    	
    cout << "Date of Expiration (month) (1-12): " << endl;
    	cin >> expiryMonthCC;
    	    if(expiryMonthCC >= 1 && expiryMonthCC <= 12){
    	        cout << "Expiry Month Valid. " << endl;
    	    }
    	    else {
    	        cout << "Invalid Month. " << endl;
    	    }
    cout << "Date of Expiration (year) (yyyy): " << endl;
    	cin >> expiryYearCC;
    	    if(expiryYearCC >= 2022 && expiryYearCC <= 2099){
    	        cout << expiryMonthCC << " " << expiryYearCC << " These inputs are valid. " << endl;
    	    }
    	    else {
    	        cout << "This is an invalid response." << endl;
    	    }
    cout << "Please input CVS Number " << endl;
    cin >> cvsCC;
    bool numberCvsflag = false;
    		bool cvsalldigits = false;
    		cvsalldigits = (isdigit(cvsCC[0]), (cvsCC[1]), (cvsCC[2]));
    		numberCvsflag = (cvsCC.length() == 4 && cvsalldigits);
    		    if (!numberCvsflag == true){
    		    	cout << "Card number valid!" << endl;
    		    }
    		    else {
    		    	cout << "Invalid cvs number." << endl;
    		    }
    cout << "Please enter a billing address. " << endl;
    cin >> billAddress;
    if(billAddress.size() > 4 && billAddress.size() < 8) {
        cout << "That is a valid billing address. " << endl;
    }
    else {
        cout << "That is an invalid billing address. "   << endl;
    }
    


}

int main()
{
    cout << "Enter a number between 1 and 7 to select your product. " << endl;
    int productNum = 0;
    float price = 0;
    string productName = "A";
    cin >> productNum;
    switch(productNum)
    {
    case 1:
        cout << "You selected 1:" << endl;
        productName = 'Hershey Bar';
        price = 1.25;
        break;
    case 2:
        cout << "You selected 2:" << endl;
        productName = 'MnM';
        price = 1.99;
        break;
    case 3:
        cout << "You selected 3:" << endl;
        productName = 'Mini Oreo';
        price = 2.50;
        break;
    case 4:
        cout << "You selected 4:" << endl;
        productName = 'Cheeto';
        price = 1.00;
        break;
    case 5:
        cout << "You selected 5:" << endl;
        productName = 'Lays';
        price = 1.75;
        break;
    case 6:
        cout << "You selected 6: " << endl;
        productName = 'Tedy Grahams';
        price = 2.55;
        break;
    case 7:
        cout << "You selected 7: " << endl;
        productName = 'Water Bottle';
        price = 1.99;
        break;
    default:
        cout << " You selected an invalid number please try again. "<< endl;
        productName = 'none';
        return 0;
        break;
    }

    cout << "Select the quantity you would like to purchase. " << endl;
    int quantity = 0;
    cin >> quantity;
    float finalPrice = price * quantity;
    cout << "You have selected " << productName << " and will receive " << quantity << ". The total transaction will cost $" << finalPrice << endl;
    char confirm = 'y';
    cout << "If You would like to confirm the transaction, enter y, if not enter anything else. " << endl;
    cin >> confirm;
    if (confirm == 'y') {
        cout << "Confirming your purchase " << endl;
    }
    else {
        cout << "Canceling your purchase. " << endl;
        return 0;
    }
    GetCreditCard();
    GetCreditCard();
    GetCreditCard();
    GetCreditCard();
    GetCreditCard();
    GetCreditCard();
}
