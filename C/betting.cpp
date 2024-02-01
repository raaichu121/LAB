#include <iostream>
#include <string>                      // Needed to use strings
#include <cstdlib>                     // Needed to use random numbers
#include <ctime>
using namespace std;

void drawLine(int n, char symbol);
void rules();

int main()
{
    string playerName;
    int amount;                                                // hold player's balance amount
    int bettingAmount;
    int guess;
    int dice;                                                  // hold computer generated number
    char choice;

    srand(time(0));                                            // "Seed" the random generator

    drawLine(50,'_');
    cout << "\n\n\t\tCASINO GAME\n";
    drawLine(50,'_');

    cout << "\n\nEnter Your Name : ";
    getline(cin, playerName);

    cout << "\nHow much chips you want exchange. $";
    cin >> amount;

    do
    {
        rules();
        cout << "\nYour current balance is $: " << amount ;

        do                                                     // Get player's betting amount
        {
            cout <<"\nHow many chips would you like to bet?$ ";
            cin >> bettingAmount;
        }while(bettingAmount > amount);

       
        do                                                     // Get player's numbers
        {
            cout << "\nGuess the face 1.diamond, 2.heart, 3.spade, 4.club, 5.flag & 6.Burja:\n";
            cin >> guess;
            if(guess <= 0 || guess > 6)
                cout << "\nPlease check the number!! should be between 1 to 6"
                    <<"Re-enter data";
        }while(guess <= 0 || guess > 6);

        dice = rand()%6 + 1;                                    // Will hold the randomly generated integer between 1 and 6
       
        if(dice == guess)
        {
            cout << "\nGood Luck!! You won Chips" << bettingAmount * 5;
            amount = amount + bettingAmount * 5;
        }
        else
        {
            cout << "\nBad Luck this time !! You lost $ "<< bettingAmount ;
            amount = amount - bettingAmount;
        }

        cout << "\nThe winning number was : " << dice ;
        cout <<"\nYou have $  " << amount ;
        if(amount == 0)
        {
            cout << "\nYou have no money to play ";
            break;
        }
        cout << "\n\n-<Do you want to play again (y/n)? ";
        cin >> choice;
    }while(choice =='Y'|| choice=='y');

    cout << "\n";
    drawLine(60,'=');
    cout << "\nThanks for playing game. Your balance amount is $ " << amount ;
    cout << "\n";
    drawLine(60,'=');
    return 0;

}
void drawLine(int n, char symbol)
{
    for(int i=0; i<n; i++)
        cout << symbol;
}
void rules()
{
    system("cls");
    drawLine(60,'-');
    cout << "\n\t\tRULES OF THE GAME\n";
    drawLine(60,'-');
    cout << "\n1. Choose any number between 1 to 6.";
    cout << "\n2. If you win you will get 10 times of money you bet.";
    cout << "\n3. If you bet on wrong number you will lose your betting amount.\n";
    drawLine(60,'-');
    cout << "\n";
}
