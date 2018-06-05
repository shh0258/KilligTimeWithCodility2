//
//  PassingCars.cpp
//  KillingTimeWithCodility2
//
//  Created by user on 2018. 6. 1..
//  Copyright © 2018년 han. All rights reserved.
//

#include "PassingCars.hpp"

int solution7(vector<int> &A) {
    long counter=0;
    int mul=0;
    vector<int>::iterator iter;
    for(iter=A.begin(); iter!=A.end(); ++iter) {
        if(*iter==1) {
            counter+=((*iter)*mul);
        } else {
            mul++;
        }
    }
    return (counter>1000000000) ? -1 : (int)counter;
}
