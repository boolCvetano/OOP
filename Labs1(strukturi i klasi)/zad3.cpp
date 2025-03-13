Да се напише програма во која од стандарден влез се внесува бројот N (бројот на трансакции), а потоа N трансакциски сметки и како резултат ги печати идентификацискиот број и вкупната сума (со провизија) на сите трансакции платени со кредитна картичка. Во случај да нема трансакција платена со кредитна картичка да се испечати "No credit card transaction".

Во структурата Трансакција (Transaction) треба да се чуваат следните информации:
- Идентификациски број (int)
- Платена сума (int)
- Провизија (int)
- Дали е платено со дебитна или кредитна картичка (0 - дебитна, 1 - кредитна)

#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

struct Transaction {
    int id;
    int sum_paid;
    int provision;
    int type;
};

void print_sum_credit_card(Transaction t[], int n) {
    for(int i = 0 ; i<n ; i++) {
        int sum = 0;
        if(t[i].type==1) {
            sum += t[i].sum_paid + t[i].provision;
            cout<<"Transaction ID: "<<t[i].id<<endl;
            cout<<"Total sum paid: "<<sum<<endl;
        }
    }
}

int main() {
    int n;
    cin>>n;
    Transaction t[100];
    for(int i = 0 ; i<n ; i++) {
        cin>>t[i].id>>t[i].sum_paid>>t[i].provision>>t[i].type;
    }
    print_sum_credit_card(t, n);
}
