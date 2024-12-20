#include <iostream>
using namespace std;

const int row = 10, col = 10;
char MyBattleShips[row][col];
char opponentBattleShips[row][col];

void printMyBattleShips()
{
    cout << "      " << "MY BATTLESHIPS" << "   " << endl;

    for (int i = 0; i < col; i++)
    {
        MyBattleShips[0][i + 1] = i + '1';
    }

    int num = 65;
    for (int i = 1; i < row; i++)
    {
        MyBattleShips[i][0] = char(num++);
    }

    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            MyBattleShips[i][j] = '-';
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << MyBattleShips[i][j] << "   ";
        }
        cout << endl << endl;
    }
}

void printOpponentBattleship()
{
    cout << "      " << "OPPONENTS BATTLESHIPS" << "   " << endl;

    for (int i = 0; i < col; i++)
    {
        opponentBattleShips[0][i + 1] = i + '1';
    }

    int num = 65;
    for (int i = 1; i < row; i++)
    {
        opponentBattleShips[i][0] = char(num++);
    }

    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            opponentBattleShips[i][j] = '-';
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << opponentBattleShips[i][j] << "   ";
        }
        cout << endl << endl;
    }
}




void enterAircraftCarrier()
{
    int x, y = 0;
    char char_y;
    cout << "COORDINATES FOR AIRCRAFT CARRIER: " << endl;
    for (int i = 0; i < 5; i++) 
    {
        int x = 0;
        char y;

        cout << "Enter x-coordinate (1 to 10): ";
        cin >> x;

        cout << "Enter y-coordinate (A to J): ";
        cin >> y;

        int yIndex = y - 'A' + 1;  // 'A' -> 1, 'B' -> 2, ..., 'J' -> 10
        
        
        if (x >= 1 && x <= 10 && yIndex >= 1 && yIndex <= 10) 
        {
            MyBattleShips[yIndex][x] = 'A';  
        } else 
        {
            cout << "Invalid coordinates, please enter again!" << endl;
            i--;  
        }
    }

    
    cout << "AIRCRAFT CARRIER ADDED" << endl;
    cout << endl;
}

void enterBattleship()
{
    int x, y = 0;
    char char_y;
    cout << "COORDINATES FOR BATTLESHIP: " << endl;
    for (int i = 0; i < 4; i++) 
    {
        int x = 0;
        char y;

        cout << "Enter x-coordinate (1 to 10): ";
        cin >> x;

        cout << "Enter y-coordinate (A to J): ";
        cin >> y;

        int yIndex = y - 'A' + 1;  // 'A' -> 1, 'B' -> 2, ..., 'J' -> 10
        
        
        if (x >= 1 && x <= 10 && yIndex >= 1 && yIndex <= 10) 
        {
            MyBattleShips[yIndex][x] = 'B';  
        } else 
        {
            cout << "Invalid coordinates, please enter again!" << endl;
            i--;  
        }
    }

    
    cout << "BATTLESHIP ADDED" << endl;
    cout << endl;
}

void enterSubmarine()
{
    int x, y = 0;
    char char_y;
    cout << "COORDINATES FOR SUBMARINE: " << endl;
    for (int i = 0; i < 3; i++) 
    {
        int x = 0;
        char y;

        cout << "Enter x-coordinate (1 to 10): ";
        cin >> x;

        cout << "Enter y-coordinate (A to J): ";
        cin >> y;

        int yIndex = y - 'A' + 1;  // 'A' -> 1, 'B' -> 2, ..., 'J' -> 10
        
        
        if (x >= 1 && x <= 10 && yIndex >= 1 && yIndex <= 10) 
        {
            MyBattleShips[yIndex][x] = 'S';  
        } else 
        {
            cout << "Invalid coordinates, please enter again!" << endl;
            i--;  
        }
    }

    
    cout << "SUBMARINE ADDED" << endl;
    cout << endl;
}

void enterCruiser()
{
    int x, y = 0;
    char char_y;
    cout << "COORDINATES FOR CRUISER: " << endl;
    for (int i = 0; i < 3; i++) 
    {
        int x = 0;
        char y;

        cout << "Enter x-coordinate (1 to 10): ";
        cin >> x;

        cout << "Enter y-coordinate (A to J): ";
        cin >> y;

        int yIndex = y - 'A' + 1;  // 'A' -> 1, 'B' -> 2, ..., 'J' -> 10
        
        
        if (x >= 1 && x <= 10 && yIndex >= 1 && yIndex <= 10) 
        {
            MyBattleShips[yIndex][x] = 'C';  
        } else 
        {
            cout << "Invalid coordinates, please enter again!" << endl;
            i--;  
        }
    }

    
    cout << "CRUISER ADDED" << endl;
    cout << endl;
}

void enterDestroyer()
{
    int x, y = 0;
    char char_y;
    cout << "COORDINATES FOR Destroyer: " << endl;
    for (int i = 0; i < 2; i++) 
    {
        int x = 0;
        char y;

        cout << "Enter x-coordinate (1 to 10): ";
        cin >> x;

        cout << "Enter y-coordinate (A to J): ";
        cin >> y;

        int yIndex = y - 'A' + 1;  // 'A' -> 1, 'B' -> 2, ..., 'J' -> 10
        
        
        if (x >= 1 && x <= 10 && yIndex >= 1 && yIndex <= 10) 
        {
            MyBattleShips[yIndex][x] = 'D';  
        } else 
        {
            cout << "Invalid coordinates, please enter again!" << endl;
            i--;  
        }
    }

    
    cout << "DESTROYER ADDED" << endl;
    cout << endl;
}


int main()
{
    printMyBattleShips();
    printOpponentBattleship();
    enterAircraftCarrier();
    enterBattleship();
    enterSubmarine();
    enterCruiser();
    enterDestroyer();
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << MyBattleShips[i][j] << "   ";
        }
        cout << endl << endl;
    }


    

}
