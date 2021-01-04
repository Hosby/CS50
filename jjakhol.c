//홀수와 짝수 구하기 프로그램

#include <stdio.h>//standard input
#include <cs50.h>//cs50 라이브러리

int main(void){// 실행구문
    int n = get_int("n: ");
    if( n % 2 == 0){ //숫자 나누기 2해서 나머지가 0이면 짝수
        printf("even\n"); // 숫자가 짝수면 출력
    }else{ // 숫자 나누기 2해서 나머지가 0인 것을 제외한 나머지 모두(홀수)
        printf("odd\n"); // 숫자가 홀수면 출력
    }
}
