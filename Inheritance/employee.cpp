#include "employee.h"

Employee ::Employee(int idPri , int idPub, string empName){
    publicId = idPub;
    privateId = idPri;
    name = empName;
}

Employee ::Employee(){
    publicId = 111;
    privateId = 999;
    name = "default";
}