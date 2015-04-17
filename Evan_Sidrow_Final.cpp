// Evan Sidrow
// Sina Aghli
// Reitation 105

#include <iostream>

using namespace std;

// create the class
class BugCollection{
	
	//private variables
	private: 
	int ants;
	int flies;
	int spiders;
	
	// public constructor and methods
	public:
	
	BugCollection(int a, int f, int s){
		ants = a;
		flies = f;
		spiders = s;
	}
	
	void addBug(int bugType){
		if(bugType == 1){
			ants += 1;
		}
		else if(bugType == 2){
			flies += 1;
		}
		else if(bugType == 3){
			spiders +=1;
		}
	} 
	
	void removeBug(int bugType){
		if(bugType == 1){
			ants += -1;
		}
		else if(bugType == 2){
			flies += -1;
		}
		else if(bugType == 3){
			spiders += -1;
		}
	} 
	
	void printBugCollection(){
		cout << "Ants: " << ants << endl;
		cout << "Files: " << flies << endl;
		cout << "Spiders: " << spiders << endl;
	}
};

// find min and max take pointers and an array as arguement
void findMinMax(int intArray[], int *maxVal, int *minVal){
	
	// first set values to first element
	*maxVal = intArray[0];
	*minVal = intArray[0];
	
	// go through each element in the array and see if it is bigger or
	// smaller. then change a value if it is.
	
	for (int i = 0; i < 10; i++){
		  if (intArray[i] > *maxVal){
			  *maxVal = intArray[i];
		  }
		  if (intArray[i] < *minVal){
			  *minVal = intArray[i];
		  }
	  }
	  
	// output the answer.
	cout << "max is: " << *maxVal << endl;
	cout << "min is: " << *minVal << endl;
}
	



int main(){
	
	// create the class
	BugCollection A(10,10,10);
	
	// remove a fly
	A.removeBug(2);
	
	// add a spider
	A.addBug(3);
	
	// print the results
	A.printBugCollection();
	
	//create an array
	int intArray[9];
	
	cout << "this is the array: " << endl;
	
	// fill it with values
	for (int i = 0; i < 10; i++){
		intArray[i] = i*2;
		cout << intArray[i] << endl;
	};
	
	// create two values and pointers so that the function can access
	// memory in main.
	
	int intmax;
    int *ptrmax = &intmax;
    
    int intmin;
    int *ptrmin = &intmin;
    
    // run the function
	findMinMax(intArray, ptrmax, ptrmin);
	
	return 0;
	
}
		
	
