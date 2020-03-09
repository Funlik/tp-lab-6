#include "gtest/gtest.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>
#include"Company.h"
#include "emploee.h"
#include "Engineers.h"
#include "Interfaces.h"
#include "Managers.h"
#include "Personals.h"
TEST(task1, first cleaner) {
	Cleaner me(1, "Kate Malysheva", 200);

	me.setTime(40);
	me.CalcPayment();

	
	EXPECT_EQ(8000, me.getPayment());
}
}
