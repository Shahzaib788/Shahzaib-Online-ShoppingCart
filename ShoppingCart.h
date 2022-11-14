#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include "ItemToPurchase.h"

#include <vector>
#include <string>
using namespace std;

class ShoppingCart {
   public:
      ShoppingCart();

      ShoppingCart(string User_Name, string User_Date);

      void SetCustomerName(string User_Name);

      string GetCustomerName();

      void SetDate(string User_Date);

      string GetDate();

      void AddItem(ItemToPurchase& item);

      void RemoveItem(string Product_Name);

      void ModifyItem(ItemToPurchase& item);

      int GetNumItemsInCart();

      double GetCostOfCart();

      void PrintTotal();

      void PrintDescriptions();


   private:
   string CustomerName;
   string CurrentDate;
   vector <ItemToPurchase> cartItems;


   };
#endif
