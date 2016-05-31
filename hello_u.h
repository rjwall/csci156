#ifndef NAME_H
#define NAME_H

using namespace std;

class Naming {
  int width, height;
  string name,thanks;
  public:
  void set_values (int, int);
  void set_name(string);
  int area() {return width*height;}
  string hello() {return thanks + name ;}
   
  
  Naming(int, int, string, string);
  
  ~Naming();
  
 Naming();
  
  void toString();
};



void Naming::set_values (int x, int y) {
  if ( x >= 0)
    width = x;
    height = y;
}

void Naming::set_name (string n1) {
  name = n1;
  thanks = "Thanks for using our software, ";
}
Naming::Naming(int height, int weight, string name, string thanks){
  this -> height = height;
  this -> width = width;
  this -> name = name;
  this -> thanks = thanks;
  cout << "The constructor works" << endl;
}

Naming::Naming(){
  height = 0;
  width = 0;
}

Naming::~Naming(){
  cout << "The destructor works"<< endl;
}
#endif