#include <iostream>
using namespace std;

string player1;
string player2;
char play1;
char play2;
int loop = 1;
char num[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void frame();
void chance_of_player1();
void chance_of_player2();
int result_for_player1();
int result_for_player2();

int main()
{
    system("CLS");
    cout << "\t\t"
         << " TIC TAC TOO "
         << "\n";
    cout << "Enter the name of the first player(X) -> ";
    cin >> player1;
    cout << "\n";
    cout << "Enter the name of the second player(O) -> ";
    cin >> player2;
    system("CLS");
    frame();

    for (int i = 1; i <= 9; i++)
    {
        if (loop == 1)
        {
            chance_of_player1();
            chance_of_player2();
        }
    }
}
void frame()
{
    cout << "\t\t"<< " TIC TAC TOO "<< "\n";
    cout << "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "\n";
    cout << "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "\n";
    cout << "                     "<<num[1]<<"                    "<< "|"<< "                     "<<num[2]<<"                    "<< "|"<< "                     "<<num[3]<<"                    "<< "\n";
   cout << "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "\n";
    cout << "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "\n";
    cout << "---------------------------------------------------------------------------------------------------------------------------"<< "\n";
    cout << "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "\n";
    cout << "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "\n";
    cout << "                     "<<num[4]<<"                    "<< "|"<< "                     "<<num[5]<<"                    "<< "|"<< "                     "<<num[6]<<"                    "<< "\n";
   cout << "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "\n";
    cout << "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "\n";
    cout << "---------------------------------------------------------------------------------------------------------------------------"<< "\n";
   cout << "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "\n";
    cout << "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "\n";
    cout << "                     "<<num[7]<<"                    "<< "|"<< "                     "<<num[8]<<"                    "<< "|"<< "                     "<<num[9]<<"                    "<< "\n";
   cout << "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "\n";
    cout << "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "|"<< "                     "<<"                     "<< "\n";
}
void chance_of_player1()
{
    cout << player1 << " Turn(X) : ";
    cin >> play1;
    result_for_player1();
}
void chance_of_player2()
{
    cout << player2 << " Turn(O) : ";
    cin >> play2;
    result_for_player2();
}

int result_for_player1()
{
    if (play1 == '1' && num[1] == '1')
    {
        num[1] = 'X';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player1 << "WIN"
                 << "\t\t\t";
            loop = 2;

            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play1 == '2' && num[2] == '2')
    {
        num[2] = 'X';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player1 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play1 == '3' && num[3] == '3')
    {
        num[3] = 'X';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player1 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play1 == '4' && num[4] == '4')
    {
        num[4] = 'X';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player1 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play1 == '5' && num[5] == '5')
    {
        num[5] = 'X';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player1 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play1 == '6' && num[6] == '6')
    {
        num[6] = 'X';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player1 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play1 == '7' && num[7] == '7')
    {
        num[7] = 'X';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player1 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play1 == '8' && num[8] == '8')
    {
        num[8] = 'X';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player1 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play1 == '9' && num[9] == '9')
    {
        num[9] = 'X';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player1 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else
    {
        cout << "Invalid input";
        cin.ignore();
        cin.get();
    }
}

int result_for_player2()
{
    if (play2 == '1' && num[1] == '1')
    {
        num[1] = 'O';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player2 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play2 == '2' && num[2] == '2')
    {
        num[2] = 'O';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player2 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play2 == '3' && num[3] == '3')
    {
        num[3] = 'O';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player2 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play2 == '4' && num[4] == '4')
    {
        num[4] = 'O';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player2 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play2 == '5' && num[5] == '5')
    {
        num[5] = 'O';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player2 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play2 == '6' && num[6] == '6')
    {
        num[6] = 'O';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player2 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play2 == '7' && num[7] == '7')
    {
        num[7] = 'O';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player2 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play2 == '8' && num[8] == '8')
    {
        num[8] = 'O';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player2 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else if (play2 == '9' && num[9] == '9')
    {
        num[9] = 'O';
        system("CLS");
        frame();
        if (num[1] == num[2] && num[2] == num[3] || num[3] == num[6] && num[6] == num[9] || num[9] == num[8] && num[8] == num[7] || num[7] == num[4] && num[4] == num[1] || num[2] == num[5] && num[5] == num[8] || num[4] == num[5] && num[5] == num[6] || num[3] == num[5] && num[5] == num[7] || num[1] == num[5] && num[5] == num[9])
        {
            cout << player2 << "WIN"
                 << "\t\t\t";
            loop = 2;
            cout << "If you want to play again click the up key and then click the enter button.";
        }
    }
    else
    {
        cout << "Invalid input";
        cin.ignore();
        cin.get();
    }
}
