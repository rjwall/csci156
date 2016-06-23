#include<iostream>
#include "version2.h"



int main()
{
  cout << "How many shirts do you want to purchase?" << endl;
  int num_shirts;
  cin >> num_shirts;
  Article tempArticle;
  tempArticle.display(num_shirts);
  
  return 0;
}