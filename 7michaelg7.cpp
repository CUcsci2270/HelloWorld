#include <iostream>
using namespace std;

void isPrime(int number)
{
    /*if(number % 2 == 0)
    {
        cout << "No" << endl;
    }*/
    bool isPrime = true;
    for(int i = 2; i < number; i++)
    {
        if(number % i == 0)
            isPrime = false;
            break;
    }
    if(isPrime)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }

/*
    else
    {
        cout << "Yes" << endl;
    }
*/
}

int main()
{
    int asdf;
    for(int i = 0; i < 150; i++)
    {
        cout << i << " : Not Prime" << endl;
        //isPrime(i);
    }
}
