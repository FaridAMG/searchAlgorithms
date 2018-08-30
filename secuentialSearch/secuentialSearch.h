//
// Created by farida on 29/08/18.
//

#ifndef SEARCHALGORITHMS_BINARYSEARCH_H
#define SEARCHALGORITHMS_BINARYSEARCH_H


#include <list>

class secuentialSearch {

    std::list<int> listToSearch;
    int numberToFind = 0;
    int slot = -10;

public:
    secuentialSearch(const std::list<int> &listToSearch);

    void setNumberToFind(int numberToFind);

    bool doesItExsist();

    int FindSlotOfNumber();

};


#endif //SEARCHALGORITHMS_BINARYSEARCH_H
