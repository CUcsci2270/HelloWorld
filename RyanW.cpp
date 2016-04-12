using namespace std;

#include <string>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <stdlib.h>

struct Item{
	string type;
	string status;
	int price;
};

int whatsLeft(Item array[]){
	int x = 0;
	for(int i = 0; i < 100; i++){
		if(array[i].status == "for sale"){
			cout<<array[i].type<<", "<<"for sale"<<", "<<array[i].price<<endl;
		}
	}
	for(int j = 0; j < 100; j++){
		if(array[j].status == "wanted"){
			cout<< array[j].type<<", "<<"wanted"<<", "<<array[j].price<<endl;
		}
	}
	//cout<<"X is"<<x<<endl;
	return x;
}

int main(int argc,char* argv[]){

	string fileName = (argv[1]);
	int itemsSold = 0;
	int iterations;
	Item finalArray[100];
	Item tempArray[100];
	int itemsLeft = 0;
	ifstream inFile;
	string fullLine;
	inFile.open(argv[1]);      //Fix This
 	if(inFile.good()){
		//cout<<"Opened successfully"<<endl;
		string result[3];
		string delimiter = ", ";
		int subLength;
		int numb;
		int i = 0;
		while(getline(inFile, fullLine)){

			subLength = fullLine.find(delimiter);
			result[0] = fullLine.substr(0, subLength);
			fullLine = fullLine.substr(subLength + delimiter.size(), fullLine.size());

			subLength = fullLine.find(delimiter);
			result[1] = fullLine.substr(0,subLength);
			fullLine = fullLine.substr(subLength + delimiter.size(), fullLine.size());

			numb = stoi(fullLine);

			tempArray[i].type = result[0];
			tempArray[i].status = result[1];
			tempArray[i].price = numb;

			i++;
			iterations++;

		}
		itemsLeft = i;
		int x = 0;
		for ( int j = 0; j < i; j++){
			//iterations++;
			for ( int k = j+1; k < i; k++){
				iterations++;
				if(j != k){
					if(tempArray[j].type == tempArray[k].type){
						//iterations++;
						if(tempArray[j].status != tempArray[k].status){
							//iterations++;
							if(tempArray[j].status == "for sale"){
								if(tempArray[j].price <= tempArray[k].price){
									cout<<tempArray[j].type<<" "<<tempArray[j].price<<endl;
									itemsLeft = itemsLeft-2;
									itemsSold++;
									iterations++;
									finalArray[x].type = tempArray[j].type;
									finalArray[x].status = tempArray[j].status;
									finalArray[x].price = tempArray[j].price;
									tempArray[j].type = "";
									tempArray[j].status = "";
									tempArray[j].price = 0;
									tempArray[k].type = "";									
									tempArray[k].status = "";									
									tempArray[k].price = 0;									
									
									/*for (int x = j; x < i-1; x++){
										itemArray[x] = itemArray[x+1];
										iterations++;
									}
									for (int y = k; y < i-1; y++){
										itemArray[y] = itemArray[y+1];
										iterations++;
									}*/
								}
							}else{
								if(tempArray[j].price >= tempArray[k].price){
									cout<<tempArray[k].type<<" "<<tempArray[k].price<<endl;
									itemsLeft = itemsLeft-2;
									itemsSold++;
									iterations++;
									finalArray[x].type = tempArray[j].type;
									finalArray[x].status = tempArray[j].status;
									finalArray[x].price = tempArray[k].price;
									tempArray[j].type = "";
									tempArray[j].status = "";
									tempArray[j].price = 0;
									tempArray[k].type = "";									
									tempArray[k].status = "";									
									tempArray[k].price = 0;
									
									
									
									/*for (int x = j; x < i-1; x++){
										itemArray[x] = itemArray[x+1];
										iterations++;
									}
									for (int y = k; y < i-1; y++){
										itemArray[y] = itemArray[y+1];
										iterations++;
									}*/
								}	
							}	
						}
					}
				}
			}
		}
		cout<<"#"<<endl;
		iterations += whatsLeft(tempArray);
		cout<<"#"<<endl;
		cout<<"loop iterations:"<<iterations<<endl;
	}else{
		cout<<"File could not be opened"<<endl;
	}
	 //cout << itemsLeft << endl;
	 //cout << itemsSold << endl;


	inFile.close();

	return 0;
}
