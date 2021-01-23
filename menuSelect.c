#include <stdio.h>
#include <cs50.h>
#include <string.h>
/* strcmp(문자열끼리 비교할 수 있는 함수를 사용하기 위해서 #include <string.h>를 추가하였습니다.
   strcmp함수는 비교하는 대상과 같으면 0을 반환하고 다르다면 1을 반환합니다.
   그러므로 조건문에 0과 같다면 해당 구문을 출력하게 만들었습니다.*/

int main(void){

    string day = get_string("요일을 입력하세요: " );

    if(strcmp(day, "월요일" == 0)){
        printf("월요일 : 청국장\n");
    }
    else if(strcmp(day, "화요일") == 0){
        printf("화요일 : 비빔밥\n");
    }
    else if(strcmp(day, "수요일") == 0){
        printf("수요일 : 된장찌개\n");
    }
    else if(strcmp(day, "목요일") == 0){
        printf("목요일 : 칼국수\n");
    }
    else if(strcmp(day, "금요일") == 0){
        printf("금요일 : 냉면\n");
    }
    else if(strcmp(day, "토요일") == 0){
        printf("토요일 : 소불고기\n");
    }
    else if(strcmp(day, "일요일") == 0){
        printf("일요일 : 오삼불고기\n");
    }
    else
        printf("요일을 인식할 수 없습니다. 다시 입력하세요!\n");
}
