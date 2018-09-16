#include <iostream>
#include <string>
#include "MaryPoppinsTote.cpp"
using namespace std;

class MaryPoppinsTote{
private:

int* ary;
int size;

public:

  MaryPoppinsTote(); // Basic constructor
  MaryPoppinsTote(const MaryPoppinsTote& other); // Advanced constructor

  ~MaryPoppinsTote(); // Deconstructor

  //Get & Set

  void place(int item); // set

  int reach();

  int search(int item); // get (T because it could be anything in there)

  MaryPoppinsTote& operator = (const MaryPoppinsTote& other);

  friend ostream& operator<<(ostream& os, const MaryPoppinsTote& me){
        os << "[" ;
        for(int i = 0; i < me.size; i++){
            os << me.ary[i] << " " ;
        }
        os << "]";
        return os;
    }
}; //end class
