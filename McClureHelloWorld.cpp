#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

void ConvertToBinary(int n)
{
    if (n / 2 != 0) {
        ConvertToBinary(n / 2);
    }
    cout << n % 2;
}

void DecimalToHex(int n)
{
    stringstream ss;
    ss << hex << n;
    string res (ss.str() );

    cout << res;
}

int main()
{
    for(int i = 1; i < 128; i++)
    {
        char ascii = static_cast<char>(i);
        cout << "Decimal: " << i << " Binary: ";
        ConvertToBinary(i);
        cout << " Ascii: " << ascii << " Hex: ";
        DecimalToHex(i);
        cout << endl;
    }
    return 0;
}
