#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string>

#include "Searching.hpp"
#include "Queue.hpp"

int main()
{
    int exit = 1;
    string c = "NG";
    Queue queue;
    food food;

    while (1)
    {
        cout << "\n\n\n\n\t\t\tMAK NGAH CATERING FOOD ORDERING SYSTEM";
        cout << "\n\n\n\t\t\t\t   = Main Menu =";
        int option;
        cout << "\n\n\n";
        cout << "\n\t\t\t\t>> 1. Search Food" << endl;
        cout << "\n\t\t\t\t>> 2. Make Order" << endl;
        cout << "\n\t\t\t\t>> 3. Remove Order" << endl;
        cout << "\n\t\t\t\t>> 4. Instant Order Preview" << endl;
        cout << "\n\t\t\t\t>> 5. Exit" << endl;
        cout << "\n\n\t\t\t\t";
        cout << "Enter yor choice:"; 
		cin >> option;
        switch (option)
        {
            case 1:
                system("cls");
                food.printArray();
                break;

            case 2:
                system("cls");
                queue.enqueue();
                break;

            case 3:
                system("cls");
                cout << "\n\n\n\t\t\tMAK NGAH CATERING FOOD ORDERING SYSTEM ";
                cout << "\n\n\n\t\t\t\t   = Admin Section =";
                int password;
                cout << "\n\n\n\n\t\tOnly authorized personnel are allowed to enter..";
                cout << "\n\n\t\t >> Please Enter Password: ";
                cin >> password;
                if (password == 123)
                {
                    queue.dequeue();
                }
                else
                {
                    cout << "\n\n\t\tAccess denied";
                    cout << "\n\n\t\t\t\tPress any key to go to main menu...";
                    getch();
                    system("cls");
                }
                break;

            case 4:
                system("cls");
                queue.display();
                break;

            case 5:
                system("cls");
                return 0;
                break;


            default:
                system("cls");
                exit = 0;
                break;
        }
    }
}


