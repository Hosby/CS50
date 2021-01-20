/*
    cs50 라이브러리를 이용해서 금액을 출력하였습니다.
    소수를 곱하게 되므로 float를 사용하였습니다.
*/
#include<stdio.h>
#include<cs50.h>

int main(void){
    //목표 금액 입력
    float money = get_float("목표금액을 입력해주세요: ");
    //목표 금액 출력
    printf("만기 시 받게되실 금액: %.1f \n", money * 1.012);
}
