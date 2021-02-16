
#include <iostream>
#include"student.h"
using namespace std;

int main(){

    int id = 0;
    double marks = 0.0;
    char arr[25];
    
    cout << "Enter Student ID:  ";
    cin >> id;
    cout << "Enter Student Name:   ";
    cin.ignore();
    cin.get(arr, 25);                                          // by using cin.get() you can take space as input
    cout << "Enter Student Marks:   ";
    cin >> marks;
    
    student one;                                               // Student class object
    student two(id, arr, marks);                               //constructor with parameters

    one.setid(id);
    one.setname(arr);
    one.setmarks(marks);

    cout << endl << one.getid() << " " << one.getname() << " " << one.getmarks();            //this is setter getter
    cout << endl << two.getid() << " " << two.getname() << " " << two.getmarks() << endl;    // this is constructor, Here you can see that we only setvalue through Student obj but we are accesing it through two, that's because of constructor
    
    return 0;
}


/* sample input 01
* Enter Student ID : 314
* Enter Student Name : ocman briet
* Enter Student Marks : 86.5

* sample output
* 314 ocman briet 86.5
* 314 ocman briet 86.5

*/

/* sample input 02
* Enter Student ID : 14
* Enter Student Name : ocman
* Enter Student Marks : 85

* sample output
* 14 ocman 85
* 14 ocman 85

*/