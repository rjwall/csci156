#ifndef CLOTHING_H
#define CLOTHING_H

using namespace std;

class Article
{
private:
  struct Desc
  {
    string call;
    int type;
    int size;
    //int gender;
    double price;
    int num;
  };
  
public:

  
  Article();
  
  void display() {
  Desc shirt;
  shirt.type = 0;
  shirt.call = " shirt.";
  
  Desc pants;
  pants.type = 1;
  pants.call = " pants.";
  
  Desc under;
  under.type = 2;
  under.call = " underwear.";
  }
  
  void display(int type_select, int size_select, double price_select, int num_shirts) {
  Desc conversion;
   
  conversion.type = type_select;
  
  Desc shirt;
  shirt.type = 0;
  shirt.call = " shirt.";
  
  Desc pants;
  pants.type = 1;
  pants.call = " pants.";
  
  Desc under;
  under.type = 2;
  under.call = " underwear.";
  Desc num;
  
  
  //conversion.num = num_shirts;
  conversion.size = size_select;
  //conversion.gender = gender_select;
  conversion.price = price_select;
  
  int typeID;
  if (type_select = 0)
  {
    typeID = 0;
    cout << "You have purchased a shirt." << endl;
    //num_bought = num_bought + 1;
  }
  else if (type_select = 1)
  {
    typeID = 1;
    cout << "You have purchased pants." << endl;
    //num_bought = num_bought + 1;
  }
  else if (type_select = 2)
  {
    typeID = 2;
    cout << "You have purchased underwear." << endl;
  }
  
  }
  
  
  
  
  void display(int num_shirts) {
  cout << "So you want " << num_shirts << " items?" << endl;
  }
  
  ~Article();
};

Article::Article()
{
  cout << "Welcome!" << endl;
}

Article::~Article()
{
  cout << "Have a nice day!" << endl;
}



#endif