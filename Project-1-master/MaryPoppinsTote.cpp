
#include <iostream>
#include "MaryPoppinsTote.hpp"
using namespace std;



template <class T> MaryPoppinsTote<T>::MaryPoppinsTote(){
  (*this).size = 0;
  tote = new T[0];
}


//Copy Constructor: Copying data from original Tote to new Tote
template <class T> MaryPoppinsTote<T>::MaryPoppinsTote(const MaryPoppinsTote& other){
    tote = new T[other.size];
    (*this).size = other.size;
    for (int i = 0; i < other.size; i++) {
      tote[i] = other.tote[i];
    }
  }




//Deconstructor to delete original tote array
template <class T> MaryPoppinsTote<T>::~MaryPoppinsTote(){
  if(tote){
    delete(tote);
    }
  }

//Place takes a item and places it into the tote
template <class T> void MaryPoppinsTote<T>::place(T item){
    if((*this).size == 0){
      tote[0] = item;
    }
    else{
      (*this).size += 1;
      tote[((*this).size)] = item;
    }

  }





template <class T> int MaryPoppinsTote<T>::search(T item){
  int count = 0;
   for(int i = 0; i< (*this).size; i++ ){
       if(item == tote[i]){
         count = count +1;
       }

     }
     return count;

  }
// Randomly searches the tote array, if there are no items within tote throw exception
template <class T> T MaryPoppinsTote<T>::reach(){
  int randoItem = rand() % (*this).size;
  return(tote[randoItem]);


}

//weird issues with the operator. Not sure how to fix.

/*template<class T> MaryPoppinsTote& MaryPoppinsTote<T>::operator=(const MaryPoppinsTote & other){
  if(other >= 0 && other < toteSize){
            return tote[other];
        }
        else{
            throw(1);
        }
    }*/
