#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]){
cout << "Hello world" <<endl;
cout << argc <<endl;
cout << argv[0] <<endl;

for(int i=0; i < argc; i++) {

cout << argv[i] << endl;
}
return 0;
}

