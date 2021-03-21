// FR_02_06 - BMI

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> underweight;
vector<string> correctWeight;
vector<string> overweight;

float calculateBMI(float bodyWeightInKilograms, float growthInCentimeters) {
    growthInCentimeters = growthInCentimeters / 100;
    float bmi = bodyWeightInKilograms / (growthInCentimeters * growthInCentimeters);
    return bmi;
}

void underweightBMI(string name) {
    underweight.push_back(name);
}

void correctWeightBMI(string name) {
    correctWeight.push_back(name);
}

void overweightBMI(string name) {
    overweight.push_back(name);
}

int main() {
    int quantityOfTests;
    cin >> quantityOfTests;

    for (int i = 0; i < quantityOfTests; i++) {
        string name;
        float bodyWeightInKilograms = 0, growthInCentimeters = 0;

        cin >> name >> bodyWeightInKilograms >> growthInCentimeters;

        float bmi = calculateBMI(bodyWeightInKilograms, growthInCentimeters);

        if(bmi < 18.5) underweightBMI(name);

        else if(bmi >= 18.5 && bmi < 25) correctWeightBMI(name);

        else if(bmi >= 25) overweightBMI(name);

    }

    cout << "niedowaga" << endl;
    for (int i = 0; i < underweight.size(); i++) {
        cout << underweight[i] << endl;
    }
    cout << endl;

    cout << "wartosc prawidlowa" << endl;
    for (int i = 0; i < correctWeight.size(); i++) {
        cout << correctWeight[i] << endl;
    }
    cout << endl;

    cout << "nadwaga" << endl;
    for (int i = 0; i < overweight.size(); i++) {
        cout << overweight[i] << endl;
    }


    return 0;
}
