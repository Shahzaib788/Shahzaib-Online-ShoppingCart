#include <iostream>
#include "../ItemToPurchase.h"
using namespace std;

ItemToPurchase::ItemToPurchase(){

   itemName = "none";
   itemPrice = 0;
   itemQuantity = 0;
   itemDescription = "none";

   }


ItemToPurchase::ItemToPurchase(string User_Name, string User_Description, int User_price, int User_Quantity){

   itemName = User_Name;
   itemPrice = User_price;
   itemQuantity = User_Quantity;
   itemDescription = User_Description;

   }

void ItemToPurchase::SetName(string User_Name){

    itemName = User_Name;

   }

string ItemToPurchase::GetName(){

   return itemName;

   }

void ItemToPurchase::SetDescription(string User_Description){

    itemDescription = User_Description;

   }

string ItemToPurchase::GetDescription(){

   return itemDescription;

   }

void ItemToPurchase::SetPrice(int User_price){

   itemPrice = User_price;

   }

int ItemToPurchase::GetPrice(){

   return itemPrice;

   }

void ItemToPurchase::SetQuantity(int User_Quantity){

   itemQuantity = User_Quantity;

   }

int ItemToPurchase::GetQuantity(){

   return itemQuantity;

   }

void ItemToPurchase::SetTotal(){

   itemTotal = itemQuantity * itemPrice;

   }

int ItemToPurchase::GetTotal(){

   itemTotal = itemQuantity * itemPrice;

   return itemTotal;

}

void ItemToPurchase::PrintTotal(){

   cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << GetTotal() << endl;

   }
