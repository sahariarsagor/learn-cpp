#include<iostream>
using namespace std;
int main()
{
    //declaring constant: 
    const int myNumber = 50; // you cannot change the value of this variable. 
    int myAnotherNumber = 20; //you can change this value cause its normal. 
    //changing value: 
    myAnotherNumber = 21;
    cout << myAnotherNumber << "\n"; // print 21 cause its not constant we can change the value; 

    cout << myNumber;
    return 0;
}