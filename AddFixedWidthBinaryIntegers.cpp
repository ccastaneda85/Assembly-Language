/*
Algorithm for adding fixd-width binary integers of N bits
carry <- 0
for i = 0 to N do
    sum_i <- (x_i + y_i + carry) % 2
    carry <- (x_i + y_i + carry) / 2
end for
*/

#include<iostream>
#include<string>
using namespace std;


int main(int argc, char const *argv[])
{
    //declarations
    int sumBit;
    int carryBit;
    int x_i;
    int y_i;
    string adden1 = "";
    string adden2 = "";
    string sumStr = "";

    //get user input
    cout << "Enter binary adden 1:" ;
    cin >> adden1;
    cout << "Enter binary adden 2:" ;
    cin >> adden2;

    //calculations
    carryBit = 0;
    for (int i = 0; i < adden1.length(); i++) {
        
        //calculate the sumBit
        x_i = stoi(adden1.substr(adden1.length() - i - 1, 1));
        y_i = stoi(adden2.substr(adden2.length() - i - 1, 1));
        sumBit = (x_i + y_i + carryBit) % 2;

        //calculate the carryBit
        x_i = stoi(adden1.substr(adden1.length() - i - 1, 1));
        y_i = stoi(adden2.substr(adden2.length() - i - 1, 1));
        carryBit = (x_i + y_i + carryBit) / 2;

        //put the results iin sumStr

        sumStr = to_string(sumBit) + sumStr;
    }

    //output
    //add a prefix space to later accomodate an addition symbol
    adden1 = " " + adden1;
    adden2 = "+" + adden2;

    cout << adden1 << endl;
    cout << adden2 << endl;

    //if there is a carry, display it, otherwise just add a space

    if(carryBit == 1) {
        sumStr = "1" + sumStr;
    }
    else {
        sumStr = " " + sumStr; // add a prefix space
    }

    //display hyphens as a sum line

    for (int i = 0; i < sumStr.length(); i++) {
        cout << "-";
    }

    cout << endl;

    //the binary answer

    cout << sumStr << endl;


    
    return 0;
}
