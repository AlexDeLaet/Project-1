#include <iostream>
#include <string>
using namespace std;

template <class T> class MaryPoppinsTote{
private:

  T * tote;
  int size;

public:

  MaryPoppinsTote(); // Basic constructor
  MaryPoppinsTote(const MaryPoppinsTote& other); // Advanced constructor

  ~MaryPoppinsTote(); // Deconstructor

  //Get & Set

  void place(T item); // set

  T reach();

  int search(T item); // get (T because it could be anything in there)

MaryPoppinsTote& operator=(const MaryPoppinsTote& other){

    if(this->size != other.size){
        int newSize = other.size;
        T * temp = tote;
        tote = new T[newSize];
        this->size = newSize;
        delete(temp);
    } else {
        for(int i = 0; i < this->size; i++){
            tote[i] = other.tote[i];
        }
    }
    MaryPoppinsTote& newtote = *this;
    return newtote;
  }


  friend ostream& operator<<(ostream& os, const MaryPoppinsTote& me){
        os << "[" ;
        for(int i = 0; i < me.size; i++){
            os << me.tote[i];
            if(i < me.size - 1){
              os<< "-";
            }
        }
        os << "]";
        return os;
    }
}; //end class

template class MaryPoppinsTote<int>;
template class MaryPoppinsTote<float>;
template class MaryPoppinsTote<double>;
template class MaryPoppinsTote<string>;
template class MaryPoppinsTote<char>;
