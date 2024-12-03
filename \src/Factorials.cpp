#include<string>
#include<iostream>

using namespace std;

int factorial(int factToFind)
{
    /**
     *  Base case: 0! = 1
     */
    if(factToFind == 0)
    {
         return 1;
    }
    /**
     * Inductive Assumption:  factorial(n - 1) is a decidable function.
     * Inductive Step: n! = n * factorial(n - 1) is an O(1) modification
     * to factorial(n), therefore it is also decidable.
     */
    return factToFind * factorial(factToFind - 1);
}

int main(int argc, char** argv)
{
    char* factToFindStr = argv[1];
    int factToFind = atoi(factToFindStr);
    cout << factorial(factToFind) << endl;
    return 0;
}
