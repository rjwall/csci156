#include<iostream>
#include "version3.h"



int main()
{
  int num_shirts;
  cout << "How many articles are you going to purchase?";
  cin >> num_shirts;
  Article tempArticle;
  tempArticle.display(num_shirts);
  
  double price_select = 10.00;
  cout << "What do you want to purchase?" << endl;
  cout << "Type 0 for shirt, 1 for pants, 2 for underwear: ";
  int type_select = 0;
  cin >> type_select;
  cout << endl << "You chose: " << type_select << endl;
  cout << "What size are you looking for?" << endl;
  int size_select = 0;
  cin >> size_select;
  cout << endl << "You chose: " << size_select;
  //cout << endl << "And is this for a man or a woman?" << endl;
  //cout << endl << "Type 0 for men's or 1 for women's: ";
  //int gender_select = 0;
  //cin >> gender_select;
  //cout << endl << "You chose: " << gender_select << endl;
  tempArticle.display(type_select, size_select, price_select, num_shirts);
  
  
  return 0;
}