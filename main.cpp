//
//Mehraj Hasan Nafi|Lab23
//IDE: VS code
//
#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include <cstdlib>
#include <ctime>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu();

int main_menu() {
    int num;

    cout << "\n--- Goat MANAGER 3001---\n";
    cout << "1. Add a goat \n";
    cout << "2. Delete a goat\n";
    cout << "3. List of goat\n";
    cout << "4. Quit\n";
    cout << "Enter your choice: ";
    cin >> num;

        while (num < 1 || num > 4) {
       cout << "Invalid number choice, please re-enter: ";
        cin >> num;
    }
return num;
}

void display_trip(list<Goat> trip) {
    if (trip.empty()) {
        cout << "It is empty." << endl;
        return;
    }

    int a = 0;
    for (Goat g : trip) {
        cout << "[ " << a << " ] ";
        g.display();
        a++;
    }
}

void add_goat(list<Goat> &trip, string names[], string colors[]) {
   
    int nameI = rand() % SZ_NAMES;
    int colorI = rand() % SZ_COLORS;
    int age = rand() % (MAX_AGE + 1);

    Goat g(names[nameI], age, colors[colorI]); 
    trip.push_back(g);

    cout << "New goat: ";
    g.display();
}

 void display_trip(list<Goat> trip) {
    if (trip.empty()) {
        cout << "It is empty." << endl;
        return;
    }

    int a = 1;
    for (Goat g : trip) {
        cout << "[ " << a << " ] ";
        g.display();
        a++;
    }
}

int select_goat(list<Goat> trip) {
    display_trip(trip);
    cout << "Which spot would you like to delete --> ";
    int choice;
    cin >> choice;

    while (choice < 1 || choice > trip.size()) {
        cout << "Re-enter your choice: ";
        cin >> choice;
    }
    return choice = 1;
}


int main() {
    srand(time(0));
    bool again;

    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();




    return 0;
}

