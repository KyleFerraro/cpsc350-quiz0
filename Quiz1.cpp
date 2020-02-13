#include "Quiz1.h"

Quiz1::Quiz1()
{

}
Quiz1::~Quiz1()
{
    cout << "object deleted" << endl; //our trash collector
}
int Quiz1::countVowels(string input)
{
    int count = 0; //local variable
    for(int i = 0; i < input.size(); ++i)
    {
        char strInput = tolower(input[i]);
        if(strInput == 'a')
            count++;
        else if(strInput == 'e')
            count++;
        else if(strInput == 'i')
            count++;
        else if(strInput == 'o')
            count++;
        else if(strInput == 'u')
            count++;
    }
    return count;
}