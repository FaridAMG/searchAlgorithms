//
// Created by farida on 29/08/18.
//

#include "secuentialSearch.h"

secuentialSearch::secuentialSearch(const std::list<int> &listToSearch) : listToSearch(listToSearch) {}

void secuentialSearch::setNumberToFind(int numberToFind) {
    secuentialSearch::numberToFind = numberToFind;
}

bool secuentialSearch::doesItExsist() {

    //std::list<int>::iterator it;
    int iter = -1;
    std::list<int> lts = listToSearch;

    while(lts.size()>0){

        iter ++;
        if(lts.front() == numberToFind){
            slot = iter;
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

