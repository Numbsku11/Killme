#include <iostream>
#include <cwchar>
#include <windows.h>
using namespace std;

// used for the switch to select into a section
int choice;

int implosion()
{

    char op;
    float num1, num2;

    cout << "Calculator\n";


    do
    {

        op -= op;
        num1 -= num1;
        num2 -= num2;

        cout << "Enter operator: +, -, *, /: \n\n";
        cin >> op;

        cout << "Enter two operands: \n\n";
        cin >> num1 >> num2;

        switch(op)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct\n\n";
            break;
        }
    }
    while(choice == 1);

    return 0;
}

int explosion()
{
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;                   // Width of each character in the font
    cfi.dwFontSize.Y = 24;                  // Height
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_NORMAL;
    std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
    int inf = 1;

    while(inf == 1)
    {
        cout << "░░░░░▄▄▄▄▀▀▀▀▀▀▀▀▄▄▄▄▄▄░░░░░░░\n"
             << "░░░░░█░░░░▒▒▒▒▒▒▒▒▒▒▒▒░░▀▀▄░░░░\n"
             << "░░░░█░░░▒▒▒▒▒▒░░░░░░░░▒▒▒░░█░░░ \n"
             << "░░░█░░░░░░▄██▀▄▄░░░░░▄▄▄░░░░█░░ \n"
             << "░▄▀▒▄▄▄▒░█▀▀▀▀▄▄█░░░██▄▄█░░░░█░ \n"
             << "█░▒█▒▄░▀▄▄▄▀░░░░░░░░█░░░▒▒▒▒▒░█ \n"
             << "█░▒█░█▀▄▄░░░░░█▀░░░░▀▄░░▄▀▀▀▄▒█ \n"
             << "░█░▀▄░█▄░█▀▄▄░▀░▀▀░▄▄▀░░░░█░░█░ \n"
             << "░░█░░░▀▄▀█▄▄░█▀▀▀▄▄▄▄▀▀█▀██░█░░ \n"
             << "░░░█░░░░██░░▀█▄▄▄█▄▄█▄████░█░░░ \n"
             << "░░░░█░░░░▀▀▄░█░░░█░█▀██████░█░░ \n"
             << "░░░░░▀▄░░░░░▀▀▄▄▄█▄█▄█▄█▄▀░░█░░ \n"
             << "░░░░░░░▀▄▄░▒▒▒▒░░░░░░░░░░▒░░░█░ \n"
             << "░░░░░░░░░░▀▀▄▄░▒▒▒▒▒▒▒▒▒▒░░░░█░ \n"
             << "░░░░░░░░░░░░░░▀▄▄▄▄▄▄▄▄▄▄▄▄▄▄█░ \n";
    }

    return 0;
}

int main()
{

    cout << "So running this program has just fucked you\n"
         << "Make your choices\n"
         << "1. Implosion\n"
         << "2. Explosion\n"
         << endl;

    do
    {
        cin >> choice;
        cout << endl;

        switch(choice)
        {
        case 1:
            cout << "Running Implosion"
                 << "\n"
                 << "\n";
            implosion();
            break;

        case 2:
            cout << "Running Explosion"
                 << "\n"
                 << "\n";
            explosion();
            break;

        default:
            cout << "How the fuck do you fuck up typing either 1 or 2\n"
                 << "What choices in the human genome made you, you are the perfect example for the need of a life guard for the gene pool\n"
                 << "Fuck me, you would think that this is so easy a chimp could do it like monkeys locked in a room with a typewriter would make shakespeare \n"
                 << "But you of all special worlds fuck up one task\n"
                 << "So lets try this again"
                 << endl << endl;
        }
    }
    while(choice > 0);

    return 0;
}
