#include "Student.h"
static const string school = "CCNY";
namespace container {

	 Student :: Student (string first, string last){
		 this->firstname = first;
		 this->lastname  = last;
	}
	 void Student :: setage (int old){
	   	 this->age = old;
	 }
	 string Student:: toString ()const {
	

		 return "FIRST:" + firstname + " LAST:" + lastname;
	 }




}
