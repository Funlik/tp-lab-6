#ifndef Factory_H
#define Factory_H

#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Factory
{
private:

public:
	Factory() {
		vector <string> positions = {
			"Cleaner",
			"Driver",
			"Programmer",
			"Tester",
			"TeamLeader",
			"Manager",
			"ProjectManager",
			"SeniorManager"
		};

		ifstream fin;
		fin.open("data/staff_names.txt");

		vector<string> human;
		
		string* _tmp = new string;
		for (int i = 0; i < 50; i++) {
			
			if (/*fin.getline() != EOF*/ !fin.eof()) {
				fin >> *_tmp;
				//human = *_tmp
			}
		
		}
		delete(_tmp);

		fin.close();
	}
};

#endif