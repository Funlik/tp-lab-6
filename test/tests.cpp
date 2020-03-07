#include "gtest/gtest.h"
#include "WFactory.h"
//basic function test

TEST(test1,task1)
{
    WFactory fact;
    Driver* dean = fact.createDriver("Test", 123);
    
    EXPECT_EQ("Test", dean->getName());
}
//personal calc() test
TEST(test1,task2)
{
    WFactory fact;
    Driver* dean = fact.createDriver("Test", 123);
    dean->setWorktime(20);
    
    dean->calc();
    
    EXPECT_EQ(2460, dean->Employee::getSal());
}

//engineer calc() test
TEST(test1,task3)
{
    WFactory fact;
    Programmer* dean = fact.createProg("Test", 123);
    dean->setWorktime(20);
    
    dean->calc(10, 2000);
    
    EXPECT_EQ(2660, dean->Employee::getSal());
}

//heading calc() test
TEST(test1,task4)
{
    WFactory fact;
    TeamLeader* dean = fact.createTL("Test", 123);
    dean->setWorktime(20);
    dean->setEmpCount(20);

    dean->calc(10, 2000);
    
    EXPECT_EQ(3460, dean->Employee::getSal());
}

