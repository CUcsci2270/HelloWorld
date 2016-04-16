#include <iostream>
#include <fstream>

using namespace std; 

int main(int argc, char*argv[])
{
  ifstream inFile;
  inFile.open(argv[1]);
  string data;
  while(getline(inFile, data,'\n')){
    cout << data << endl;
  }

	cout << "Hello World!" << endl;

	return 0;
}
