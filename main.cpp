/*
* Ernest Ho
* Asks user to input the number of times he/she will flip coin.
* Program will tell you the percentage of times it hit head (it is random)
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double percentHeads(int times) {
    int i = 0;
    int head = 0;
    srand(4444);
    
    for (i = 1; i <= times; ++i) {
        if (rand()%2 == 0) {
            ++head;
        }
    }
    return((head*100.0)/times);
}

int main() {

int numToss;
double headsResult;

cout << "Enter the number of times you want to toss the coin: " << endl;
cin >> numToss;
headsResult = percentHeads(numToss);
cout << "Heads came up " << headsResult << "% of the time." << endl;
    
    
    
    
    return 0;
}