#include <iostream>
#include "../ShoppingCart.h"
#include "../ItemToPurchase.h"
#include <string>

using namespace std;

ShoppingCart::ShoppingCart(){

   CustomerName = "none";
   CurrentDate = "January 1, 2016";

   }

ShoppingCart::ShoppingCart(string User_Name, string User_Date){

   CustomerName = User_Name;
   CurrentDate = User_Date;

   }

void ShoppingCart::SetCustomerName(string User_Name){

   CustomerName = User_Name;

   }

string ShoppingCart::GetCustomerName(){

   return CustomerName;

   }

void ShoppingCart::SetDate(string User_Date){

   CurrentDate = User_Date;

   }

string ShoppingCart::GetDate(){

   return CurrentDate;

   }


void ShoppingCart::AddItem(ItemToPurchase& item){

   cartItems.push_back(item);

   }

void ShoppingCart::RemoveItem(string Product_Name){
   bool flag = true;

   for(size_t i = 0; i < cartItems.size(); ++i){
      if(cartItems[i].GetName() == Product_Name){
        cartItems.erase(cartItems.begin() + i);
        flag = false;
         break;
      }
      }
   if(flag == true){
      cout << "Item not found in cart. Nothing removed.\n";
      }

   }

void ShoppingCart::ModifyItem(ItemToPurchase& item){

   bool flag = true;
   for(size_t i = 0; i < cartItems.size(); ++i){
      if(cartItems[i].GetName() == item.GetName()){
        cartItems[i].SetQuantity(item.GetQuantity());
         break;
      }
      }
   if(flag == true){
      cout << "Item not found in cart. Nothing modified.\n\n";
      }

   }


int ShoppingCart::GetNumItemsInCart(){
   int totalQ = 0;

   for(size_t i = 0; i < cartItems.size(); ++i){
      totalQ = totalQ + cartItems[i].GetQuantity();

      }

   return totalQ;
   }

double ShoppingCart::GetCostOfCart(){
   double total = 0;

   for(size_t i = 0; i < cartItems.size(); ++i){
      total = total + (cartItems[i].GetQuantity() * cartItems[i].GetPrice());
      }
      return total;
   }

void ShoppingCart::PrintTotal(){
   int q = 0;
   double total = 0;

   for(size_t i = 0; i < cartItems.size(); ++i){
      q = q + cartItems[i].GetQuantity();
      }

   cout << "OUTPUT SHOPPING CART\n";
   cout << CustomerName << "'s Shopping Cart - " << CurrentDate << endl;
   cout << "Number of Items: " << q  << "\n\n";

   if(cartItems.size() == 0){
      cout << "SHOPPING CART IS EMPTY\n\n";
      cout << "Total: $0\n\n";

   }
   else{

      for(size_t i = 0; i < cartItems.size(); ++i){
         cartItems[i].PrintTotal();
         total = total + cartItems[i].GetTotal();

         }
   cout << "\n";
   cout << "Total: $" << total << endl;
   cout << "\n";
   }
}

void ShoppingCart::PrintDescriptions(){
   cout << "OUTPUT ITEMS' DESCRIPTIONS\n";
   cout << CustomerName << "'s Shopping Cart - " << CurrentDate << "\n\n";
   cout << "Item Descriptions" << endl;

   for(size_t i = 0; i < cartItems.size(); ++i){
      cout << cartItems[i].GetName() << ": " << cartItems[i].GetDescription() << endl;

      }
   cout << endl;
   }
