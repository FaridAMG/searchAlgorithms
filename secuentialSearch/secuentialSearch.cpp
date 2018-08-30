//
// Created by farida on 29/08/18.
//

#include "secuentialSearch.h"

secuentialSearch::secuentialSearch(const std::list<int> &listToSearch) : listToSearch(listToSearch) {}

void secuentialSearch::setNumberToFind(int numberToFind) {
    secuentialSearch::numberToFind = numberToFind;
}

bool secuentialSearch::doesItExsist() {

    std::list<int>::iterator it;
    int iterator = -1;
    std::list<int> lts = listToSearch;

    for(it = lts.begin(); it != lts.end(); it++){

        iterator ++;
        if(lts.front() == numberToFind){
            slot = iterator;
            return true;
        }
        lts.pop_front();

    }

    return false;
}

int secuentialSearch::FindSlotOfNumber() {

    if(slot >= 0){
        return slot;
    }else{

        if(doesItExsist()){
            return slot;
        }

    }
}

