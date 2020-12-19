//
// Created by 김성준 on 2020/12/18.
//

#include <iostream>
#include <time.h>

using namespace std;

int sum(int n){
    int ret = 0;
    for(int i = 1 ; i <= n ; i++)
        ret += i;
    return ret;
}

int recursiveSum(int n){
    if(n == 1) return 1;
    return n + recursiveSum(n - 1);
}

int main(){
    int number;
    clock_t start, end;

    cout << "1~N까지의 덧셈 계산기 값 입력 : ";
    cin >> number;

    start = clock();
    cout << "반복문 : " << sum(number) << "\t\t";
    end = clock();
    cout << "측정속도 : " << (double)(end-start)  << endl << endl;


    start = clock();
    cout << "재귀 : " << recursiveSum(number)  << "\t\t";
    end = clock();
    cout << "측정속도 : " << (double)(end-start);
}
