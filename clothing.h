#ifndef CLOTHING_H
#define CLOTHING_H

using namespace std;

class Article{
  private:
  int size;
  string type;
  string brand;
  string color;
  static int numofArticles;
  
  public:
  int getsize(){return size;}
  string gettype(){return type;}
  string getbrand(){return brand;}
  string getcolor(){return color;}
  void setsize(int s){ size = s; }
  void settype(string clothingtype){ type = clothingtype; }
  void setbrand(string clothingbrand){ brand = clothingbrand; }
  void setcolor(string clothingcolor){ color = clothingcolor; }
  
  void setAll(int, string, string, string);
  
  Article(int, string, string, string);
  
  ~Article();
  
  Article();
  
  static int getnumofArticles() { return numofArticles; }
  
  void toString();
};

int Article::numofArticles = 0;

void Article::setAll(int size, string type, string brand, string color){
  
  this -> size = size;
  this -> type = type;
  this -> brand = brand;
  this -> color = color;
  Article::numofArticles++;
  
}

void Article::Article(int size, string type, string brand, string color) {
  this -> size = size;
  this -> type = type;
  this -> brand = brand;
  this -> color = color;
  
}
Article::~Article() {
  cout << "Article " << this -> type << " destroyed." << endl;
}
# endif