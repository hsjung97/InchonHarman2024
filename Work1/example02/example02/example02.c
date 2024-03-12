#include <stdio.h>
//#include <conio.h>
//github에서 최종수정
int test01();         //함수의 프로토타입
void test02(int a);

/*
void number_to_word(int number) {
    switch (number) {
    case '0':
        printf("zero\n");
        break;
    case '1':
        printf("one\n");
        break;
    case '2':
        printf("two\n");
        break;
    case '3':
        printf("three\n");
        break;
    case '4':
        printf("four\n");
        break;
    case '5':
        printf("five\n");
        break;
    case '6':
        printf("six\n");
        break;
    case '7':
        printf("seven\n");
        break;
    case '8':
        printf("eight\n");
        break;
    case '9':
        printf("nine\n");
        break;
    default:
        printf("숫자를 입력하세요.\n");
    }
}
*/



int test01() {

     char* str[] = {"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Zero"};  //문자열 포인터 배열
     printf("숫자 키를 입력하세요. 해당하는 영단어를 알려드리겠습니다.\n");
     printf("프로그램을 끝내시려면 'Q'키를 입력하세요.\n"); 
   
    
    int n = 1;
    int arr[2];

    while (n) {


        printf(">");
        char c = getch();

        int m = c - 0x30;                                 // ASCII --> num
        printf("%c: %s\n", c, str[m]);
        
        
        /*
                if (c == 'q') {
                    n = 0; // q가 입력되면 루프 종료
                }
                else {
                    number_to_word(c); // 입력받은 숫자에 해당하는 영어 단어 출력
                }
            }
        */
    }
    //return 0;
}




main() 
{
    //test01();
      test02(1);
}

void test02(int a)                                         //프로토타입을 선언해서 main함수 뒤도 함수선언 가능
{ 
    char ca[] = "Hello";                                   //ca[0]:H  .... ca[4]:'o' ca[5]:\0
    
    for (int i = 0; i < 10; i++)   //0 ~ 5
    {
        printf("ca[%d] : %c  (%02x)\n", i, ca[i], ca[i]);  //  02x 2자리 16진수(빈자리 0채움)
    }
   


    ca[2] -= 1;    //지역변수 존재범위를 알아보기 위해 추가
    ca[3] -= 1;
    for (int i = 0; i < 10; i++)   //0 ~ 5
    {
        printf("ca[%d] : %c  (%02x)\n", i, ca[i], ca[i]);  //  02x 2자리 16진수(빈자리 0채움)
    }


}

