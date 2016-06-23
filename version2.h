#ifndef CLOTHING_H
#define CLOTHING_H

using namespace std;



class Article
{
private:
  struct Desc
  {
    int type;
    int size;
    int gender;
    double price;
  };
  
public:

  
  Article();
  
  void display(int num_shirts) {
  cout << "So you want " << num_shirts << " shirts?" << endl;
  }
  
  ~Article();
};

Article::Article()
{
  cout << "Constructor works!" << endl;
}

Article::~Article()
{
  cout << "Destructor works!" << endl;
}



#endif