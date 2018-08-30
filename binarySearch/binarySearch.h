//
// Created by farida on 29/08/18.
//

#ifndef SEARCHALGORITHMS_BINARYSEARCH_H
#define SEARCHALGORITHMS_BINARYSEARCH_H


#include <list>
#include <vector>

class binarySearch {

    std::vector<int> listToSearch;
    int numberToFind = -10;

public:
    explicit binarySearch(const std::vector<int> &listToSearch);

    void setNumberToFind(int numberToFind);

    bool doesItExist();



private:
    void sortList();

    bool doesItExistAux(double p1, double p2, double mid);

};


#endif //SEARCHALGORITHMS_BINARYSEARCH_H
