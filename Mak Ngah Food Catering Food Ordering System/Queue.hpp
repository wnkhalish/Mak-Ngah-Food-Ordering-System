#ifndef QUEUE_H
#define QUEUE_H

#define MAX_SIZE 5
using namespace std;

class Queue {
    int arr_queue[MAX_SIZE];
    int rear, front, bill;

    public:
        Queue() {
            rear = 0;
            front = 0;
            bill = 0;
        }
    void enqueue() {
        cout << "\n\n\n\n\t\t     MAK NGAH CATERING FOOD ORDERING SYSTEM";
        cout << "\n\n\n\t\t\t     = Available Food List =";
        int food;
        cout << "\n\n\t\t______________________________________________";
        cout << "\n\t\t| Item No.|    Item Name          |   Price   |";
        cout << "\n\t\t----------------------------------------------";
        cout << "\n\t\t|   1.     | Nasi Goreng Cina      |  RM 4.00  |";
        cout << "\n\t\t----------------------------------------------";
        cout << "\n\t\t|   2.    | Nasi Goreng Pataya    |  RM 4.50  |";
        cout << "\n\t\t----------------------------------------------";
        cout << "\n\t\t|   3.    | Nasi Goreng Tomyam    |  RM 4.50  |";
        cout << "\n\t\t----------------------------------------------";
        cout << "\n\t\t|   4.    | Nasi Goreng Paprik    |  RM 4.50  |";
        cout << "\n\t\t----------------------------------------------";
        cout << "\n\t\t|   5.    | Nasi Goreng Kampung   |  RM 4.00  |";
        cout << "\n\t\t----------------------------------------------";
        cout << "\n\t\t|   6.    | Nasi Goreng Ayam      |  RM 5.00  |";
        cout << "\n\t\t----------------------------------------------";
        cout << "\n\t\t|   7.    | Nasi Goreng Cili Padi |  RM 4.50  |";
        cout << "\n\t\t----------------------------------------------";
        cout << "\n\t\t|   8.    |  Nasi Goreng USA      |  RM 6.00  |";
        cout << "\n\t\t----------------------------------------------";
        cout << "\n\t\t|   9.    |  Nasi Goreng Cendawan |  RM 4.00  |";
        cout << "\n\t\t----------------------------------------------";
        cout << "\n\t\t|  10.    |  Nasi Goreng Seafood  |  RM 5.50  |";
        cout << "\n\t\t______________________________________________";
        cout << "\n\n\t\tJust select the food you want from the list.";
        cout << "\n\n\t\tWe will cook it as simply as you like.";
        cout << "\n\n\t\tPlace your order now...";
        cout << "\n\n\t\t";
        cin >> food;
        if (food < 1 || food > 10) {
            cout << "\n\t\tInvaild order!\n" <<
                "\n\t\tOrder must be item from the list.\n";
            cout << "\n\t\tPlace your order again...";
            cout << "\n\n\t\t";
            cin >> food;
        }
        int order, money, total;

        if (food == 1) {
            system("cls");
            cout << "\n\n\n\n\t\t     MAK NGAH CATERING FOOD ORDERING SYSTEM";
            cout << "\n\n\n\t\t\t     = Order Confirmation =";
            cout << "\n\n\n\tChoice of  food is Nasi Goreng Cina";
            cout << "\n\n\t   >> Enter order quantity: ";
            cin >> order;
            if (order < 1) {
                cout << "\n\tMinimum order quantity is 1";
                cout << "\n\n\t   >> Please enter again: ";
                cin >> order;
            }
            if (rear == MAX_SIZE - 1) {
                cout << "\n\tSorry, restaurant is out of an item!";
                getch();
                system("cls");
            } else {
                cout << "\n\n\t\tYour queue: " << rear + 1 << " , Order quantity: " << order;
                arr_queue[rear++] = order;

                total = 4.00 * order;
                cout << "\n\n\n\tAmount to be paid is RM " << total;
                cout << "\n\n\t   >> Enter the amount of payment, make sure its enough";
                cout << "\n\n\t      RM ";
                cin >> money;
                if (money < total) {
                    cout << "\n\t Inssufficient amount";
                    cout << "\n\n\t   >> Please enter again: RM ";
                    cin >> money;
                }
            }
            cout << "\n\n\t\tTHANKS FOR CHOOSING MAK NGAH FOOD CATERING";
            cout << "\n\n\t\tGENERATING BILL";
            for (int a = 1; a < 8; a++) {
                Sleep(500);
                cout << "...";
            }
            system("cls");
            cout << "\n\t\t==============================================";
            cout << "\n\t\t                MAK NGAH FOOD CATERING        ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tBill No.:" << bill + 1 << "\t\t\tDate:DEC16 '18";
            cout << "\n\t\t----------------------------------------------";
            cout << "\n\t\t" << order << "NG" <<
                "\t\t\t\t\tRM " << total;
            cout << "\n\n\t\t*SUBTOTAL*" <<
                "\t\t\t\tRM " << total;
            cout << "\n\t\tPAYMENT\t\t\t\t\tRM " << money;
            cout << "\n\t\tCHANGE DUE\t\t\t\tRM " << money - total;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    Cashier: Idzham ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tOrder#" << bill + 1;
            bill++;
            cout << "\n\n\t\t\t\tPress any key to go to main menu...";
            getch();
            system("cls");
        } else if (food == 2) {
            system("cls");
            cout << "\n\n\n\n\t\t     MAK NGAH CATERING FOOD ORDERING SYSTEM";
            cout << "\n\n\n\t\t\t     = Order Confirmation =";
            cout << "\n\n\n\tChoice of item is Nasi Goreng Pataya";
            cout << "\n\n\t   >> Enter order quantity: ";
            cin >> order;
            if (order < 1) {
                cout << "\n\tMinimum order quantity is 1";
                cout << "\n\n\t   >> Please enter again: ";
                cin >> order;
            }
            if (rear == MAX_SIZE - 1) {
                cout << "\n\tSorry, restaurant is out of an item!";
                getch();
                system("cls");
            } else {
                cout << "\n\n\t\tYour queue: " << rear + 1 << " , Order quantity: " << order;
                arr_queue[rear++] = order;

                total = 4.50 * order;
                cout << "\n\n\n\tAmount to be paid is RM " << total;
                cout << "\n\n\t   >> Enter the amount of payment, make sure its enough";
                cout << "\n\n\t      RM ";
                cin >> money;
                if (money < total) {
                    cout << "\n\t Inssufficient amount";
                    cout << "\n\n\t   >> Please enter again: RM ";
                    cin >> money;
                }
            }
            cout << "\n\n\t\tTHANKS FOR CHOOSING MAK NGAH FOOD CATERING";
            cout << "\n\n\t\tGENERATING BILL";
            for (int a = 1; a < 8; a++) {
                Sleep(500);
                cout << "...";
            }
            system("cls");
            cout << "\n\t\t==============================================";
            cout << "\n\t\t                MAK NGAH FOOD CATERING        ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tBill No.:" << bill + 1 << "\t\t\tDate:DEC16 '18";
            cout << "\n\t\t----------------------------------------------";
            cout << "\n\t\t" << order << "NG" <<
                "\t\t\t\t\tRM " << total;
            cout << "\n\n\t\t*SUBTOTAL*" <<
                "\t\t\t\tRM " << total;
            cout << "\n\t\tPAYMENT\t\t\t\t\tRM " << money;
            cout << "\n\t\tCHANGE DUE\t\t\t\tRM " << money - total;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    Cashier: Idzham ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tOrder#" << bill + 1;
            bill++;
            cout << "\n\n\t\t\t\tPress any key to go to main menu...";
            getch();
            system("cls");
        } else if (food == 3) {
            system("cls");
            cout << "\n\n\n\n\t\t     MAK NGAH CATERING FOOD ORDERING SYSTEM";
            cout << "\n\n\n\t\t\t     = Order Confirmation =";
            cout << "\n\n\n\tChoice of item is Nasi Goreng Tomyam";
            cout << "\n\n\t   >> Enter order quantity: ";
            cin >> order;
            if (order < 1) {
                cout << "\n\tMinimum order quantity is 1";
                cout << "\n\n\t   >> Please enter again: ";
                cin >> order;
            }
            if (rear == MAX_SIZE - 1) {
                cout << "\n\tSorry, restaurant is out of an item!";
                getch();
                system("cls");
            } else {
                cout << "\n\n\t\tYour queue: " << rear + 1 << " , Order quantity: " << order;
                arr_queue[rear++] = order;

                total = 4.50 * order;
                cout << "\n\n\n\tAmount to be paid is RM " << total;
                cout << "\n\n\t   >> Enter the amount of payment, make sure its enough";
                cout << "\n\n\t      RM ";
                cin >> money;
                if (money < total) {
                    cout << "\n\t Inssufficient amount";
                    cout << "\n\n\t   >> Please enter again: RM ";
                    cin >> money;
                }
            }
            cout << "\n\n\t\tTHANKS FOR CHOOSING MAK NGAH FOOD CATERING";
            cout << "\n\n\t\tGENERATING BILL";
            for (int a = 1; a < 8; a++) {
                Sleep(500);
                cout << "...";
            }
            system("cls");
            cout << "\n\t\t==============================================";
            cout << "\n\t\t                MAK NGAH FOOD CATERING        ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tBill No.:" << bill + 1 << "\t\t\tDate:DEC16 '18";
            cout << "\n\t\t----------------------------------------------";
            cout << "\n\t\t" << order << "NG" <<
                "\t\t\t\t\tRM " << total;
            cout << "\n\n\t\t*SUBTOTAL*" <<
                "\t\t\t\tRM " << total;
            cout << "\n\t\tPAYMENT\t\t\t\t\tRM " << money;
            cout << "\n\t\tCHANGE DUE\t\t\t\tRM " << money - total;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    Cashier: Idzham ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tOrder#" << bill + 1;
            bill++;
            cout << "\n\n\t\t\t\tPress any key to go to main menu...";
            getch();
            system("cls");
        } else if (food == 4) {
            system("cls");
            cout << "\n\n\n\n\t\t     MAK NGAH CATERING FOOD ORDERING SYSTEM";
            cout << "\n\n\n\t\t\t     = Order Confirmation =";
            cout << "\n\n\n\tChoice of item is Nasi Goreng Paprik";
            cout << "\n\n\t   >> Enter order quantity: ";
            cin >> order;
            if (order < 1) {
                cout << "\n\tMinimum order quantity is 1";
                cout << "\n\n\t   >> Please enter again: ";
                cin >> order;
            }
            if (rear == MAX_SIZE - 1) {
                cout << "\n\tSorry, restaurant is out of an item!";
                getch();
                system("cls");
            } else {
                cout << "\n\n\t\tYour queue: " << rear + 1 << " , Order quantity: " << order;
                arr_queue[rear++] = order;

                total = 4.50 * order;
                cout << "\n\n\n\tAmount to be paid is RM " << total;
                cout << "\n\n\t   >> Enter the amount of payment, make sure its enough";
                cout << "\n\n\t      RM ";
                cin >> money;
                if (money < total) {
                    cout << "\n\t Inssufficient amount";
                    cout << "\n\n\t   >> Please enter again: RM ";
                    cin >> money;
                }
            }
            cout << "\n\n\t\tTHANKS FOR CHOOSING MAK NGAH FOOD CATERING";
            cout << "\n\n\t\tGENERATING BILL";
            for (int a = 1; a < 8; a++) {
                Sleep(500);
                cout << "...";
            }
            system("cls");
            cout << "\n\t\t==============================================";
            cout << "\n\t\t                MAK NGAH FOOD CATERING        ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tBill No.:" << bill + 1 << "\t\t\tDate:DEC16 '18";
            cout << "\n\t\t----------------------------------------------";
            cout << "\n\t\t" << order << "NG" <<
                "\t\t\t\t\tRM " << total;
            cout << "\n\n\t\t*SUBTOTAL*" <<
                "\t\t\t\tRM " << total;
            cout << "\n\t\tPAYMENT\t\t\t\t\tRM " << money;
            cout << "\n\t\tCHANGE DUE\t\t\t\tRM " << money - total;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    Cashier: Idzham ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tOrder#" << bill + 1;
            bill++;
            cout << "\n\n\t\t\t\tPress any key to go to main menu...";
            getch();
            system("cls");
        } else if (food == 5) {
            system("cls");
            cout << "\n\n\n\n\t\t     MAK NGAH CATERING FOOD ORDERING SYSTEM";
            cout << "\n\n\n\t\t\t     = Order Confirmation =";
            cout << "\n\n\n\tChoice of item is Nasi Goreng Kampung";
            cout << "\n\n\t   >> Enter order quantity: ";
            cin >> order;
            if (order < 1) {
                cout << "\n\tMinimum order quantity is 1";
                cout << "\n\n\t   >> Please enter again: ";
                cin >> order;
            }
            if (rear == MAX_SIZE - 1) {
                cout << "\n\tSorry, restaurant is out of an item!";
                getch();
                system("cls");
            } else {
                cout << "\n\n\t\tYour queue: " << rear + 1 << " , Order quantity: " << order;
                arr_queue[rear++] = order;

                total = 4.00 * order;
                cout << "\n\n\n\tAmount to be paid is RM " << total;
                cout << "\n\n\t   >> Enter the amount of payment, make sure its enough";
                cout << "\n\n\t      RM ";
                cin >> money;
                if (money < total) {
                    cout << "\n\t Inssufficient amount";
                    cout << "\n\n\t   >> Please enter again: RM ";
                    cin >> money;
                }
            }
            cout << "\n\n\t\tTHANKS FOR CHOOSING MAK NGAH FOOD CATERING";
            cout << "\n\n\t\tGENERATING BILL";
            for (int a = 1; a < 8; a++) {
                Sleep(500);
                cout << "...";
            }
            system("cls");
            cout << "\n\t\t==============================================";
            cout << "\n\t\t                MAK NGAH FOOD CATERING        ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tBill No.:" << bill + 1 << "\t\t\tDate:DEC16 '18";
            cout << "\n\t\t----------------------------------------------";
            cout << "\n\t\t" << order << "NG" <<
                "\t\t\t\t\tRM " << total;
            cout << "\n\n\t\t*SUBTOTAL*" <<
                "\t\t\t\tRM " << total;
            cout << "\n\t\tPAYMENT\t\t\t\t\tRM " << money;
            cout << "\n\t\tCHANGE DUE\t\t\t\tRM " << money - total;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    Cashier: Idzham ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tOrder#" << bill + 1;
            bill++;
            cout << "\n\n\t\t\t\tPress any key to go to main menu...";
            getch();
            system("cls");
        } else if (food == 6) {
            system("cls");
            cout << "\n\n\n\n\t\t     MAK NGAH CATERING FOOD ORDERING SYSTEM";
            cout << "\n\n\n\t\t\t     = Order Confirmation =";
            cout << "\n\n\n\tChoice of item is Nasi Goreng Ayam";
            cout << "\n\n\t   >> Enter order quantity: ";
            cin >> order;
            if (order < 1) {
                cout << "\n\tMinimum order quantity is 1";
                cout << "\n\n\t   >> Please enter again: ";
                cin >> order;
            }
            if (rear == MAX_SIZE - 1) {
                cout << "\n\tSorry, restaurant is out of an item!";
                getch();
                system("cls");
            } else {
                cout << "\n\n\t\tYour queue: " << rear + 1 << " , Order quantity: " << order;
                arr_queue[rear++] = order;

                total = 5.00 * order;
                cout << "\n\n\n\tAmount to be paid is RM " << total;
                cout << "\n\n\t   >> Enter the amount of payment, make sure its enough";
                cout << "\n\n\t      RM ";
                cin >> money;
                if (money < total) {
                    cout << "\n\t Inssufficient amount";
                    cout << "\n\n\t   >> Please enter again: RM ";
                    cin >> money;
                }
            }
            cout << "\n\n\t\tTHANKS FOR CHOOSING MAK NGAH FOOD CATERING";
            cout << "\n\n\t\tGENERATING BILL";
            for (int a = 1; a < 8; a++) {
                Sleep(500);
                cout << "...";
            }
            system("cls");
            cout << "\n\t\t==============================================";
            cout << "\n\t\t                MAK NGAH FOOD CATERING        ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tBill No.:" << bill + 1 << "\t\t\tDate:DEC16 '18";
            cout << "\n\t\t----------------------------------------------";
            cout << "\n\t\t" << order << "NG" <<
                "\t\t\t\t\tRM " << total;
            cout << "\n\n\t\t*SUBTOTAL*" <<
                "\t\t\t\tRM " << total;
            cout << "\n\t\tPAYMENT\t\t\t\t\tRM " << money;
            cout << "\n\t\tCHANGE DUE\t\t\t\tRM " << money - total;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    Cashier: Idzham ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tOrder#" << bill + 1;
            bill++;
            cout << "\n\n\t\t\t\tPress any key to go to main menu...";
            getch();
            system("cls");
        } else if (food == 7) {
            system("cls");
            cout << "\n\n\n\n\t\t     MAK NGAH CATERING FOOD ORDERING SYSTEM";
            cout << "\n\n\n\t\t\t     = Order Confirmation =";
            cout << "\n\n\n\tChoice of item is Nasi Goreng Cili Padi";
            cout << "\n\n\t   >> Enter order quantity: ";
            cin >> order;
            if (order < 1) {
                cout << "\n\tMinimum order quantity is 1";
                cout << "\n\n\t   >> Please enter again: ";
                cin >> order;
            }
            if (rear == MAX_SIZE - 1) {
                cout << "\n\tSorry, restaurant is out of an item!";
                getch();
                system("cls");
            } else {
                cout << "\n\n\t\tYour queue: " << rear + 1 << " , Order quantity: " << order;
                arr_queue[rear++] = order;

                total = 4.50 * order;
                cout << "\n\n\n\tAmount to be paid is RM " << total;
                cout << "\n\n\t   >> Enter the amount of payment, make sure its enough";
                cout << "\n\n\t      RM ";
                cin >> money;
                if (money < total) {
                    cout << "\n\t Inssufficient amount";
                    cout << "\n\n\t   >> Please enter again: RM ";
                    cin >> money;
                }
            }
            cout << "\n\n\t\tTHANKS FOR CHOOSING MAK NGAH FOOD CATERING";
            cout << "\n\n\t\tGENERATING BILL";
            for (int a = 1; a < 8; a++) {
                Sleep(500);
                cout << "...";
            }
            system("cls");
            cout << "\n\t\t==============================================";
            cout << "\n\t\t                MAK NGAH FOOD CATERING        ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tBill No.:" << bill + 1 << "\t\t\tDate:DEC16 '18";
            cout << "\n\t\t----------------------------------------------";
            cout << "\n\t\t" << order << "NG" <<
                "\t\t\t\t\tRM " << total;
            cout << "\n\n\t\t*SUBTOTAL*" <<
                "\t\t\t\tRM " << total;
            cout << "\n\t\tPAYMENT\t\t\t\t\tRM " << money;
            cout << "\n\t\tCHANGE DUE\t\t\t\tRM " << money - total;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    Cashier: Idzham ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tOrder#" << bill + 1;
            bill++;
            cout << "\n\n\t\t\t\tPress any key to go to main menu...";
            getch();
            system("cls");
        } else if (food == 8) {
            system("cls");
            cout << "\n\n\n\n\t\t     MAK NGAH CATERING FOOD ORDERING SYSTEM";
            cout << "\n\n\n\t\t\t     = Order Confirmation =";
            cout << "\n\n\n\tChoice of item is Nasi Goreng USA";
            cout << "\n\n\t   >> Enter order quantity: ";
            cin >> order;
            if (order < 1) {
                cout << "\n\tMinimum order quantity is 1";
                cout << "\n\n\t   >> Please enter again: ";
                cin >> order;
            }
            if (rear == MAX_SIZE - 1) {
                cout << "\n\tSorry, restaurant is out of an item!";
                getch();
                system("cls");
            } else {
                cout << "\n\n\t\tYour queue: " << rear + 1 << " , Order quantity: " << order;
                arr_queue[rear++] = order;

                total = 6.00 * order;
                cout << "\n\n\n\tAmount to be paid is RM " << total;
                cout << "\n\n\t   >> Enter the amount of payment, make sure its enough";
                cout << "\n\n\t      RM ";
                cin >> money;
                if (money < total) {
                    cout << "\n\t Inssufficient amount";
                    cout << "\n\n\t   >> Please enter again: RM ";
                    cin >> money;
                }
            }
            cout << "\n\n\t\tTHANKS FOR CHOOSING MAK NGAH FOOD CATERING";
            cout << "\n\n\t\tGENERATING BILL";
            for (int a = 1; a < 8; a++) {
                Sleep(500);
                cout << "...";
            }
            system("cls");
            cout << "\n\t\t==============================================";
            cout << "\n\t\t                MAK NGAH FOOD CATERING        ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tBill No.:" << bill + 1 << "\t\t\tDate:DEC16 '18";
            cout << "\n\t\t----------------------------------------------";
            cout << "\n\t\t" << order << "NG" <<
                "\t\t\t\t\tRM " << total;
            cout << "\n\n\t\t*SUBTOTAL*" <<
                "\t\t\t\tRM " << total;
            cout << "\n\t\tPAYMENT\t\t\t\t\tRM " << money;
            cout << "\n\t\tCHANGE DUE\t\t\t\tRM " << money - total;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    Cashier: Idzham ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tOrder#" << bill + 1;
            bill++;
            cout << "\n\n\t\t\t\tPress any key to go to main menu...";
            getch();
            system("cls");
        } else if (food == 9) {
            system("cls");
            cout << "\n\n\n\n\t\t     MAK NGAH CATERING FOOD ORDERING SYSTEM";
            cout << "\n\n\n\t\t\t     = Order Confirmation =";
            cout << "\n\n\n\tChoice of item is Nasi Goreng Cendawan";
            cout << "\n\n\t   >> Enter order quantity: ";
            cin >> order;
            if (order < 1) {
                cout << "\n\tMinimum order quantity is 1";
                cout << "\n\n\t   >> Please enter again: ";
                cin >> order;
            }
            if (rear == MAX_SIZE - 1) {
                cout << "\n\tSorry, restaurant is out of an item!";
                getch();
                system("cls");
            } else {
                cout << "\n\n\t\tYour queue: " << rear + 1 << " , Order quantity: " << order;
                arr_queue[rear++] = order;

                total = 4.00 * order;
                cout << "\n\n\n\tAmount to be paid is RM " << total;
                cout << "\n\n\t   >> Enter the amount of payment, make sure its enough";
                cout << "\n\n\t      RM ";
                cin >> money;
                if (money < total) {
                    cout << "\n\t Inssufficient amount";
                    cout << "\n\n\t   >> Please enter again: RM ";
                    cin >> money;
                }
            }
            cout << "\n\n\t\tTHANKS FOR CHOOSING MAK NGAH FOOD CATERING";
            cout << "\n\n\t\tGENERATING BILL";
            for (int a = 1; a < 8; a++) {
                Sleep(500);
                cout << "...";
            }
            system("cls");
            cout << "\n\t\t==============================================";
            cout << "\n\t\t                MAK NGAH FOOD CATERING        ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tBill No.:" << bill + 1 << "\t\t\tDate:DEC16 '18";
            cout << "\n\t\t----------------------------------------------";
            cout << "\n\t\t" << order << "NG" <<
                "\t\t\t\t\tRM " << total;
            cout << "\n\n\t\t*SUBTOTAL*" <<
                "\t\t\t\tRM " << total;
            cout << "\n\t\tPAYMENT\t\t\t\t\tRM " << money;
            cout << "\n\t\tCHANGE DUE\t\t\t\tRM " << money - total;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    Cashier: Idzham ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tOrder#" << bill + 1;
            bill++;
            cout << "\n\n\t\t\t\tPress any key to go to main menu...";
            getch();
            system("cls");
        } else if (food == 10) {
            system("cls");
            cout << "\n\n\n\n\t\t     MAK NGAH CATERING FOOD ORDERING SYSTEM";
            cout << "\n\n\n\t\t\t     = Order Confirmation =";
            cout << "\n\n\n\tChoice of item is Nasi Goreng Seafood";
            cout << "\n\n\t   >> Enter order quantity: ";
            cin >> order;
            if (order < 1) {
                cout << "\n\tMinimum order quantity is 1";
                cout << "\n\n\t   >> Please enter again: ";
                cin >> order;
            }
            if (rear == MAX_SIZE - 1) {
                cout << "\n\tSorry, restaurant is out of an item!";
                getch();
                system("cls");
            } else {
                cout << "\n\n\t\tYour queue: " << rear + 1 << " , Order quantity: " << order;
                arr_queue[rear++] = order;

                total = 5.50 * order;
                cout << "\n\n\n\tAmount to be paid is RM " << total;
                cout << "\n\n\t   >> Enter the amount of payment, make sure its enough";
                cout << "\n\n\t      RM ";
                cin >> money;
                if (money < total) {
                    cout << "\n\t Inssufficient amount";
                    cout << "\n\n\t   >> Please enter again: RM ";
                    cin >> money;
                }
            }
            cout << "\n\n\t\tTHANKS FOR CHOOSING MAK NGAH FOOD CATERING";
            cout << "\n\n\t\tGENERATING BILL";
            for (int a = 1; a < 8; a++) {
                Sleep(500);
                cout << "...";
            }
            system("cls");
            cout << "\n\t\t==============================================";
            cout << "\n\t\t                MAK NGAH FOOD CATERING        ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tBill No.:" << bill + 1 << "\t\t\tDate:DEC16 '18";
            cout << "\n\t\t----------------------------------------------";
            cout << "\n\t\t" << order << "NG" <<
                "\t\t\t\t\tRM " << total;
            cout << "\n\n\t\t*SUBTOTAL*" <<
                "\t\t\t\tRM " << total;
            cout << "\n\t\tPAYMENT\t\t\t\t\tRM " << money;
            cout << "\n\t\tCHANGE DUE\t\t\t\tRM " << money - total;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    Cashier: Idzham ";
            cout << "\n\t\t==============================================";
            cout << "\n\t\tOrder#" << bill + 1;
            bill++;
            cout << "\n\n\t\t\t\tPress any key to go to main menu...";
            getch();
            system("cls");
        }
    }

    void dequeue() {
        system("cls");
        cout << "\n\n\n\t\t\tMAK NGAH CATERING FOOD ORDERING SYSTEM ";
        cout << "\n\n\n\t\t\t\t   = Serve Order =";
        if (front == rear) {
            cout << "\n\n\n\t\tAll order has been served, the restaurant is empty!";
            getch();
            system("cls");
        } else {
            cout << "\n\n\n\t\tCustomers Number:" << front <<
                ", Served Order :" << arr_queue[front];
            front++;
            getch();
            system("cls");
        }
    }

    void display() {
        system("cls");
        cout << "\n\n\n\t\t\tMAK NGAH CATERING FOOD ORDERING SYSTEM ";
        cout << "\n\n\n\t\t\t\t   = Order Placed =";
        int i;
        cout << "\n\n\n\t\t\tNumber of Customers in queue:" << (rear - front) << "\n";
        for (i = front; i < rear; i++)
            cout << "\n\t\t|\tCustomers " << i << "\t  Order Quantity " << arr_queue[i] <<
            "\t| \n\t\t-------------------------------------------------";
        getch();
        system("cls");
    }
};

#endif

