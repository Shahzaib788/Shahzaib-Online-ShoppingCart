#include <iostream>
#include <iomanip>
using namespace std;

#include "../ItemToPurchase.h"
#include "../ShoppingCart.h"


void PrintMenu() {
   cout << "MENU" << endl;
   cout << "a - Add item to cart" << endl;
   cout << "d - Remove item from cart" << endl;
   cout << "c - Change item quantity" << endl;
   cout << "i - Output items' descriptions" << endl;
   cout << "o - Output shopping cart" << endl;
   cout << "q - Quit\n" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {

   if(option == 'a'){
      string Item_name;
      string Item_Des;
      double item_P;
      int item_Q;

      cout << "ADD ITEM TO CART\n"
               "Enter the item name:\n"
               "Enter the item description:\n"
               "Enter the item price:\n"
               "Enter the item quantity:\n\n";

               getline(cin, Item_name);
               getline(cin, Item_Des);
               cin >> item_P;
               cin >> item_Q;

               ItemToPurchase temp;

               temp.SetName(Item_name);
               temp.SetDescription(Item_Des);
               temp.SetQuantity(item_Q);
               temp.SetPrice(item_P);


               theCart.AddItem(temp);

      }
   else if(option == 'd'){
      string removeItem;
      cout << "REMOVE ITEM FROM CART" << endl;
      cout << "Enter name of item to remove:\n";

      getline(cin, removeItem);

      theCart.RemoveItem(removeItem);
      cout << "\n";

      }

   else if(option == 'c'){ // // ask quang
      string Item_Name;
      int ItemQ;
      ItemToPurchase temp;
       cout << "CHANGE ITEM QUANTITY" << endl;
       cout << "Enter the item name:" << endl;
       getline(cin, Item_Name);

       cout << "Enter the new quantity:\n";
       cin >> ItemQ;
       cin.ignore();

       temp.SetName(Item_Name);
       temp.SetQuantity(ItemQ);

       theCart.ModifyItem(temp);

   }
   else if(option == 'i'){
      theCart.PrintDescriptions();
      }

   else if(option == 'o'){
      theCart.PrintTotal();
      }
}

int main() {
   char Letter = 'z';
   ShoppingCart cart;
   string MyName;
   string Date;

   cout << "Enter customer's name:" << endl;
   getline(cin, MyName);
   cart.SetCustomerName(MyName);

   cout << "Enter today's date:" << endl;
   getline(cin, Date);
   cart.SetDate(Date);

   cout << "\n";

   cout << "Customer name: " << cart.GetCustomerName() << endl;
   cout << "Today's date: " << cart.GetDate() << endl;

   cout << "\n";


   PrintMenu();

   while(Letter != 'q'){
      cout << "Choose an option:" << endl;
      cin >> Letter;
      cin.ignore();
      if(Letter == 'a' ||Letter == 'i'|| Letter == 'o'|| Letter == 'd'|| Letter == 'c'){
         ExecuteMenu(Letter, cart);
         PrintMenu();
         }

}



   return 0;
}
