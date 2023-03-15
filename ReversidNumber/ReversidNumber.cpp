#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message) {

    int Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

void PrintDigitnNumbers(int Number) {
    int Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}

int SumDigit(int Number) {
    int Sum = 0;
    int Remainder = 0;

    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        Sum = Sum + Remainder;
    }
    return Sum;
}

int ReversidNumber(int Number) {
    int Number2 = 0, Reversid = 0;
    while (Number > 0) {
        Reversid = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Reversid;
    }
    return Number2;
}

int main() {
    cout << ReversidNumber(ReadPositiveNumber("Please Enter Positive Number ?")) << endl;

    //PrintDigitnNumbers(A);
      
    return 0;
}