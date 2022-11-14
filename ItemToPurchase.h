#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
      public:
         ItemToPurchase();

         ItemToPurchase(string User_Name, string User_Description, int User_price, int User_Quantity);

         void SetName(string User_Name);

         string GetName();

         void SetDescription(string User_Description);

         string GetDescription();

         void SetPrice(int User_price);

         int GetPrice();

         void SetQuantity(int User_Quantity);

         int GetQuantity();

         void SetTotal();

         int GetTotal();

         void PrintTotal();
      private:
         string itemName;
         int itemPrice;
         int itemQuantity;
         int itemTotal;
         string itemDescription;

   };

#endif
