#include <stdio.h>

void number_to_word(int c){
	switch (c) {
	case '0':                         //label integer만
		printf("%c: Zero\n", c);
		break;
	case '1':
		printf("%c: One\n", c);
		break;
	case '2':
		printf("%c: Two\n", c);
		break;
	case '3':
		printf("%c: Three\n", c);
		break;
	case '4':
		printf("%c: Four\n", c);
		break;
	case '5':
		printf("%c: Five\n", c);
		break;
	case '6':
		printf("%c: Six\n", c);
		break;
	case '7':
		printf("%c: Seven\n", c);
		break;
	case '8':
		printf("%c: Eight\n", c);
		break;
	case '9':
		printf("%c: Nine\n", c);
		break;
/*	case'q':
	case'Q': running = 0; break;
*/	
	
	default:
		printf("숫자를 입력하세요.\n");
	
	}
}

int main()
{
	int running = 1;     //int running; runnung=1;
	
	while(running){
	printf("숫자 키를 입력하세요. 해당하는 영단어를 알려드리겠습니다. \n");
	printf("Program을 끝내시려면 q를 입력하시오.. \n\n");
	printf(">");                            //<- echo
	char c = getch();                       //no echo : 키값을 출력하지 않고 반환  <- 키보드에서 숫자눌러도 콘솔창에 숫자가 안뜸
	//char c1 = getchar();                  // [enter]필요.
	
	if(c == 'q'){
		running = 0;
	}

	else {
		number_to_word(c);
	}
   
  }
  return 0;
 }

	/*
	if (c == '1')
	{
		printf("%c: One\n", c);
	}
	else if (c == '2')
	{
		printf("%c: Two\n", c);
	}
	else if (c == '3')
	{
		printf("%c: Three\n", c);
	}
	else if (c == '4')
	{
		printf("%c: Four\n", c);
	}
	else if (c == '5')
    {
	printf("%c: Five\n", c);
	}
    else if (c == '6')
    {
	printf("%c: Six\n", c);
	}
	else if (c == '7')
    {
	printf("%c: Seven\n", c);
	}
	else if (c == '8')
	{
		printf("%c: Eight\n", c);
	}
	else if (c == '9')
	{
		printf("%c: Nine\n", c);
	}
	else
	{
		printf("%c: One\n", c);
	}

}*/