#pragma once

class WorkTime {
protected:
	virtual float worktime_salary() = 0;
}; 

class Project {
protected:
	virtual float project_salary() = 0;
};

class Heading {
protected: 
	virtual float heading_salary() = 0;
};
