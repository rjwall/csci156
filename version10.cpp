#include<iostream>
#include<fstream>
#include "version10.h"



int main()
{
  int num_shirts;
  cout << "How many articles are you going to purchase? ";
  cin >> num_shirts;
  int num_bought;
  
  Article tempArticle;
  tempArticle.display(num_shirts);
  while (num_bought < num_shirts)
  {
    
    cout << "What do you want to purchase?" << endl;
    cout << "Type 0 for shirt, 1 for pants, 2 for underwear: ";
    int type_select;
    cin >> type_select;
    cout << endl << "You chose: " << type_select << endl;
    cout << "What size are you looking for?" << endl;
    int size_select;
    cin >> size_select;
    cout << endl << "You chose: " << size_select << endl;
    //cout << endl << "And is this for a man or a woman?" << endl;
    //cout << endl << "Type 0 for men's or 1 for women's: ";
    //int gender_select = 0;
    //cin >> gender_select;
    //cout << endl << "You chose: " << gender_select << endl;
    double price_select = 2.00 * size_select;
    cout << "That will cost: $" << price_select << endl;
    
    //tempReceipt.sub(price_select);
    //tempReceipt.total(num_shirts);
    tempArticle.display(type_select, size_select, price_select, num_shirts, num_bought);
    num_bought = num_bought + 1;
  }
  
  Receipt tempReceipt;
  tempReceipt.save(num_bought);
  return 0; 
}