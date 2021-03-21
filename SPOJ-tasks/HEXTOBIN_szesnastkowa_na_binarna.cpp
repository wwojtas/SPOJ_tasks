// HEXTOBIN - Szesnastkowa na binarna

#include <iostream>
#include <string>
#include <map>
using namespace std;

map<char, string> hexToBin;

void setMap() {
    hexToBin['0'] = "0000";
    hexToBin['1'] = "0001";
    hexToBin['2'] = "0010";
    hexToBin['3'] = "0011";
    hexToBin['4'] = "0100";
    hexToBin['5'] = "0101";
    hexToBin['6'] = "0110";
    hexToBin['7'] = "0111";
    hexToBin['8'] = "1000";
    hexToBin['9'] = "1001";

    hexToBin['A'] = hexToBin['a'] = "1010";
    hexToBin['B'] = hexToBin['b'] = "1011";
    hexToBin['C'] = hexToBin['c'] = "1100";
    hexToBin['D'] = hexToBin['d'] = "1101";
    hexToBin['E'] = hexToBin['e'] = "1110";
    hexToBin['F'] = hexToBin['f'] = "1111";
}

string encode( string textToEncode ) {

    char space = ' ';
    string result;
    int textLength = textToEncode.size();

    for ( int i = 0; i < textLength; i++ ) {
        map<char, string>::iterator iter = hexToBin.find(textToEncode[i]);
        if ( iter != hexToBin.end() ) result += iter->second + space;
    }
    return result;
}

int main() {
    string line;
    setMap();
    while(getline( cin, line ))
        cout << encode( line ) << endl;
}
