#pragma once

class WorkTime {
protected:
    virtual float worktime_payment() = 0;
};

class Project {
protected:
    virtual float project_payment() = 0;
};

class Heading {
protected:
    virtual float heading_payment() = 0;
};

/* struct PROJECT {
    std::string name;
    float budget; // $
};

const PROJECT projects[] = { { "Government", 300000 },
                             { "AlfaBank"  , 224000 } };

const PROJECT* whichProject(std::string project_name) {
    for (int i = 0; i < (sizeof(projects) / sizeof(projects[0])); i++) {
        std::string buf = projects[i].name;
        if (buf == project_name)
            return &projects[i];
    }
}*/