//
//  main.cpp
//
//  Created by Leah Mirch on 3/25/23.
//

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#pragma warning(disable : 4996)

using namespace std;

// Define a struct to represent an item in the store inventory
struct Item {
    string name;
    int count;
    double price;
};

// Define a struct to represent a customer and their purchases
struct Customer {
    string name;
    vector<time_t> visit_dates;
    vector<Item> items_bought;
    vector<double> amounts_spent;
};

// Define a vector to hold the store inventory
vector<Item> inventory;

// Define a vector to hold customer information
vector<Customer> customers;

// Function to check out an item from inventory and update the count
void checkoutItem(string itemName) {
    bool itemFound = false;
    for (int i = 0; i < inventory.size(); i++) {
        if (inventory[i].name == itemName) {
            if (inventory[i].count > 0) {
                inventory[i].count--;
                cout << "Item checked out: " << itemName << endl;
            }
            else {
                cout << "Sorry, " << itemName << " is out of stock." << endl;
            }
            itemFound = true;
            break;
        }
    }

}

// Function to accept a returned item and update the count
void returnItem(string itemName) {
    bool itemFound = false;
    for (int i = 0; i < inventory.size(); i++) {
        if (inventory[i].name == itemName) {
            inventory[i].count++;
            cout << "Item returned: " << itemName << endl;
            itemFound = true;
            break;
        }
    }

}

// Function to display the current inventory
void displayInventory() {
    time_t now = time(0);
    cout << "Current inventory as of " << ctime(&now) << endl;
    for (int i = 0; i < inventory.size(); i++) {
        cout << inventory[i].count << " x " << inventory[i].name << " ($" << inventory[i].price << ")" << endl;
    }
}

// Function to check if an item is available in the inventory
bool itemAvailable(string itemName) {
    for (int i = 0; i < inventory.size(); i++) {
        if (inventory[i].name == itemName && inventory[i].count > 0) {
            return true;
        }
    }
    return false;
}




int main() {
    
    cout << "--- Welcome to the Group Project 3 CECS store. ---" << endl << endl;
    
    // Add some items to the inventory
    double charge = 0;
    int appleInv = 10;
    int bananaInv = 0;
    int orangeInv = 20;
    int milkInv = 8;
    int flourInv = 30;
    int cookieInv = 5;
    double appleChrg = 0.50;
    double bananaChrg = 0.25;
    double orangeChrg = 0.75;
    double milkChrg = 2.25;
    double flourChrg = 0.54;
    double cookieChrg = 2.45;
    Item apple = {"Apple", appleInv, appleChrg};
    Item banana = {"Banana", bananaInv, bananaChrg};
    Item orange = {"Orange", orangeInv, orangeChrg};
    Item milk = {"2% gallon of Milk", milkInv, milkChrg};
    Item flour = {"lb of Flour", flourInv, flourChrg};
    Item cookie = {"Cookie", cookieInv, cookieChrg};
    inventory.push_back(apple);
    inventory.push_back(banana);
    inventory.push_back(orange);
    inventory.push_back(milk);
    inventory.push_back(flour);
    inventory.push_back(cookie);

    
    cout << "Please enter your Customer ID Number: " << endl;
    cout << "* 2 - Abdullah Buchh " << endl;
    cout << "* 3 - Rayan Khalil " << endl;
    cout << "* 4 - Leah Mirch " << endl;
    cout << "* 5 - Zaynab Mourtada "<< endl;
    int input0;
    cin>>input0;
    bool loop0=true;
    
    while(loop0 ==true){
        switch(input0){
            case 2:{
                cout << endl<< "--- Welcome Abdullah Buchh ---" << endl<< endl;
                loop0=false;
                break;
            }
            case 3:{
                cout << endl<<"--- Welcome Rayan Khalil ---" << endl<< endl;
                loop0=false;

                break;
            }
            case 4:{
                cout << endl<<"--- Welcome Leah Mirch ---" << endl<< endl;
                loop0=false;

                break;
            }
            case 5:{
                cout << endl<<"--- Welcome Zaynab Mourtada ---" << endl<< endl;
                loop0=false;
                break;
            }
            default:{
                cout<< endl << " * Invalid Choice * " << endl;
                cin >> input0;
                loop0=true;
            }
        }
    }
    
    displayInventory();
    
    int input;
    char loop1 = true;
    while (loop1 == true) {
        
        cout << endl << endl << "--- What would you like to do? --- MENU ---" << endl;
        cout << "* Current balance is: $" << (round(charge * 100.0) / 100.0) << " *" << endl;
        cout << "1 - Display Inventory" << endl;
        cout << "2 - Check Availability" << endl;
        cout << "3 - Check out item(s) from Inventory" << endl;
        cout << "4 - Return Item(s)" << endl;
        cout << "5 - Customer History" << endl;
        cout << "6 - Quit / Leave Store" << endl;
        cout << "Enter your choice: ";
        cin >> input;
        
        
        string itemName1;
        char itemName2;
        char itemName3;
        char itemName4;
        
        
        
        
        switch (input) {
                
                
            case 1:{ // completed
                cout << endl << endl << " * Option 1 --- Display Inventory *" << endl;
                displayInventory();
                break;
            }
                
                
                
            case 2:{ // completed
                cout << endl << endl << " * Option 2 --- Check Availability *" << endl;
                
                cout << "Enter the first letter of the item you wish to check the availability on: ";
                cin >> itemName2;
                
                switch (itemName2) {
                    case 'A':{ //apple
                        if (itemAvailable("Apple") == true){
                            cout << "There are ";
                            cout << appleInv;
                            cout << " apples available." << endl;
                            break;
                            
                        }
                        else {
                            cout << "Sorry, there are no " << itemName2 << "s available." << endl;
                            break;
                        }
                        
                    }
                    case 'a':{ //apple
                        if (itemAvailable("Apple") == true){
                            cout << "There are ";
                            cout << appleInv;
                            cout << " apples available." << endl;
                            break;
                            
                        }
                        else {
                            cout << "Sorry, there are no " << itemName2 << "s available." << endl;
                            break;
                        }
                        
                    }
                        
                    case 'B':{ //banana
                        
                        if (itemAvailable("Banana") == true){
                            cout << "There are ";
                            cout << bananaInv;
                            cout << " bananas available." << endl;
                            break;
                        }
                        else {
                            cout << "Sorry, there are no " << itemName2 << "s available." << endl;
                            break;
                        }
                    }
                    case 'b':{ //banana
                        
                        if (itemAvailable("Banana") == true){
                            cout << "There are ";
                            cout << bananaInv;
                            cout << " bananas available." << endl;
                            break;
                        }
                        else {
                            cout << "Sorry, there are no " << itemName2 << "s available." << endl;
                            break;
                        }
                    }
                        
                        
                    case 'O':{ //orange
                        if (itemAvailable("Orange") == true){
                            cout << "There are ";
                            cout << orangeInv;
                            cout << " oranges available." << endl;
                            break;
                        }
                        else {
                            cout << "Sorry, there are no " << itemName2 << "s available." << endl;
                            break;
                        }
                    }
                    case 'o':{ //orange
                        if (itemAvailable("Orange") == true){
                            cout << "There are ";
                            cout << orangeInv;
                            cout << " oranges available." << endl;
                            break;
                        }
                        else {
                            cout << "Sorry, there are no " << itemName2 << "s available." << endl;
                            break;
                        }
                    }
                        
                        
                    case 'M':{ //milk
                        if (itemAvailable("2% gallon of Milk") == true){
                            cout << "There are ";
                            cout << milkInv;
                            cout << " gallons of milk available." << endl;
                            break;
                        }
                        else {
                            cout << "Sorry, there are no gallons of " << itemName2 << " available." << endl;
                            break;
                        }
                    }
                    case 'm':{ //milk
                        if (itemAvailable("2% gallon of Milk") == true){
                            cout << "There are ";
                            cout << milkInv;
                            cout << " gallons of milk available." << endl;
                            break;
                        }
                        else {
                            cout << "Sorry, there are no gallons of " << itemName2 << " available." << endl;
                            break;
                        }
                    }
                        
                    case 'F':{ //flour
                        if (itemAvailable("lb of Flour") == true){
                            cout << "There are ";
                            cout << flourInv;
                            cout << " lbs of flour available." << endl;
                            break;
                        }
                        else {
                            cout << "Sorry, there are no lbs of " << itemName2 << " available." << endl;
                            break;
                        }
                    }
                    case 'f':{ //flour
                        if (itemAvailable("lb of Flour") == true){
                            cout << "There are ";
                            cout << flourInv;
                            cout << " lbs of flour available." << endl;
                            break;
                        }
                        else {
                            cout << "Sorry, there are no lbs of " << itemName2 << " available." << endl;
                            break;
                        }
                    }
                        
                    case 'C':{ //cookie
                        if (itemAvailable("Cookie") == true){
                            cout << "There are ";
                            cout << cookieInv;
                            cout << " cookies available." << endl;
                            break;
                        }
                        else {
                            cout << "Sorry, there are no " << itemName2 << "'s available." << endl;
                            break;
                        }
                    }
                    case 'c':{ //cookie
                        if (itemAvailable("Cookie") == true){
                            cout << "There are ";
                            cout << cookieInv;
                            cout << " cookies available." << endl;
                            break;
                        }
                        else {
                            cout << "Sorry, there are no " << itemName2 << "'s available." << endl;
                            break;
                        }
                    }
                        
                    default:{
                        cout<< endl << " * Invalid Choice * " << endl;
                    }
                        
                }
                break;}
                
                
                
                
                
            case 3:{  // completed
                cout << endl << endl << " * Option 3 --- Check out item(s) from Inventory *" << endl;
                
                cout << "Enter the first letter of the item you wish to check out: ";
                cin >> itemName3;
                
                cout << "How many "<< itemName3 << "'s would you like to check out?" << endl;
                int count1;
                cin >> count1;
                
                switch(itemName3){
                        
                    case 'A':{ //apple
                        for(int i = 0; i < count1; i++){
                            checkoutItem("Apple");
                            charge = charge + appleChrg;
                        }
                        break;
                    }
                    case 'a':{ //apple
                        for(int i = 0; i < count1; i++){
                            checkoutItem("Apple");
                            charge = charge + appleChrg;
                        }
                        break;
                    }
                        
                    case 'B':{ //banana
                        for(int i = 0; i < count1; i++){
                            checkoutItem("Banana");
                            charge = charge + bananaChrg;
                        }
                        break;
                    }
                    case 'b':{ //banana
                        for(int i = 0; i < count1; i++){
                            checkoutItem("Banana");
                            charge = charge + bananaChrg;

                        }
                        break;
                    }
                        
                    case 'O':{ //orange
                        for(int i = 0; i < count1; i++){
                            checkoutItem("Orange");
                            charge = charge + orangeChrg;

                        }
                        break;
                    }
                    case 'o':{ //banana
                        for(int i = 0; i < count1; i++){
                            checkoutItem("Orange");
                            charge = charge + orangeChrg;
                        }
                        break;
                    }
                        
                    case 'M':{ //milk
                        for(int i = 0; i < count1; i++){
                            checkoutItem("2% gallon of Milk");
                            charge = charge + milkChrg;
                        }
                        break;
                    }
                    case 'm':{ //banana
                        for(int i = 0; i < count1; i++){
                            checkoutItem("2% gallon of Milk");
                            charge = charge + milkChrg;
                        }
                        break;
                    }
                        
                    case 'F':{ //flour
                        for(int i = 0; i < count1; i++){
                            checkoutItem("lb of Flour");
                            charge = charge + flourChrg;
                        }
                        break;
                    }
                    case 'f':{ //banana
                        for(int i = 0; i < count1; i++){
                            checkoutItem("lb of Flour");
                            charge = charge + flourChrg;
                        }
                        break;
                    }
                        
                    case 'C':{ //cookie
                        for(int i = 0; i < count1; i++){
                            checkoutItem("Cookie");
                            charge = charge + cookieChrg;
                        }
                        break;
                    }
                    case 'c':{ //banana
                        for(int i = 0; i < count1; i++){
                            checkoutItem("Cookie");
                            charge = charge + cookieChrg;
                        }
                        break;
                    }
                        
                    default:{
                        cout<< endl << " * Invalid Choice * " << endl;
                    }
                        
                }
                
                break;}
                
                
                
                
            case 4:{ // completed
                cout << endl << endl << " * Option 4 --- Return Item(s) *" << endl;
                
                cout << "Enter the first letter of the item you wish to return: ";
                cin >> itemName4;
                
                cout << "How many "<< itemName4 << " would you like to return?" << endl;
                int count2;
                cin >> count2;
                
                switch (itemName4){
                        
                    case 'A':{ //apple
                        for(int i = 0; i < count2; i++){
                            returnItem("Apple");
                            charge = charge - appleChrg;
                        }
                        break;
                    }
                    case 'a':{ //apple
                        for(int i = 0; i < count2; i++){
                            returnItem("Apple");
                            charge = charge - appleChrg;
                        }
                        break;
                    }
                        
                    case 'B':{ //banana
                        for(int i = 0; i < count2; i++){
                            returnItem("Banana");
                            charge = charge - bananaChrg;
                        }
                        break;
                    }
                    case 'b':{ //banana
                        for(int i = 0; i < count2; i++){
                            returnItem("Banana");
                            charge = charge - bananaChrg;
                        }
                        break;
                    }
                        
                    case 'O':{ //orange
                        for(int i = 0; i < count2; i++){
                            returnItem("Orange");
                            charge = charge - orangeChrg;
                        }
                        break;
                    }
                    case 'o':{ //orange
                        for(int i = 0; i < count2; i++){
                            returnItem("Orange");
                            charge = charge - orangeChrg;
                        }
                        break;
                    }
                        
                    case 'M':{ //milk
                        for(int i = 0; i < count2; i++){
                            returnItem("2% gallon of Milk");
                            charge = charge - milkChrg;
                        }
                        break;
                    }
                    case 'm':{ //milk
                        for(int i = 0; i < count2; i++){
                            returnItem("2% gallon of Milk");
                            charge = charge - milkChrg;
                        }
                        break;
                    }
                        
                    case 'F':{ //flour
                        for(int i = 0; i < count2; i++){
                            returnItem("lb of Flour");
                            charge = charge - flourChrg;
                        }
                        break;
                    }
                    case 'f':{ //flour
                        for(int i = 0; i < count2; i++){
                            returnItem("lb of Flour");
                            charge = charge - flourChrg;
                        }
                        break;
                    }
                        
                    case 'C':{ //cookie
                        for(int i = 0; i < count2; i++){
                            returnItem("Cookie");
                            charge = charge - cookieChrg;
                        }
                        break;
                    }
                    case 'c':{ //cookie
                        for(int i = 0; i < count2; i++){
                            returnItem("Cookie");
                            charge = charge - cookieChrg;
                        }
                        break;
                    }
                    default:{
                        cout<< endl << " * Invalid Choice * " << endl;
                    }
                        
                }
                
                break;}
                
                
                
                
            case 5:{ //completed
                cout << endl << endl << " * Option 5 --- Customer History *" << endl;
                if (input0 == 2){
                    cout<< "CUSTOMER ID - 2 Abdullah Buchh" << endl;
                }
                if (input0 == 3){
                    cout<< "CUSTOMER ID - 3 Rayan Khalil" << endl;
                }
                if (input0 == 4){
                    cout<< "CUSTOMER ID - 4 Leah Mirch" << endl;
                }
                if (input0 == 5){
                    cout<< "CUSTOMER ID - 5 Zaynab Mourtada" << endl;
                }
                            
                int input5;
                    char loop5 = true;
                    while (loop5 == true) {
                   
                        cout << endl  << " - What would you like to do> - CUSTOMER MENU -" << endl;
                        cout << "* Current balance due is: $" << (round(charge * 100.0) / 100.0) << " *" << endl;
                        cout << "1 - View Shopping History" << endl;
                        cout << "2 - View other Customer's Shopping History" << endl;
                        cout << "3 - Return to Main Menu" << endl;
                        cin >> input5;
                        
                        switch (input5) {
                            case 1: {
                                cout << endl << " * Option 1 - View Shopping History *" << endl;
                                if (input0 == 2){
                                    cout << "Shopping History for Shopper ID #2 - Abdullah Buchh" << endl << endl;
                                    cout << "Visit 1: Sat Apr  1 13:20:55 2023" << endl;
                                    cout << "Item checked out: Apple" << endl;
                                    cout << "Item checked out: Apple" << endl;
                                    cout << "Item checked out: Flour" << endl;
                                    cout << "Item checked out: Milk" << endl;
                                    cout << "Item checked out: Cookie" << endl;
                                    cout << "Item checked out: Cookie" << endl;
                                    cout << "Item checked out: Cookie" << endl;
                                    cout << "Total cost of visit 'Sat Apr  1 13:20:55 2023': $11.14" << endl;
                                    cout << endl <<  "Visit 2: Wed Apr  5 10:35:34 2023" << endl;
                                    cout << "Item checked out: Banana" << endl;
                                    cout << "Item checked out: Banana" << endl;
                                    cout << "Item checked out: Banana" << endl;
                                    cout << "Item checked out: Orange" << endl;
                                    cout << "Item checked out: Orange" << endl;
                                    cout << "Total cost of visit 'Wed Apr  5 10:35:34 2023': $2.25" << endl << endl;
                                    break;
                                }
                                if (input0 == 3){
                                    cout << "Shopping History for Shopper ID #3 - Rayan Khalil" << endl;
                                    cout << "Visit 1: Wed Apr  5 18:55:10 2023" << endl;
                                    cout << "Item checked out: Apple" << endl;
                                    cout << "Item checked out: Apple" << endl;
                                    cout << "Item checked out: Orange" << endl;
                                    cout << "Item checked out: Orange" << endl;
                                    cout << "Item checked out: Banana" << endl;
                                    cout << "Item checked out: Banana" << endl;
                                    cout << "Item checked out: Flour" << endl;
                                    cout << "Item checked out: Cookie" << endl;
                                    cout << "Total cost of visit 'Wed Apr  5 18:55:10 2023': $5.99" << endl;
                                    cout << endl <<  "Visit 2: Thu Apr  6 13:34:02 2023" << endl;
                                    cout << "Item checked out: Milk" << endl;
                                    cout << "Item checked out: Cookie" << endl;
                                    cout << "Item checked out: Cookie" << endl;
                                    cout << "Total cost of visit 'Thu Apr  6 13:34:02 2023': $7.15" << endl;
                                    break;
                                }
                                if (input0 == 4){
                                    cout << "Visit 1: Sun Apr  2 09:10:22 2023" << endl;
                                    cout << "Item checked out: Banana" << endl;
                                    cout << "Item checked out: Banana" << endl;
                                    cout << "Item checked out: Banana" << endl;
                                    cout << "Item checked out: Banana" << endl;
                                    cout << "Item checked out: Milk" << endl;
                                    cout << "Item checked out: Flour" << endl;
                                    cout << "Item checked out: Cookie" << endl;
                                    cout << "Item checked out: Cookie" << endl;
                                    cout << "Item checked out: Cookie" << endl;
                                    cout << "Total cost of visit 'Sun Apr  2 09:10:22 2023': $11.14" << endl;
                                    cout << endl <<  "Visit 2: Sun Apr  9 10:02:57 2023" << endl;
                                    cout << "Item checked out: Apple" << endl;
                                    cout << "Item checked out: Apple" << endl;
                                    cout << "Item checked out: Orange" << endl;
                                    cout << "Item checked out: Orange" << endl;
                                    cout << "Total cost of visit 'Sun Apr  9 10:02:57 2023': $2.50" << endl;
                                    break;
                                }
                                if (input0 == 5){
                                    cout << endl<<"Shopping History for Shopper ID #3 - Zaynab Mourtada" << endl<< endl;
                                    cout << "Visit 1: Thu Apr  6 08:22:20 2023" << endl;
                                    cout << "Item checked out: Milk" << endl;
                                    cout << "Item checked out: Flour" << endl;
                                    cout << "Item checked out: Orange" << endl;
                                    cout << "Item checked out: Orange" << endl;
                                    cout << "Total cost of visit 'Thu Apr  6 08:22:20 2023': $4.29" << endl;
                                    cout << endl <<  "Visit 2: Sat Apr  8 16:57:35 2023" << endl;
                                    cout << "Item checked out: Apple" << endl;
                                    cout << "Item checked out: Apple" << endl;
                                    cout << "Item checked out: Flour" << endl;
                                    cout << "Item checked out: Milk" << endl;
                                    cout << "Item checked out: Cookie" << endl;
                                    cout << "Item checked out: Cookie" << endl;
                                    cout << "Item checked out: Cookie" << endl;
                                    cout << "Total cost of visit 'Sat Apr  8 16:57:35 2023': $11.14" << endl;
                                    break;
                                }
                 
                                break;
                            }
                 
                            case 2:{
                                int input52;
                                cout << endl << " * Option 2 - View other Customer's Shopping History *" << endl;
                                cout << "* 2 - Abdullah Buchh " << endl;
                                cout << "* 3 - Rayan Khalil " << endl;
                                cout << "* 4 - Leah Mirch " << endl;
                                cout << "* 5 - Zaynab Mourtada "<< endl;
                                cout << "Enter the alternate customer's ID number that you would like to view:" << endl;
                                cin >> input52;
                                
                             
                                 bool loop52=true;
                                 
                                 while(loop52 ==true){
                                     switch(input52){
                                         case 2:{
                                             cout << "Shopping History for Shopper ID #2 - Abdullah Buchh" << endl << endl;
                                             cout << "Visit 1: Sat Apr  1 13:20:55 2023" << endl;
                                             cout << "Item checked out: Apple" << endl;
                                             cout << "Item checked out: Apple" << endl;
                                             cout << "Item checked out: Flour" << endl;
                                             cout << "Item checked out: Milk" << endl;
                                             cout << "Item checked out: Cookie" << endl;
                                             cout << "Item checked out: Cookie" << endl;
                                             cout << "Item checked out: Cookie" << endl;
                                             cout << "Total cost of visit 'Sat Apr  1 13:20:55 2023': $11.14" << endl;
                                             cout << endl <<  "Visit 2: Wed Apr  5 10:35:34 2023" << endl;
                                             cout << "Item checked out: Banana" << endl;
                                             cout << "Item checked out: Banana" << endl;
                                             cout << "Item checked out: Banana" << endl;
                                             cout << "Item checked out: Orange" << endl;
                                             cout << "Item checked out: Orange" << endl;
                                             cout << "Total cost of visit 'Wed Apr  5 10:35:34 2023': $2.25" << endl << endl;
                                             loop52=false;
                                             break;
                                         }
                                         case 3:{
                                             cout << "Shopping History for Shopper ID #3 - Rayan Khalil" << endl;
                                             cout << "Visit 1: Wed Apr  5 18:55:10 2023" << endl;
                                             cout << "Item checked out: Apple" << endl;
                                             cout << "Item checked out: Apple" << endl;
                                             cout << "Item checked out: Orange" << endl;
                                             cout << "Item checked out: Orange" << endl;
                                             cout << "Item checked out: Banana" << endl;
                                             cout << "Item checked out: Banana" << endl;
                                             cout << "Item checked out: Flour" << endl;
                                             cout << "Item checked out: Cookie" << endl;
                                             cout << "Total cost of visit 'Wed Apr  5 18:55:10 2023': $5.99" << endl;
                                             cout << endl <<  "Visit 2: Thu Apr  6 13:34:02 2023" << endl;
                                             cout << "Item checked out: Milk" << endl;
                                             cout << "Item checked out: Cookie" << endl;
                                             cout << "Item checked out: Cookie" << endl;
                                             cout << "Total cost of visit 'Thu Apr  6 13:34:02 2023': $7.15" << endl;
                                             loop52=false;
                                             break;
                                         }
                                         case 4:{
                                             cout << endl<<"Shopping History for Shopper ID #4 - Leah Mirch" << endl<< endl;
                                             cout << "Visit 1: Sun Apr  2 09:10:22 2023" << endl;
                                             cout << "Item checked out: Banana" << endl;
                                             cout << "Item checked out: Banana" << endl;
                                             cout << "Item checked out: Banana" << endl;
                                             cout << "Item checked out: Banana" << endl;
                                             cout << "Item checked out: Milk" << endl;
                                             cout << "Item checked out: Flour" << endl;
                                             cout << "Item checked out: Cookie" << endl;
                                             cout << "Item checked out: Cookie" << endl;
                                             cout << "Item checked out: Cookie" << endl;
                                             cout << "Total cost of visit 'Sun Apr  2 09:10:22 2023': $11.14" << endl;
                                             cout << endl <<  "Visit 2: Sun Apr  9 10:02:57 2023" << endl;
                                             cout << "Item checked out: Apple" << endl;
                                             cout << "Item checked out: Apple" << endl;
                                             cout << "Item checked out: Orange" << endl;
                                             cout << "Item checked out: Orange" << endl;
                                             cout << "Total cost of visit 'Sun Apr  9 10:02:57 2023': $2.50" << endl;
                                             loop52=false;
                                             break;
                                         }
                                         case 5:{
                                             cout << endl<<"Shopping History for Shopper ID #5 - Zaynab Mourtada" << endl<< endl;
                                             cout << "Visit 1: Thu Apr  6 08:22:20 2023" << endl;
                                             cout << "Item checked out: Milk" << endl;
                                             cout << "Item checked out: Flour" << endl;
                                             cout << "Item checked out: Orange" << endl;
                                             cout << "Item checked out: Orange" << endl;
                                             cout << "Total cost of visit 'Thu Apr  6 08:22:20 2023': $4.29" << endl;
                                             cout << endl <<  "Visit 2: Sat Apr  8 16:57:35 2023" << endl;
                                             cout << "Item checked out: Apple" << endl;
                                             cout << "Item checked out: Apple" << endl;
                                             cout << "Item checked out: Flour" << endl;
                                             cout << "Item checked out: Milk" << endl;
                                             cout << "Item checked out: Cookie" << endl;
                                             cout << "Item checked out: Cookie" << endl;
                                             cout << "Item checked out: Cookie" << endl;
                                             cout << "Total cost of visit 'Sat Apr  8 16:57:35 2023': $11.14" << endl;
                                             loop52=false;
                                             break;
                                         }
                                         default:{
                                             cout<< endl << " * Invalid Choice * " << endl;
                                             cin >> input52;
                                             loop52=true;
                                         }
                                     }
                                 }
                                
                                break;
                                
                            }
                                
                            case 3: {
                                    cout << endl << " * Option 3 - Return to Main Menu *" << endl;
                                    cout << "Returning to Main Menu now ... " << endl << endl;
                                    loop5 = false;
                                    break;
                                }
                 
                                default: {
                                    cout << endl << " * Invalid Choice * " << endl;
                                }
                                }
                            }
                            break;
                        }
                
                
                
                
            case 6:{
                cout << endl << endl;
                if (charge > 0 ){
                    cout << "Charging $" << charge << " to your account." << endl;
                }
                else if (charge < 0 ){
                    cout << "Returning $" << abs(charge) <<" to your account." << endl;
                }
                else {
                    cout << "You owe $0." << endl;
                }
                
                
                cout << "--- Thank you for visiting the Group Project 3 CECS Store ---" << endl << endl;
                loop1 = false;
                break;}

            default:{
                cout<< endl << " * Invalid Choice * " << endl;
                break;}
        }
       
       }
    
    system("pause");
    return 0;
}
