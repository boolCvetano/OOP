Да се креира структура Engine во која што ќе се чуваат податоци за коњска сила / horsepower (int) и вртежен момент / torque (int).

Потоа, да се креира структура Car во која што ќе  се чуваат податоци името на производителот (char array) , која година е произведена колата (int) и кој мотор / engine (Engine) која што го користи/

На почетокот се внесува број N што озналува колку коли ќе се читаат од влез.

Да се направи функцијата:

void printCars(...)

која што ќе ги земе двете коли кои имаат најмала коњска сила, и од нив две, ќе ја испечати колата што има поголем вртежен момент.

#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

struct Engine {
    int hp;
    int torque;
};

struct Car {
    char name[50];
    int year;
    Engine engine;
};

void printCars(Car c[], int n) {
    Car min1 = c[0];
    Car min2 = c[1];
    for(int i = 1 ;i<n ; i++) {
        if(c[i].engine.hp < min1.engine.hp) {
            min2 = min1;
            min1 = c[i];
        }
        else if(c[i].engine.hp < min2.engine.hp) {
            min2 = c[i];
        }
    }
    if(min1.engine.torque > min2.engine.torque) {
        cout << min1.engine.torque << endl;
    }
    else if(min2.engine.torque > min1.engine.torque) {
        cout << min2.engine.torque << endl;
    }
    else {
        cout<<"Both are the same"<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    Car c[100];
    for(int i = 0 ; i<n ; i++) {
        cin>>c[i].name>>c[i].year>>c[i].engine.hp>>c[i].engine.torque;
    }
    printCars(c,n);
}
