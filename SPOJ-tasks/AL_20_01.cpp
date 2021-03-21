// AL_20_01 - Alfabet Morse'a

#include <iostream>
#include <algorithm>
#include <map>
#include <locale>

using namespace std;

map<char, string> codeMorsea;
map<char, string>::iterator iter;

void setMap() {
    codeMorsea['a'] = ".-";
    codeMorsea['b'] = "-...";
    codeMorsea['c'] = "-.-.";
    codeMorsea['d'] = "-..";
    codeMorsea['e'] = ".";
    codeMorsea['f'] = ".-..";
    codeMorsea['g'] = "--.";
    codeMorsea['h'] = "....";
    codeMorsea['i'] = "..";
    codeMorsea['j'] = ".---";
    codeMorsea['k'] = "-.-";
    codeMorsea['l'] = "..-.";
    codeMorsea['m'] = "--";
    codeMorsea['n'] = "-.";
    codeMorsea['o'] = "---";
    codeMorsea['p'] = ".--.";
    codeMorsea['q'] = "--.-";
    codeMorsea['r'] = ".-.";
    codeMorsea['s'] = "...";
    codeMorsea['t'] = "-";
    codeMorsea['u'] = "..-";
    codeMorsea['v'] = "...-";
    codeMorsea['w'] = ".--";
    codeMorsea['x'] = "-..-";
    codeMorsea['y'] = "-.--";
    codeMorsea['z'] = "--..";
    codeMorsea[' '] = "";
}

string convertLettersToLowercase(string str) {
    locale loc;
    string outcome;
    for (string::size_type i = 0; i < str.size(); ++i)
        outcome += tolower(str[i],loc);
    return outcome;
}

string encode( string textToEncode ) {
    char slash = '/';
    string result;
    int textLength = textToEncode.size();
    for ( int i = 0; i < textLength; i++ ) {
        map<char, string>::iterator iter = codeMorsea.find( textToEncode[i] );
        if ( iter != codeMorsea.end() ) result += iter->second + slash;

    }
    return result;
}

int main() {

    string line;
    setMap();
    while(getline( cin, line )) {
        string afterChange = convertLettersToLowercase( line );
        cout << encode( afterChange ) << endl;
    }
    return 0;
}
