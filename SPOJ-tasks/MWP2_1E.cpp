// MWP2_1E - Szpieg

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void lexicographicSortingWords(vector<string> &words) {
    sort(words.begin(),words.end());
}
void displayWords(vector<string> words) {

    int quantityOfWords = words.size();

    for(int i = 0; i < quantityOfWords; i++) {
        cout << words[i] << endl;
    }
}

int main() {

    vector<string> words;
    string word;

    while(getline(cin, word) && !word.empty()) {
        words.push_back(word);
        cin.clear();
        cin.sync();
    }
    lexicographicSortingWords(words);
    displayWords(words);

    return 0;
}
