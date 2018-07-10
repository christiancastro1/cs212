#include "Bag.h"
#include "Student.h"
#include <iostream>
#include<cassert>
using namespace std;


namespace container {
     	Bag::Bag (){
		count = 0;
		}
		void Bag:: erase(int key){

		int position = findposition (keyarray,key);
	    shiftdown(keyarray,position);
		shiftdown(value,position);
	    count--;    // one less element 
		}

		void Bag:: insert(const int key, const Student val){ // insert the key and value in a sorted way. 
    	// we will first insert in to the key array then value
		assert (size () <= MAXIMUM);
        int position = 0 ;

      	position = findposition (keyarray,key);

		if (key == keyarray[position]){
			value[position] = val;
		}
		else {
    	shiftup (keyarray,position);     
    	keyarray[position] = key;
		// now shiftup the value array 
		shiftup (value,position);
		value[position] = val;
		count++;}
		
		}
        void Bag:: view(int key){ // will print the information 
        int min = 0;
	    int max = count-1;
     	int mid = 0;              // will search the key array for the correct index.

    	while (min  <= max){
		mid = (min + max)/2;

		if (key == keyarray[mid]){
			min = mid;
            break ;}
		else if (key >keyarray[mid]) min = mid +1;
		else if (key <keyarray[mid]) max = mid -1;
		}
        
		if (max < min ){
			cout << "THE KEY IS NOT IN THE BAG!\n"; 
		}
		else {
			cout << "ID:" <<key << "\nSTUDENT: " << value[min].printfirst() <<" "<< value[min].printlast()<<endl;
		}
}
		bool Bag:: isempty(){
    	bool empty = true;
		if(count == 0) empty = false;

	    return empty; 
		}

		void Bag:: print (){

			for (size_t i = 0; i < count ; i++) {
        	cout << "ID:" <<keyarray[i] << "\nSTUDENT: " << value[i].printfirst() <<" "<< value[i].printlast()<<endl;
			cout <<"\n";
			}
		}

		void Bag:: shiftup( int *array, const int index){   // for key array thats an int 

		size_t used = count;   // number of elements in the array 
		size_t target_index = index;
		int temp = used-1;

		while (target_index < used){
			array[count] = array[temp];
			used--;
			temp--;
		}

		}
		void Bag:: shiftdown(int *array,int index){                // for key array thats an int 
        	while (size_t(index) < count){
	        	array[index] = array[index+1];
	            index++;
		}
		}
    	void Bag:: shiftup( Student *array, const int index){          // for Student array thats Student type
 
		size_t used = count;   // number of elements in the array 
		size_t target_index = index;
		int temp = used-1;

		while (target_index < used){
			array[count] = array[temp];
			used--;
			temp--;
		}

		}
		void Bag:: shiftdown (Student *array,int index){
		while (size_t(index) < count){
	        array[index] = array[index+1];
	        index++;
		}
		}
        int Bag ::findposition (int *array, const int number){

	    int min = 0;
	    int max = count-1;
     	int mid = 0;
    	while (min  <= max){
		mid = (min + max)/2;

		if (number == array[mid]){
			min = mid;
			return min;}
		else if (number > array[mid]) min = mid +1;
		else if (number < array[mid]) max = mid -1;
	}
    	return min;
}
	
}
