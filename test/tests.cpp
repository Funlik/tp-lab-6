#include "gtest/gtest.h"
#include <locale.h>
#include "class.h"

TEST(lab6, test1)
{
	Cleaner cleaner(1, "Золотова-Агния-Агаповна", 31, 5000);
	EXPECT_EQ(cleaner.PAYMENT(), 155000.000000);
}

TEST(lab6, task2)
{
	Driver driver(6, "Яшина-Яна-Святославовна", 31, 10000, 500);
	EXPECT_EQ(driver.PAYMENT(), 310500.000000);
}

TEST(lab6, test3)
{
	Programmer programmer(4, "Сияница-Регина-Григоргиевна", 31, 25000, "Proj1", 0.12, 1000000);
	EXPECT_EQ(programmer.PAYMENT(), 895000.000000);
}

TEST(lab6, test4)
{
	Tester tester(3, "Калганова-Татьяна-Максимовна", 31, 20000, "Proj1", 0.05, 1000000);
	EXPECT_EQ(tester.PAYMENT(), 670000.000000);
}

TEST(lab6, test5)
{
	TeamLeader teamleader(2, "Васнецова-Марина-Мечиславовна", 50000, 100, "Proj1", 0.2, 1000000, 9, 1000);
	EXPECT_EQ(teamleader.PAYMENT(), 1759000.000000);
}

TEST(lab6, test6)
{
	Manager manager(7,"Ярмольника-Ефросинья-Поликарповна", 31, "Proj1", 0.05, 1000000);
	EXPECT_EQ(manager.PAYMENT(), 50000.000000);
}

TEST(lab6, test7)
{
	ProjectManager projectmanager(14, "Берёзкина-Алла-Валентиновна", 31, "Proj1", 0.1, 1000000, 2, 1000);
	EXPECT_EQ(projectmanager.PAYMENT(), 102000.000000);
}

TEST(lab6, test8)
{
	SeniorManager seniormanager(18, "Яшенкина-Влада-Никоновна", 31, "ALLPROJECTS", 0.07, 3500000, 27, 1000);
	EXPECT_EQ(seniormanager.PAYMENT(), 202000.000000);
}

TEST(lab6, test9)
{
	Enginer enginer(13, "Машарина-Жанна-Михеевна", 31, 15000, "Project3", 0.12, 1500000);
	EXPECT_EQ(enginer.PAYMENT(), 645000.000000);
}
