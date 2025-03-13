Да се креира структура Student во која се чуваат податоци за еден студент. За студентот се чуваат информации за името на студентот(низа од карактери), 
број на индекс на студентот, број на курсеви кои ги слуша, низа од кодови на курсевите кои ги слуша.

Потоа, да се креира структура Course во која се чуваат податоци за името на курсот (низа од карактери) и код на курсот(цел број).

Да се направи функција: 

int get_most_popular_course(struct course courses[], int num_courses)
кoja што го враќа кодот на најпопуларниот курс.

#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

struct Student {
    char name[50];
    int index;
    int courses;
    int codes[50];
};

struct Course {
    char name[50];
    int code;
    int students;
};

int getmostpupularcourse(Course c[], int num_courses) {
    int max = 0;
    int index = 0;
    for (int i = 0; i < num_courses; i++) {
        if(c[i].students > max) {
            max = c[i].students;
            index = i;
        }
    }
    return index;
}

int main() {
    int num_students, num_courses;
    cin>>num_students>>num_courses;
    Student s[num_students];
    Course c[num_courses];
    for(int i=0;i<num_courses;i++) {
        cin>>c[i].name>>c[i].code;
        c[i].students=0;
    }
    for(int i=0;i<num_students;i++) {
        cin>>s[i].name>>s[i].index>>s[i].courses;
        for(int j=0;j<s[i].courses;j++) {
            cin>>s[i].codes[j];
            for(int k = 0; k<num_courses; k++) {
                if(s[i].codes[j] == c[k].code) {
                    c[k].students++;
                }
            }
        }
    }
    int index = getmostpupularcourse(c, num_courses);
    cout<<c[index].name<<endl;
}
