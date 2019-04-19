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
    int b=0;

    cout<<"I have a number between 1 and 1000.\n";
    cout<<"Can you guess my number?\n";
    cout<<"Please type you first guess.\n";

    a=guessNumber(a);

    for(unsigned int i=1;i<=500;b++,i++)
    {
        cin>>number;

        if (a<number)
            cout<<"Too high. Try again.\n";
        else if(a>number)
            cout<<"Too low. Try again.\n";
        else if(a==number)
        {
            cout<<"Excellent! You guessed the number!\nWould you like to play again (y or n)?\n";
            break;
        }
    }

    if(b==10)
        cout<<"\nAhah!You know the secret!";
    else if(b<10)
        cout<<"\nEither you know the secret or you got lucky!";
    else if(b>10)
        cout<<"\nYou should be able to do better!";

}
