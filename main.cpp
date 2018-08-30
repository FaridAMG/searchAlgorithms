#include <iostream>
#include "secuentialSearch/secuentialSearch.h"
#include "binarySearch/binarySearch.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::list<int> lst;
    lst.push_back(32);
    lst.push_back(25);
    lst.push_back(36);
    lst.push_back(8);
    lst.push_back(2);
    lst.push_back(125);
    lst.push_back(45);
    lst.push_back(98);
    lst.push_back(23);
    lst.push_back(13);
    lst.push_back(10);
    lst.push_back(82);
    lst.push_back(74);
    lst.push_back(61);
    lst.push_back(26);

/*
    auto* sec = new secuentialSearch(lst);
    sec->setNumberToFind(123);
    if(sec->doesItExsist()){
        std::cout<< "its true by secuential" <<std::endl;
    }else{
        std::cout<< "its false by secuential" <<std::endl;
    }
*/

    auto binar = new binarySearch();


    return 0;
}