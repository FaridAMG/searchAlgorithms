//
// Created by farida on 29/08/18.
//

#ifndef SEARCHALGORITHMS_BINARYSEARCH_H
#define SEARCHALGORITHMS_BINARYSEARCH_H


#include <list>
#include <vector>
#include "binarySearch.cpp"

class binarySearch {

    std::vector<int> listToSearch;
    int numberToFind = -10;

    void sortList();

    bool doesItExistAux(double p1, double p2, double mid);

public:
    explicit binarySearch(const std::vector<int> &listToSearch);

    explicit binarySearch(const std::list<int> &lts);

    void setNumberToFind(int numberToFind);

    bool doesItExist();






};


#endif //SEARCHALGORITHMS_BINARYSEARCH_H
