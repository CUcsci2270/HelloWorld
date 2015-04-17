#include <iostream>
#include "functions.h"
#include <fstream>
#include <string>
#include <fstream>

using namespace std;

void printMenu(){
    cout<<"======Menu Menu====="<<endl;
    cout<<"1. Print vertices"<<endl;
    cout<<"2. Find districs"<<endl;
    cout<<"3. Find shortest path"<<endl;
    cout<<"4. Find shortest distance"<<endl;
    cout<<"5. Extra credit"<<endl;
    cout<<"6. Quit"<<endl;
}
void readFileIntoGraph(){
    ifstream in_stream;
    in_stream.open("zombieCities.txt");
    string cityName;
    string adjacentCityL;
    string adjacentCityR;

    getline(in_stream, cityName, ',');


}
void printVertices(){}
void shortestPather(){
    cout<<"Enter a starting city:"<<endl;
    cout<<"Enter an ending city:"<<endl;
    cout<<"One or more cities doesn't exist"<<endl;
    cout<<"No safe path between cities"<<endl;
    cout<<"Please identify the districts before checking distances" <<endl;
}
void extraCredit(){
    cout<<"Enter a starting city:"<<endl;

    cout<<endl;
}
void quit(){
    cout << "Goodbye!" << endl;
}



int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
