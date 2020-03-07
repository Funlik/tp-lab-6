#include "WFactory.h"

WFactory::WFactory()
{
    //ctor
}

Driver* WFactory::createDriver(){
    std::string name;
    switch(rand()%3){
        case 0:
            name = "Павел";
            break;
        case 1:
            name = "Михаил";
            break;
        case 2:
            name = "Василий";
            break;
    }
    name += " ";
    switch(rand()%3){
        case 0:
            name += "Водилов";
            break;
        case 1:
            name += "Газов";
            break;
        case 2:
            name += "Быстров";
            break;
    }
    Driver* dave = new Driver(name, rand()%1000);
    dave->setId(this->nextId());
    dave->setPosition("водитель");
    return dave;
}

Driver* WFactory::createDriver(std::string name, int sallary){
    Driver* dave = new Driver(name, sallary);
    dave->setId(this->nextId());
    dave->setPosition("водитель");
    return dave;
}

Cleaner* WFactory::createCleaner(){
    std::string name;
    switch(rand()%3){
        case 0:
            name = "Мария";
            break;
        case 1:
            name = "Ольга";
            break;
        case 2:
            name = "Светлана";
            break;
    }
    name += " ";
    switch(rand()%3){
        case 0:
            name += "Тряпкина";
            break;
        case 1:
            name += "Швабрина";
            break;
        case 2:
            name += "Веникова";
            break;
    }
    Cleaner* dave = new Cleaner(name, rand()%1000);
    dave->setId(this->nextId());
    dave->setPosition("уборщица");
    return dave;
}

Cleaner* WFactory::createCleaner(std::string name, int sallary){
    Cleaner* dave = new Cleaner(name, sallary);
    dave->setId(this->nextId());
    dave->setPosition("уборщица");
    return dave;
}

Programmer* WFactory::createProg(){
    std::string name;
    switch(rand()%3){
        case 0:
            name = "Василий";
            break;
        case 1:
            name = "Генадий";
            break;
        case 2:
            name = "Антон";
            break;
    }
    name += " ";
    switch(rand()%3){
        case 0:
            name += "Плюсов";
            break;
        case 1:
            name += "Джавов";
            break;
        case 2:
            name += "Питонов";
            break;
    }
    Programmer* dave = new Programmer(name, rand()%1000);
    dave->setId(this->nextId());
    dave->setPosition("программист");
    dave->setPrName("Sampleproj");
    return dave;
}

Programmer* WFactory::createProg(std::string name, int sallary){
    Programmer* dave = new Programmer(name, sallary);
    dave->setId(this->nextId());
    dave->setPosition("программист");
    dave->setPrName("Sampleproj");
    return dave;
}

TeamLeader* WFactory::createTL(){
    std::string name;
    switch(rand()%3){
        case 0:
            name = "Василий";
            break;
        case 1:
            name = "Генадий";
            break;
        case 2:
            name = "Антон";
            break;
    }
    name += " ";
    switch(rand()%3){
        case 0:
            name += "Плюсов";
            break;
        case 1:
            name += "Джавов";
            break;
        case 2:
            name += "Питонов";
            break;
    }
    TeamLeader* dave = new TeamLeader(name, rand()%1000);
    dave->setId(this->nextId());
    dave->setPosition("тимлид.");
    dave->setPrName("Sampleproj");
    return dave;
}

TeamLeader* WFactory::createTL(std::string name, int sallary){
    TeamLeader* dave = new TeamLeader(name, sallary);
    dave->setId(this->nextId());
    dave->setPosition("тимлид.");
    dave->setPrName("Sampleproj");
    return dave;
}

Manager* WFactory::createMng(){
    std::string name;
    switch(rand()%3){
        case 0:
            name = "Виталий";
            break;
        case 1:
            name = "Пётр";
            break;
        case 2:
            name = "Андрей";
            break;
    }
    name += " ";
    switch(rand()%3){
        case 0:
            name += "Глазов";
            break;
        case 1:
            name += "Управнов";
            break;
        case 2:
            name += "Главнов";
            break;
    }
    Manager* dave = new Manager(name);
    dave->setId(this->nextId());
    dave->setPosition("менеджер");
    dave->setPrName("Sampleproj");
    return dave;
}

Manager* WFactory::createMng(std::string name){
    Manager* dave = new Manager(name);
    dave->setId(this->nextId());
    dave->setPosition("менеджер");
    dave->setPrName("Sampleproj");
    return dave;
}

Tester* WFactory::createTest(){
    std::string name;
    switch(rand()%3){
        case 0:
            name = "Василий";
            break;
        case 1:
            name = "Генадий";
            break;
        case 2:
            name = "Антон";
            break;
    }
    name += " ";
    switch(rand()%3){
        case 0:
            name += "Де Баг";
            break;
        case 1:
            name += "Проверкин";
            break;
        case 2:
            name += "Релизов";
            break;
    }
    Tester* dave = new Tester(name, rand()%1000);
    dave->setId(this->nextId());
    dave->setPosition("тестер");
    dave->setPrName("Sampleproj");
    return dave;
}

Tester* WFactory::createTest(std::string name, int sallary){
    Tester* dave = new Tester(name, sallary);
    dave->setId(this->nextId());
    dave->setPosition("тестер");
    dave->setPrName("Sampleproj");
    return dave;
}

ProjectManager* WFactory::createPrMng(){
    std::string name;
    switch(rand()%3){
        case 0:
            name = "Виталий";
            break;
        case 1:
            name = "Пётр";
            break;
        case 2:
            name = "Андрей";
            break;
    }
    name += " ";
    switch(rand()%3){
        case 0:
            name += "Глазов";
            break;
        case 1:
            name += "Управнов";
            break;
        case 2:
            name += "Главнов";
            break;
    }
    ProjectManager* dave = new ProjectManager(name, rand()%10);
    dave->setId(this->nextId());
    dave->setPosition("пр.менеджер");
    dave->setPrName("Sampleproj");
    return dave;
}

ProjectManager* WFactory::createPrMng(std::string name, int emp_count){
    ProjectManager* dave = new ProjectManager(name, emp_count);
    dave->setId(this->nextId());
    dave->setPosition("пр.менеджер");
    dave->setPrName("Sampleproj");
    return dave;
}

SeniorManager* WFactory::createSnMng(){
    std::string name;
    switch(rand()%3){
        case 0:
            name = "Виталий";
            break;
        case 1:
            name = "Пётр";
            break;
        case 2:
            name = "Андрей";
            break;
    }
    name += " ";
    switch(rand()%3){
        case 0:
            name += "Глазов";
            break;
        case 1:
            name += "Управнов";
            break;
        case 2:
            name += "Главнов";
            break;
    }
    SeniorManager* dave = new SeniorManager(name, rand()%100);
    dave->setId(this->nextId());
    dave->setPosition("глав.менеджер");
    dave->setPrName("Sampleproj");
    return dave;
}

SeniorManager* WFactory::createSnMng(std::string name, int emp_count){
    SeniorManager* dave = new SeniorManager(name, emp_count);
    dave->setId(this->nextId());
    dave->setPosition("глав.менеджер");
    dave->setPrName("Sampleproj");
    return dave;
}

void WFactory::createFromFile(std::string filename){
    int id;
    std::string name;
    std::string temp;
    std::string pos;
    std::string project;
    int worktime;
    int base;
    int pos_id;
    std::ifstream input(filename);
    while(input >> id){
        input >> name;
        input >> temp;
        name += " ";
        name += temp;
        input >> pos;
        if(pos == "водитель"){pos_id = 0;}
        if(pos == "уборщица"){pos_id = 1;}
        if(pos == "программист"){pos_id = 2;}
        if(pos == "тимлид."){pos_id = 3;}
        if(pos == "тестер"){pos_id = 4;}
        if(pos == "менеджер"){pos_id = 5;}
        if(pos == "пр.менеджер"){pos_id = 6;}
        if(pos == "глав.менеджер"){pos_id = 7;}
        input >> base;
        input >> worktime;
        input >> project;
        std::cout<<pos_id << " ";
        switch(pos_id){
            case 0:{
                Driver* dave = new Driver(name, base);
                dave->setId(id);
                dave->setWorktime(worktime);
                dave->setPosition(pos);
                dr.push_back(dave);
                std::cout<<dr.back()->toString()<<std::endl;}
                break;
            case 1:{
                Cleaner* dave = new Cleaner(name, base);
                dave->setId(id);
                dave->setWorktime(worktime);
                dave->setPosition(pos);
                cl.push_back(dave);
                std::cout<<cl.back()->toString()<<std::endl;}
                break;
            case 2:{
                Programmer* dave = new Programmer(name, base);
                dave->setId(id);
                dave->setWorktime(worktime);
                dave->setPosition(pos);
                dave->setPrName(project);
                pr.push_back(dave);
                std::cout<<pr.back()->toString()<<std::endl;}
                break;
            case 3:{
                TeamLeader* dave = new TeamLeader(name, base);
                dave->setId(id);
                dave->setWorktime(worktime);
                dave->setPosition(pos);
                dave->setPrName(project);
                tl.push_back(dave);
                std::cout<<tl.back()->toString()<<std::endl;}
                break;
            case 4:{
                Tester* dave = new Tester(name, base);
                dave->setId(id);
                dave->setWorktime(worktime);
                dave->setPosition(pos);
                dave->setPrName(project);
                ts.push_back(dave);
                std::cout<<ts.back()->toString()<<std::endl;}
                break;
            case 5:{
                Manager* dave = new Manager(name);
                dave->setId(id);
                dave->setPosition(pos);
                dave->setPrName(project);
                mn.push_back(dave);
                std::cout<<mn.back()->toString()<<std::endl;}
                break;
            case 6:{
                ProjectManager* dave = new ProjectManager(name, worktime);
                dave->setId(id);
                dave->setPosition(pos);
                dave->setPrName(project);
                pmn.push_back(dave);
                std::cout<<pmn.back()->toString()<<std::endl;}
                break;
            case 7:{
                SeniorManager* dave = new SeniorManager(name, worktime);
                dave->setId(id);
                dave->setPosition(pos);
                dave->setPrName(project);
                smn.push_back(dave);
                std::cout<<smn.back()->toString()<<std::endl;}
                break;
        }

    }
}

WFactory::~WFactory()
{
    //dtor
}
