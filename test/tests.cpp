#include "gtest/gtest.h"
#include "Programmer.h"
TEST(lab6_, test0){
    Programmer* programmer = new Programmer(8,"Jacobs Esmond",40,"programmer",30,2,1000);
    programmer->calc();
    EXPECT_EQ(programmer->getPayment(), 4220);
}