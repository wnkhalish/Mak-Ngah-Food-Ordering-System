#ifndef SEARCHING_H
#define SEARCHING_H

#include <string>
#include<conio.h>
#include<windows.h>
#include <iostream>

using namespace std;
void sortArray(char *[], int); 
int binarySearch(char *[], int, string);
const int FOOD_NAMES = 20; 
void printArray();

class food{
char *name [20];
}; 
int main() {
printArray();
}

void printArray(){
char *name[] = {"Nasi Goreng Kampung", "Nasi Ayam Penyet", "Nasi Goreng Tomyam",
                "Nasi Goreng USA", "Nasi Goreng Paprik", "Mee Goreng",
                "Kuetiau Kung Fu", "Nasi Goreng Daging Merah", "Nasi Goreng Cina",
                "Nasi Goreng Pataya", "Nasi Goreng Ayam Kunyit", "Roti Canai",
                "Nasi Goreng Ayam Halia", "Nasi Goreng Cili Padi", "Nasi Goreng Ikan Masin",
                "Nasi Goreng Ayam Blackpepper", "Nasi Goreng Biasa", "Bihun Goreng",
                "Mihun Sup", "Nasi Lemak"};
    string foodName; 
    int results;  
 
    cout << "\n\n\n\n\n\t\tFind the exact food you're craving.\n\t\t(Hint: Begin every word with Capital Letter)"; 
    getline(cin, foodName); 
    
 	sortArray(name, FOOD_NAMES);
 	
    results = binarySearch(name, FOOD_NAMES, foodName); 
 
    if (results == -1)
        cout << "Sorry, we don't have that today.\n";
    else {
        cout << "The"<< foodName<<" is currently available";
        cout << " Press back to go to main menu, so you can order the foods you love, any way you want" ;
    }
}

void sortArray(char *string[],  int FOOD_NAMES) {

int pass, i;
char *temp;

   	for (pass=0; pass < FOOD_NAMES - 1; pass++) {
    for (i=0; i<FOOD_NAMES - 1; i++) {
    if (strcmp(string[i], string[i+1]) > 0)  {
    temp = string[i];
    string[i] = string[i+1];
	string[i+1] = temp;
   		}
   	 }
	}
}

int binarySearch(char *food[], int FOOD_NAMES, string value) {
    int first = 0,            
    last = FOOD_NAMES - 1,       
    middle;              
    int index = -1;       
    bool found = false;        
 
    while (!found && first <= last) {
        middle = (first + last) / 2;     
        if (food[middle] == value) { 
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
#endif
