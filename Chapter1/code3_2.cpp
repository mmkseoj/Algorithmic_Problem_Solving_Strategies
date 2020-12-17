//
// Created by 김성준 on 2020/12/17.
// 두 정수의 집합의 포함 관계를 파악하는 비교 함수 구현

#include "code3_2.h"
#include <iostream>

using namespace std;


bool isProperSubset(const IntegerSet& a, const IntegerSet& B);

bool operator < (const IntegerSet& a, const IntegerSet& b){
    if(isProperSubset(a, b)) return true;
    if(isProperSubset(b, a)) return false;
    if(a.size() != b.size()) return a.size() < b.size();
    return lexicographical_compare(
            a.begin(), a.end(),
            b.begin(), b.end());
}