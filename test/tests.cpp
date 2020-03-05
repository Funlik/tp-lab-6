#include "gtest/gtest.h"
#include "WorkerFactory.h"

TEST(Payment_test, Employee_payment_test) {
    Employee * emp = WorkerFactory::makeDriver("Driver",1,"test",30, 2);
    emp->get_salary();
    EXPECT_EQ(emp->get_current_payment(), 60);
}

TEST(Payment_test, complex_payment_test){
    //100 базовая ставка + 10 часов с зп 1 в час + 1 за каждого работника + 50 с проекта == 100 + 10 + 10 + 50 == 170
    TeamLeader* tl = WorkerFactory::makeTeamLeader("Team Leader",1,"Sergey Baranenkov", 100, 10, 1);
    tl->set_project(new Specific_project("test", 100));
    tl->set_impact(50);
    for (auto i = 0; i< 10 ; i++){
        tl->add_assigned_programmer(WorkerFactory::makeProgrammer("Programmer",2,"test",0,0,0));
    }
    tl->get_salary();
    EXPECT_EQ(tl->get_current_payment(), 170);
    
}
