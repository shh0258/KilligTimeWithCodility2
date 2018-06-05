//
//  main.cpp
//  KillingTimeWithCodility2
//
//  Created by user on 2018. 5. 31..
//  Copyright © 2018년 han. All rights reserved.
//

#include <iostream>
//#include "MinAvgTwoSlice.hpp"
#include "PassingCars.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> A;
    A.push_back(0);
    A.push_back(1);
    A.push_back(0);
    A.push_back(1);
    A.push_back(1);
    cout<<solution7(A)<<endl;
    return 0;
}
