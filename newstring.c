/*
  names라는 배열에 글자를 저장하고  0번째 인덱스를 한번에 출력
  0번째 인덱스의 0번째 인덱스의 첫글자 ~ 마지막글자를 출력해보았다.
*/

#include<stdio.h>
#include<cs50.h>

int main(void){
    string names[4];

    names[0] = "EMMA";
    names[1] = "RODRIGO";
    names[2] = "BRIAN";
    names[3] = "DAVID";

    printf("%s\n", names[0]);
    printf("%c%c%c%c\n", names[0][0], names[0][1], names[0][2], names[0][3]);
}
