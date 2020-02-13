#include "Quiz1.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    //if(argc > 1){
    //    string test = argv[1];
    //}

    string test = "";
    //string test = argv[1];

    //cout << "please enter a string" << endl;
    //cin >> test;

    //Quiz1 q; //stored on the stack
    Quiz1 *q = new Quiz1(); //stored on the heap

    cout << "number of command line arguments:" << argc <<endl;
    cout << "the number of vowels in" << test << " is: " << q->countVowels(test) << endl;

    cout << "program exited successfully" << endl;

    delete q;
    //else{
    //    cout << "Invalid Usage: please "
    //}


    return 0;
}