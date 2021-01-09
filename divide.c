#include<stdio.h>
#include<cs50.h>

int main(void){
    //사용자한테 x 값 받기
    float x = get_float("x: ");

    //사용자한테 y 값 받기
    float y = get_float("y: ");

    //나누기 후 출력하기
    printf("x / y = %.50f\n", x / y);
}
