// JSUMRZYM - Dodawanie rzymskie

#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <list>
using namespace std;


const map < int, string > setOfArabicAndRomanNumerals {
    { 1000, "M" }, { 900, "CM" }, { 500, "D" },{ 400, "CD" },{ 100, "C" },{ 90, "XC" },{ 50, "L" },{ 40, "XL" },{ 10, "X" },{ 9, "IX" },{ 5, "V" },{ 4, "IV" },{ 1, "I" }
};

int convertRomanNumeralsToIntegers( string romanNumeral ) {

    int distance = romanNumeral.size();
    int sum = 0, i = 0;
    auto iter = setOfArabicAndRomanNumerals.rbegin();

    while( i < distance ) {
        if( romanNumeral[ i ] == iter->second[ 0 ] && iter -> second.size() == 1 ) {
            sum += iter -> first;
            ++i;
        } else if( i < distance - 1 && romanNumeral.substr( i, 2 ) == ( ++iter ) -> second ) {
            sum += iter -> first;
            i += 2;
            --iter;
        } else if( iter != setOfArabicAndRomanNumerals.rend() ) {
            ++iter;
        }
    }
    return sum;
}

string replaceIntegersToRomanNumerals( int n ) {
    string outcome = "";
    auto iter = setOfArabicAndRomanNumerals.rbegin();

    while( n > 0 ) {
        if( n >= iter -> first ) {
            n -= iter -> first;
            outcome += iter -> second;
        } else if( iter != setOfArabicAndRomanNumerals.rend() )
            ++iter;
    }
    return outcome;
}

int main() {
    string firstRomanNumber, secondRomanNumber;

    while(cin >> firstRomanNumber >> secondRomanNumber) {
        transform( firstRomanNumber.begin(), firstRomanNumber.end(), firstRomanNumber.begin(), []( unsigned char c )->unsigned char { return std::toupper( c ); } );

        transform( secondRomanNumber.begin(), secondRomanNumber.end(), secondRomanNumber.begin(),
                   []( unsigned char c )->unsigned char { return std::toupper( c ); } );
        string result = replaceIntegersToRomanNumerals( convertRomanNumeralsToIntegers( firstRomanNumber ) + convertRomanNumeralsToIntegers( secondRomanNumber ) );

        cout << result << endl;
    }
    return 0;
}
