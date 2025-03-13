Да се креира структура Item во која што ќе се чуваат податоци за еден производ од продавница. За производот ќе се
 чуваат информации за име и цена на производот.
Потоа, да се креира структура ShoppingCart во која што ќе  се чуваат податоци за id на кошничката и сите производи кои се дел
 од таа кошничка за купување.
На почетокот се внесува број N што озналува колку кошнички ќе се читаат од влез.

Да се направат функциите:

void printAveragePriceOfLowestItems(...):
која што ќе ги земе производите со најмала цена од секоја кошничка, ќе ја пресмета нивната средна вредност и ќе ја испечати.


void printHighestPricedItem(...):
кoja што за секоја кошничка ќе го испечати името на производот со најголема цена и id-то на кошничката од кој што доаѓа тој
 производ.

#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

struct Item {
    char name[50];
    int price;
};

struct ShoppingCart {
    int id;
    Item items[50];
    int n;
};

void printAveragePriceOfLowestItems(ShoppingCart s[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        int min = s[i].items[0].price;
        for(int j = 1; j < s[i].n; j++) {
            if(s[i].items[j].price<min) {
                min = s[i].items[j].price;
            }
        }
        sum += min;
    }
    cout<<"Average price of lowest items is: "<<sum/(float)n<<endl;
}

void printHighestPricedItem(ShoppingCart s[], int n) {
    for(int i = 0 ; i<n ; i++) {
        int max = s[i].items[0].price;
        for(int j = 1; j < s[i].n; j++) {
            if(s[i].items[j].price>max) {
                max = s[i].items[j].price;
            }
        }
        cout<<"Highest priced item is: "<<max<<" with id: "<<s[i].id<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    ShoppingCart s[50];
    for(int i = 0; i < n; i++) {
        cin>>s[i].id>>s[i].n;
        for(int j = 0; j<s[i].n; j++) {
            cin>>s[i].items[j].name>>s[i].items[j].price;
        }
    }
    printAveragePriceOfLowestItems(s, n);
    printHighestPricedItem(s, n);
}
