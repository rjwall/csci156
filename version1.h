#ifndef HELLO_H
#define HELLO_H 

//commit #2

using namespace std;
 
// Creating class
 
class Article
{
 private:
    
  public:
    Article();
    
    void display() {
      cout << "Hello World\n";
    }
    
    ~Article();
};

Article::Article()
{	cout << "Hello Indy " << endl;
}

Article::~Article()
{	cout << "Goodbye Indy " << endl; 
}

#endif 
