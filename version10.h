#ifndef CLOTHING_H
#define CLOTHING_H

using namespace std;

class Article
{
private:
  struct Desc
  {
    //string call;
    int type;
    int size;
    //int gender;
    double price;
    //int num;
  };
  
public:

  
  Article();
  
  //void display() {
  //Desc shirt;
  //shirt.type = 0;
  //shirt.call = " shirt.";
  
  //Desc pants;
  //pants.type = 1;
  //pants.call = " pants.";
  
  //Desc under;
  //under.type = 2;
  //under.call = " underwear.";
  //}
  
  void display(int type_select, int size_select, double price_select, int num_shirts, int num_bought) {
  Desc conversion;
   
  conversion.type = type_select;
  
  //Desc shirt;
  //shirt.type = 0;
  //shirt.call = " shirt.";
  
  //Desc pants;
  //pants.type = 1;
  //pants.call = " pants.";
  
  //Desc under;
  //under.type = 2;
  //under.call = " underwear.";
  //Desc num;
  
  
  //conversion.num = num_shirts;
  conversion.size = size_select;
  //conversion.gender = gender_select;
  //conversion.price = 2.00 * size;
  
  
  int typeID;
  if (conversion.type == 0)
  {
    typeID = 0;
    cout << "You have purchased a shirt." << endl;
    //num_bought = num_bought + 1;
  }
  else if (conversion.type == 1)
  {
    typeID = 1;
    cout << "You have purchased pants." << endl;
    //num_bought = num_bought + 1;
  }
  else if (conversion.type == 2)
  {
    typeID = 2;
    cout << "You have purchased underwear." << endl;
    //num_bought = num_bought + 1;
  }
  else if (type_select >= 3)
  {
    cout << "error" << endl;
    num_bought = num_shirts;
  }
  //cout << "That will be $" << price << endl;
  }
  
  
  
  
  void display(int num_shirts) {
  cout << "So you want " << num_shirts << " items?" << endl;
  }
  
  ~Article();
};

Article::Article()
{
  cout << "Okay." << endl;
}

Article::~Article()
{
  cout << "Have a nice day!" << endl;
}

class Receipt : public Article{
  private:
  
  public:
  //double subtotal = 0.00;
  //int num_total = 9;
  //void sub(double price_select){
  //  subtotal = subtotal + price_select;
  //}
  
  //void total(int num_shirts){
  //  num_total = num_shirts;
  //}
  
  void save(int num_bought){
    ofstream outputFile;
    outputFile.open("Receipt.txt");
    outputFile << "Number of articles purchased: " << num_bought << endl;
    //outputFile << "Total price: $" << subtotal << endl;
    outputFile.close();
    cout << "File written!" << endl;
  };
};

#endif