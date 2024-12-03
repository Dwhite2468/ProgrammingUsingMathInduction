#include<string>

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
     * modification to factorial(n), therefore it is also decidable.
     */
    return factToFind * factorial(factToFind - 1);
}

int main(int argc, string argv[])
{
    int factToFind = argv[1];
    cout << factorial(factToFind);
    cout << endl;
    return 0;
}
