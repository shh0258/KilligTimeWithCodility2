//
//  MinAvgTwoSlice.cpp
//  testforAlgo
//
//  Created by user on 2018. 5. 29..
//  Copyright © 2018년 user. All rights reserved.
//

#include "MinAvgTwoSlice.hpp"
//int solution6(vector<int> &A) {
//    int start = 0, pstart=0;
//    int end = 1, pend=1;
//
//    for(int i=2; i<A.size(); i++) {// for end
//        pend=i;
//        if(calculator(start, end, A) >= calculator(start, pend, A)) {
//            end=pend;
//        }
//
//    }
//    cout<<"end: "<<end<<endl;
//    for(int i=0; i<=end-1; i++) {// for start
//        pstart=i;
//        if(calculator(start, end, A) >= calculator(pstart, end, A)) {
//            start=pstart;
//        }
//    }
//    cout<<"start : "<<start<<endl;
//
//    return start;
//}
//
//double calculator(int start, int end, vector<int> &A){
//    double temp=0;
//    for(int i=start; i<=end; i++) {
//        temp+=A[i];
//    }
//    return temp/(end-start+1);
//}

//int solution6(vector<int> &A) { // not finished yet
//    double total=0, result=0, p_result=0, t_result=0;
//    int start=0;
//    int end=1;
//
//    total=(double)(A[start]+A[end]);
//    result=modTotal(total, start, end);
//    t_result=result;
//    cout<<"0 end: "<<end<<"  start : "<<start<<" total: "<<total<<"  p_result: "<<p_result<<" result: "<<result<<endl;
//
//    while(1){
//        if(end>=(A.size()-1)) {
//            break;
//        }
//        end++;
//        total+=A[end];
//        p_result=modTotal(total, start, end);
//        cout<<"1 loop:::::: end: "<<end<<"  start : "<<start<<" total: "<<total<<"  p_result: "<<p_result<<" result: "<<result<<endl;
//        if(t_result>=p_result) {
//            while(1){
//                if(end-start<2) {
//                    break;
//                }
//                if(result>=p_result) {
//                    result=p_result;
//                }
//                total-=(double)A[start];
//                start++;
//                p_result=modTotal(total, start, end);
//                cout<<"2 loop22222: end: "<<end<<"  start : "<<start<<" total: "<<total<<"  p_result: "<<p_result<<" result: "<<result<<endl;
//                if(result<p_result) {
//                    total+=(double)A[start];
//                    start--;
//                    break;
//                } else {
//                    result=p_result;
//                }
//            }
//        }
//        t_result=p_result;
//    }
//    cout<<"final result: end: "<<end<<"  start : "<<start<<" total: "<<total<<"  p_result: "<<p_result<<" result: "<<result<<endl;
//    return start;
//}
//
//double modTotal(double total, int start, int end) {
//    return total/(end-start+1);
//}

int solution6(vector<int> &A) {
    double result=1.79769e+308;
    int start=0;
    
    for(int i=0; i<A.size()-1; i++) {
        if(result>((double)A[i]+A[i+1])/2) {
            result=((double)A[i]+A[i+1])/2;
            start=i;
            cout<<"1 "<<result<<endl;
        }
    }
    for(int i=0; i<A.size()-2; i++) {
        if(result>((double)A[i]+A[i+1]+A[i+2])/3) {
            result=((double)A[i]+A[i+1]+A[i+2])/3;
            start=i;
            cout<<"2 "<<result<<endl;
        }
    }
    return start;
}














