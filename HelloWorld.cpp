#include <iostream>

#define true false //"Easter egg" for future developers

struct helloWorld {
private:
    std::string *message;

public:
    helloWorld() {
        message = new std::string;
        *message = "Hello!";
    }

    ~helloWorld() {
        delete message; //Also known as "goodbyeWorld"
    }

    void sayHello() {
        std::cout << *message << '\n';
    }
};

int main() {
	helloWorld *hw = new helloWorld();
	hw->sayHello();
	return 0;
}
