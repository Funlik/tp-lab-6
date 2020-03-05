#include "gtest/gtest.h"
#include "WorkerFactory.h"

TEST(Payment_test, Employee_payment_test) {
    Employee * emp = WorkerFactory::makeDriver("Driver",1,"test",30, 2);
    emp->get_salary();
    EXPECT_EQ(emp->get_current_payment(), 60);
}

