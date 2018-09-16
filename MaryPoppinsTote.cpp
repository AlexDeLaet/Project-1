#pregma
#include <iostream>
#include MaryPoppinsTote.hpp
using namespace std;

class MarryPoppinsTote{


int toteSize;
//MarryPoppinsTote int *tote;
int tote[];

MarryPoppinsTote(){
  

//Copy Constructor: Coppying data from original Tote to newTote
MarryPoppinsTote(const MarryPoppinsTote & other){
  //Inizialize
  this.tote = int[other.toteSize];
  for (index i = 0; i < toteSize; i++) {
      newTote[i] = tote[i];
  }
//  this.newTote = other.tote;

}

//Deconstructor to delete orignal tote array
~MarryPoppinsTote(){
  if(tote){
    delete(tote);
    }
  }

void place(int item){

  }

int search(int item){
  for(int i = 0; i<tote.size )

  }

int reach(){



}

MarryPoppinsTote& operator=(const MarryPoppinsTote & other){
  if(index >= 0 && index < size){
            return ary[index];
        }
        else{
            throw(1);
        }
    }

  }




};// end class
