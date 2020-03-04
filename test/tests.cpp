#include "gtest/gtest.h"
#include "gtest/gtest.h"
#include <iostream>
#include "Employee.h"
#include "Personal.h"
#include "WorkTime.h"
#include "Engineer.h"
#include "Manager.h"
#include <cstdlib>
#include "Project.h"

TEST(testWorktime, init1) {
Employee * temp = new Driver(50,1,"test testov testovic",0,"Driver");
temp->setWorktime(12);
EXPECT_EQ(600+350, temp->Calculate());
}

TEST(testWorktimePlusProject, init2) {
Project NewProject1("TEST1",1000);
Tester Tester1(0.5,220,2,"TESTOVA VIKA TESTOVNA",0,"Tester");
Tester1.setWorktime(10);
Tester1.Add_to_Project(&NewProject1);
EXPECT_EQ(220*10+150+0.5*1000,Tester1.Calculate());
}

TEST(testALL, init3) {
Project NewProject1("TEST2",1000);
TeamLeader Lead1(0.4,200,2,"TESTOVA VIKA TESTOVNA",0,"TeamLeader",2,100);
Lead1.setWorktime(10);
Lead1.Add_to_Project(&NewProject1);
EXPECT_EQ(200*10+100*2+0.4*1000,Lead1.Calculate());
}

TEST(testProject, init4) {
Project NewProject1("TEST1",1000);
vector<Manager*> Managers1;
vector<Engineer*> Engineers1;
Programmer Prog1(0.5,220,1,"TESTOVA VIKA TESTOVNA",14,"Programmer");
Engineers1.emplace_back(&Prog1);
Tester Tester1(0.5,220,2,"TESTOVA VIKA TESTOVNA",8,"Tester");
Engineers1.emplace_back(&Tester1);
ProjectManager Man1(0.25,3,"MANAGEROV MANAGER MANAGEROVICH",7,"ProjectManager",2,500);
Managers1.emplace_back(&Man1);
NewProject1.Make_Team(Engineers1,Managers1);
EXPECT_EQ(3,NewProject1.Number_of_Managers()+NewProject1.Number_of_Engineers());
}

TEST(getterTest, initprofname) {
Cleaner Cleantest(50,1,"test testov testovich",0,"Cleaner")
EXPECT_EQ("Cleaner", Cleantest.Tell_me_your_profession());
}

TEST(testHeadplusProj, init6) {
Project NewProject1("TEST3",2000);
ProjectManager Man1(0.25,3,"MANAGEROV MANAGER MANAGEROVICH",7,"ProjectManager",2,500);
NewProject1.AddManager(&Man1);
EXPECT_EQ(2000*0.25+2*500,Man1.Calculate());
}

TEST(testOnlyProject, init7) {
Project NewProject1("TEST4",10000);
Manager newMan(0.7  ,0,"K",20,"Manager");
NewProject1.AddManager(&newMan);
EXPECT_EQ(7000,newMan.Calculate());
}