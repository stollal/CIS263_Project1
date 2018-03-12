#ifndef __H__AUDS__
#define __H__AUDS__
#include<string>
#include<iostream>
#include<cstdlib>
#include<stack>

template <typename T>
class AUDS{
public:
/**
* Constructor with no parameters
*/
 AUDS(){
     currentSize=0;
     maxSize=0;
     data = new T[maxSize];
 }
/**
* Copy constructor
*/
 AUDS(const AUDS&other):auds{nullptr}{
   auds = clone(other.auds);
 }
/**
*
*/
 AUDS(AUDS && other):auds{other.auds}{
   other.auds = nullptr;
 }
/**
*Deconstructor
*/
 ~AUDS(){
   delete[] data;
 }
/**
*Copy constructor
*/
 AUDS& operator=( const AUDS& other){
   AUDS copy = other;
std::swap(*this, copy);
   return *this;
 }
/**
*Swap Constructor
*/
 AUDS& operator=(AUDS && other){
   std::swap(other, other.auds);
   return *this;
 }
/**
*finds the size of the array and adds more when needed
*/
 int size(){
     return currentSize;
 }
/**
*Adds elements to the data structure
*/
 void push(T x){
  // See if we space to add this element
  // If not, resize the array (by create an new one
  // that is bigger, copy old elements in, delete[] old
  // pointer, set old pointer = new pointer)
  //
  // Then insert and increment currentSize.
	int i=0; 
	if( i< currentSize){
	for(i;  i < currentSize; i++){
		i.push();
	}
	}
	else{
		T* x = new T[maxSize];
		
		T* newX = new T*[maxSize * 1.5];
		for(i; i < maxSize; i++){
			newX[i] = x[i];
		}
		delete[] x;
		x = newX;
	}
 }
/**
*Removes item from data structure
*/

 T pop(){
     // Pick a random between 0 and currentSize
     // Create a new T (not T*) set it equal to the
     // random element in the array
     // Copy the last element into this now empty spot
     // decrement currentSie
     // return the new T
	int num = rand() % currentSize;
	T* data = new T[*randElem];
	randElem[num].pop();
	currentSize--;
	return randElem;	
	
 }

private:
 T* randElem;
 int currentSize;
 int maxSize;
 T* data;
 int rand();
};
#endif
