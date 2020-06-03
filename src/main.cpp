#include <iostream>
#include "../include/Company.h"

int main() {
    Company *t1 = new Company("test");
    Engineer *et1 = new Engineer(1,"Test",130,500);
    Cleaner *test = new Cleaner(1,"Test",120,500);
    std::cout << "Hello, World!\n" <<test->getId()<<test->getName()<<test->getName()<< std::endl;
    t1->importData("data.txt");
    cout<<endl<<endl<<endl;
    t1->print();
    return 0;
}
