//
// Created by 김성준 on 2020/12/17.
// 두 정수의 집합의 포함 관계를 파악하는 잘못된 비교 함수 구현

#include "code3_1.h"
#include <iostream>

using namespace std;

// IntegerSet class -> 정수의 집합을 저장하는 클래스

// < 연산자의 성질
// 1. a < a는 항상 거짓 [비반사성]
// 2. a < b가 참이면 a > b는 거짓 [비대칭성]
// 3. a < b가 참이고 b < c가 참이면 a < c는 참 [전이성]
// 4. a < b와 b < a 모두 거짓이면 a = b는 참 [상등 관계의 전이성]

// 4번 성질에 의하여 하위 코드는 잘못된 비교를 하게 됨

bool isProperSubset(const IntegerSet& a, const IntegerSet& B);

bool operator < (const IntegerSet& a, const IntegerSet& b){
    if(isProperSubset(a, b)) return true;
    if(isProperSubset(b, a)) return false;
    return false;
}




