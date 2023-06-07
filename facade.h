#ifndef FACADE_H
#define FACADE_H
#include <iostream>
#include <memory>
#include "work_with_file.h"
#include "json_checker.h"

class Facade {
private:
    Work_with_file file_worker; // памагииииииитее нужно хранить имя файла только тута не в главном окне точка аш
    Json_checker json_cheker;
public:
    std::string fp;
    std::string read_operation(const std::string& fp);
    void check_operation(const std::string& ft);
};

#endif // FACADE_H