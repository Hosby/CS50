/*
  이번에는 습관적으로 사용하던 main함수를 명령행 인자를 통해서 사용하였습니다.
  int argc는 명령어의 갯수이고, argv[ ]는 갯수의 인덱스입니다.
  $ ./argu 를 실행하게되면 아래와 같이 결과가 나오게됩니다.
  "hello, world" 왜냐하면 입력받은 인자가 2개가 아니라 1개가 나왔기 때문입니다. 그래서 else문이 실행이 되었습니다.
  
  자, 이제 인자값을 2개를 넣어 보겠습니다.
  $ ./argu Kyle을 입력하게되면
  "hello, Kyle" 이 출력되게 됩니다. 왜냐하면 argc 즉, 인자값을 2개를 받았고 if 첫 조건에 만족하기 때문에
  입력한 Kyle이 argv[1]에 저장이 됩니다.
  여기서 알 수 있는것이 있습니다.
  artgv[0] 은  ./argu가 되는것이고 argv[1]은 제가 입력한 Kyle이 되는것 입니다.
  제가 이해한 내용입니다.
*/

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}
