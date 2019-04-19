#include <iostream>
#include <cstdlib>

using namespace std;

int guessNumber(int x)
{
    x=(1+rand()%1000);
}
int main()
{
    int number;
    int a;

    cout<<"I have a number between 1 and 1000.\n";
    cout<<"Can you guess my number?\n";
    cout<<"Please type you first guess.\n";

    a=guessNumber(a);

    for(unsigned int i=1;i<=500;i++)
    {
        cin>>number;

        if(a==number)
            cout<<"Excellent! You guessed the number!\nWould you like to play again (y or n)?\n";
        else if (a<number)
            cout<<"Too high. Try again.\n";
        else if (a>number)
            cout<<"Too low. Try again.\n";
    }
}
