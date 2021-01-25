/*
  점수를 코드 작성자가 직접 코드를 바꿔서 개수를 수정할 수 있지만
  점수의 개수가 무수히 많이 늘어날 경우에는 코드 작성하기가 힘들어진다.
  조금 더 나은 scores2를 작성해본다.
*/
#include <cs50.h>
#include <stdio.h>

const int N = 3;

int main(void)
{
    // 점수 배열 선언 및 값 저장
    int scores[N];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    // 평균 점수 출력
    printf("Average: %i\n", (scores[0] + scores[1] + scores[2]) / N);
}
