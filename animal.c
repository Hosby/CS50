#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string animal = get_string("좋아하는 동물을 알려주세요\n");
    printf("내가 좋아하는 동물은 %s\n", animal);
}
/*
1. clang -o animal animal.c-> animal.c 를 animal으로 머신코드로 만들어 준다. 매번 animal.c로 부를 필요가 없다.
2. -lcs50 -> l(link) 즉, 파일을 연결해주겠다는 것이다.
3. make animal 위 두가지의 형식을 아예 묶겠다는 의미이다.
*/
