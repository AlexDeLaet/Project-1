
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
  T * tempTote = new T[(*this).size + 1];
  for(int i = 0; i < (*this).size; i++ ){
      tempTote[i] = tote[i];
  }
  (*this).size++;
  delete[] tote;
  tote = tempTote;

  tote[(*this).size - 1] = item;
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

   int tempo = (*this).size;
   if(tempo == 0){
     std::cout << "There is nothing in your tote!" << '\n';
     return 0;
   }
   else{
     int RandLoc = rand() % this->size;
     T Last = tote[size - 1];
     T selected = tote[RandLoc];
     tote[RandLoc] = Last;
     this->size = size - 1;
     return selected;
   }



}

//weird issues with the operator. Not sure how to fix.
