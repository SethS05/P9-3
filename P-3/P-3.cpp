/*
* Author: Seth Skinner
* File: P9-3
* Date: 4/3/2025
* 
* Description:program that generates a sequence of 20 random six-sided die tosses, determines whether or not a run 
* is present and prints out this information, and prints all the die values, marking the runs by including them in parentheses
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayRun(int values[], int SIZE);
bool hasRun(int values[], int SIZE);


int main()
{
   
}

void displayRun(int values[], int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        if (values[i] == values[i + 1] && values[i] != values[i - 1]) {
            cout << " (";
        }
        cout << " " << values[i];
        if (values[i] != values[i + 1] && values[i] == values[i - 1]) {
            cout << ") ";
        }
    }
}

bool hasRun(int values[], int SIZE) {
    for (int i = 1; i < SIZE; ++i) {
        if (values[i] == values[i - 1]) {
            return true;
        }
    }
    return false;
}
