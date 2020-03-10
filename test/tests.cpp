#include "gtest/gtest.h"
#include <iostream>
#include <vector>
#include <string>

#include "Cleaner.h"
#include "Driver.h"

#include "Tester.h"
#include "Programmer.h"
#include "Teamleader.h"

#include "Manager.h"
#include "ProjectManager.h"
#include "SeniorManager.h"

#include "Project.h"
#include "Factory.h"



TEST(init_test1, init1)
{
Cleaner cleaner_1(1,"name_1","Cleaner", 500);
EXPECT_EQ("name_1", cleaner_1.get_name());
}
TEST(init_test2, init2)
{
auto *project1 = new Project("project1_title", 1048576);
Programmer programmer_4(4,"name_4","Programmer",4000, 10,project1);
EXPECT_EQ("Programmer", programmer_4.get_occupation());
}
TEST(payment_test3, init3)
{
Cleaner cleaner_1(1,"name_1","Cleaner", 500);
cleaner_1.set_worktime(100);
cleaner_1.calc_payment();
EXPECT_EQ(112500, cleaner_1.get_payment());
}
TEST(payment_test4, init4)
{
auto *project1 = new Project("project1_title", 1048576);  
Programmer programmer_4(4,"name_4","Programmer",4000, 10,project1);
programmer_4.set_worktime(100);
programmer_4.calc_payment();
EXPECT_EQ(1004850, programmer_4.get_payment());
}
