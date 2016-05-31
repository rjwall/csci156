#include<iostream>
#include "clothing.h"

using namespace std;

int main()
{
  string tbucket;
  int sbucket;
  string brbucket;
  string cbucket;
  cout << "Hello, what type of clothing are you looking for?" << endl;
  cin >> tbucket;
  cout << endl << "And what size would that be in?" << endl;
  cin >> sbucket;
  cout << endl << "Which brand would you like?" << endl;
  cin >> brbucket;
  cout << endl << "What color would you like that in?" << endl;
  cin >> cbucket;
  Article r;
  r.setAll(sbucket, tbucket, brbucket, cbucket);
  cout << "So you would like a" << cbucket << " " << tbucket << " by " << brbucket << " in size " << sbucket << "?" << endl;
  cout << "Well, have a nice day!" << endl;
  return 0;
}