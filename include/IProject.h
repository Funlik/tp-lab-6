#pragma once

#include "ProjectBudget.h"

class IProject {
protected:
	virtual int paymentProject() = 0;
	virtual void setProject(ProjectBudget* project) = 0;
	virtual ProjectBudget* getProject() = 0;
};
