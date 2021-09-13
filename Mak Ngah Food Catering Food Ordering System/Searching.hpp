#ifndef SEARCHING_H
#define SEARCHING_H

using namespace std;

void sortArray(char* [], int);
int binarySearch(char* [], int, string);
const int FOOD_NAMES = 10;
void printArray();

class food
{
    char* name[10];

public:
    void printArray()
    {

        char* name[] = { "nasi goreng kampung", "nasi goreng tomyam", "nasi goreng usa",
            "nasi goreng paprik", "nasi goreng cina", "nasi goreng pataya", "nasi goreng cili padi",
            "nasi goreng ayam", "nasi goreng cendawan", "nasi goreng seafood" };

        string foodName;
        int results;
        cout << "\n\n\n\t\t\tMAK NGAH CATERING FOOD ORDERING SYSTEM ";
        cout << "\n\n\n\t\t\t\t   = Food Searching =";
        cout << "\n\n\n\t\tFind the exact Nasi Goreng you're craving.\n\t\t(Hint: Type all the sentences "
                "in lowercase)";
        cin.ignore();
        cout << "\n\n\t\t";
        getline(cin, foodName);

        sortArray(name, FOOD_NAMES);

        results = binarySearch(name, FOOD_NAMES, foodName);

        if (results == -1)
        {
            cout << "\n\t\tSorry, we don't have that today.\n";
            cout << "\n\t\t----------------------------------------------";
            cout << " \n\t\tPress any key to go to main menu...";
            getch();
            system("cls");
        }
        else
        {
            cout << "\n\t\t----------------------------------------------";
            cout << "\n\t\tThe " << foodName << " is currently available...";
            cout << " \n\t\tTo order the food, press any key to go to main menu...";
            cout << " \n\t\tPrices of the food may vary.";
            getch();
            system("cls");
        }
    }
    void sortArray(char* string[], int FOOD_NAMES)
    {

        int pass, i;
        char* temp;

        for (pass = 0; pass < FOOD_NAMES - 1; pass++)
        {
            for (i = 0; i < FOOD_NAMES - 1; i++)
            {
                if (strcmp(string[i], string[i + 1]) > 0)
                {
                    temp = string[i];
                    string[i] = string[i + 1];
                    string[i + 1] = temp;
                }
            }
        }
    }

    int binarySearch(char* food[], int FOOD_NAMES, string value)
    {
        int first = 0, last = FOOD_NAMES - 1, middle;
        int index = -1;
        bool found = false;

        while (!found && first <= last)
        {
            middle = (first + last) / 2;
            if (food[middle] == value)
            {
                found = true;
                index = middle;
            }
            else if (food[middle] > value)
                last = middle - 1;
            else
                first = middle + 1;
        }
        return index;
    }
};

#endif
