#ifndef HELLO_H
#define HELLO_H 

//commit #2

using namespace std;
struct price
{
  double original_price;
  double discount;
  double new_price;
};
// Creating class
 
class Article
{
 private:
  int size;
  string type;
  string brand;
  string color;
  
  public:
    int getsize(){return size;}
    string gettype(){return type;}
    string getbrand(){return brand;}
    string getcolor(){return color;}
    void setsize(int s){ size = s; }
    void settype(string clothingtype){ type = clothingtype; }
    void setbrand(string clothingbrand){ brand = clothingbrand; }
    void setcolor(string clothingcolor){ color = clothingcolor; }
    
    Article();
    
    void display() {
      cout << "Hello World\n";
    }
    
    ~Article();
};

Article::Article()
{	cout << "Hello Indy " << endl;
}

price getInfo()
{
  price tempprice;
  cout << "Input your discount: $";
  cin >> tempprice.discount;
  tempprice.new_price = original_price - discount;
  
  return tempprice;
}

Article::~Article()
{	cout << "Goodbye Indy " << endl; 
}

#endif 
