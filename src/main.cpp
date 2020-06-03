#include <iostream>

#include "WFactory.h"
#include <fstream>
using namespace std;

int main()
{
    WFactory fact;
    ofstream output("roster.txt");
    //stuff generator
    for(int i = 0; i < 8; i++){
        while(rand()%3 != 0){
        if(i == 0){Driver* dave = fact.createDriver();
                    output << dave->toString() << endl;
                    delete dave;}
        if(i == 1){Cleaner* ave = fact.createCleaner();
                    output << ave->toString() << endl;
                    delete ave;}
        if(i == 2){Programmer* ve = fact.createProg();
                    output << ve->toString() << endl;
                    delete ve;}
        if(i == 3){TeamLeader* e = fact.createTL();
                    output << e->toString() << endl;
                    delete e;}
        if(i == 4){Tester* ev = fact.createTest();
                    output << ev->toString() << endl;
                    delete ev;}
        if(i == 5){Manager* eva = fact.createMng();
                    output << eva->toString() << endl;
                    delete eva;}
        if(i == 6){ProjectManager* evad = fact.createPrMng();
                    output << evad->toString() << endl;
                    delete evad;}
        if(i == 7){SeniorManager* dave2 = fact.createSnMng();
                    output << dave2->toString() << endl;
                    delete dave2;}
        }
    }
    fact.createFromFile("roster.txt");
     TeamLeader* dean = fact.createTL("Test", 123);
    dean->setWorktime(20);
    dean->setEmpCount(20);

    dean->calc(10, 2000);
    cout << dean->Employee::getSal();
    return 0;
}
