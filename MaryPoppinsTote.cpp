#pregma
#include <iostream>
#include MaryPoppinsTote.hpp
using namespace std;

class MarryPoppinsTote{


MarryPoppinsTote(){
  toteSize = 0;
  tote = new T[0];
  

//Copy Constructor: Copying data from original Tote to newTote
MarryPoppinsTote(const MarryPoppinsTote& other){
  //Initialize
  (*this).tote = int[other.toteSize];
  for (int i = 0; i < other.toteSize; i++) {
      new tote[i] = other.tote[i];
  }


}

//Deconstructor to delete original tote array
~MarryPoppinsTote(){
  if(tote){
    delete(tote);
    }
  }

//Place takes a item and places it into the tote
void place(int item){
  toteSize = toteSize + 1;
  tote = new int[toteSize];
  item = tote[tote.size];

  }





int search(int item){
  int count = 0;
   for(int i = 0; i<tote.size; i++ ){
       if(item == tote[i]){
         count = count +1;  
       }
 
     }
     return count;

  }
// Randomly searches the tote array, if there are no items within tote throw exception
int reach(){
  int randomNumber;
  if(tote == NULL){
    throw 1;
  }else{
  randomNumber = rand() % tote.size;
  return tote[randomNumber];
  }
}


MarryPoppinsTote& operator=(const MarryPoppinsTote & other){
  if(other >= 0 && other < toteSize){
            return tote[other];
        }
        else{
            throw(1);
        }
    }

  }




};// end class



