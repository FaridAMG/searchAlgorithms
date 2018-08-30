//
// Created by farida on 29/08/18.
//

#include <algorithm>
#include <cmath>
#include "binarySearch.h"

binarySearch::binarySearch(const std::vector<int> &listToSearch) : listToSearch(listToSearch) {

    sortList();

}

binarySearch::binarySearch(const std::list<int> &listToSearch) {

    this->listToSearch.reserve(listToSearch.size());
    std::copy(std::begin(listToSearch), std::end(listToSearch), std::back_inserter(this->listToSearch));

    sortList();

}

void binarySearch::sortList() {

    std::sort(listToSearch.begin(),listToSearch.end());

}

void binarySearch::setNumberToFind(int numberToFind) {
    binarySearch::numberToFind = numberToFind;
}

bool binarySearch::doesItExist() {

    double size = listToSearch.size();
    return doesItExistAux(0, size, (size-0)/2 );

}


bool binarySearch::doesItExistAux(double p1, double p2, double mid) {
    mid = floor(mid);


    if(listToSearch[mid] == numberToFind) {
        return true;
    }else if(p2 == p1+1){
        if(p2 == numberToFind or p1 == numberToFind){
            return true;
        }else{
            return false;
        }
    }else if(numberToFind < mid){
        p2 = mid;
        mid = (p2 - p1)/2;
        doesItExistAux(p1, p2, mid);
    }else if(numberToFind > mid){
        p1 = mid;
        mid = mid+((p2 - p1)/2);
        doesItExistAux(p1, p2, mid);
    }


    return false;
}




