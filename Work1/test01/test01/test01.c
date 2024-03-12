#include <stdio.h>

main()
{
	//char   vchar = 'f';
	//int    vint  = 10;
	//long   vlong = 4000000000;
	//float  vfloat= 3.4;
	double vdou  = 3141289.0501345;

	printf("\n\n\n\n\n안녕하세요?\n\n\n\n\n");
	printf("정수 출력 테스트 : %d\n",10);                          //4btype  = 32bit = 1111 1111 1111 1111 1111 1111 1111 1111 = 4G =40억
	printf("실수 출력 테스트 : %4.2f\n", 3.141592651234);          //4 
	printf("긴 정수 출력 테스트 : %d\n", 10);                      //4
	printf("긴 실수 출력 테스트 : %12.8lf\n\n\n", 3.141592651234515);  //8



	printf("정수 출력 테스트   : [%12d]\n",10);
	printf("실수 출력 테스트   : [%12.8f]\n",3.141592651234);  
	printf("지수 출력 테스트   : [%12e]\n",1234567890.12121);
	printf("8진수 출력 테스트  : [%12o]\n",1234567890);
	printf("16진수 출력 테스트 : [%12x]\n",1234567890);
	printf("문자 출력 테스트   : [%c]\n", 50);
	printf("문자열 출력 테스트 : [%s]\n", "\n안녕\n");


	//4.2f -> 4개숫자인데 소수점 2째자리까지
	// 안녕하세요?            debug  mode  ->  compile & link 를 통해 .exe  file생성(debug정보 포함)
    //                       release mode  ->  debug 과정없이 execution만
	// 2^10 =1024 =  100_0000_0000 -> 1k 
	
	printf("\n안녕하세요?\n");
	printf("%8x\n %8x\n %8x\n %8x\n\n", &vchar, &vint, &vlong, &vfloat, &vdou);   // -> 0x20만큼 memory할당
	scanf("%c %d %d %f", &vchar, &vint, &vlong, &vfloat, &vdou);   //scanf -> format(8x),\n 등 넣으면 안됨



	printf("정수 출력 테스트   : [%12d]\n",   vint);
	printf("실수 출력 테스트   : [%12.8f]\n", vdou);
	printf("지수 출력 테스트   : [%12e]\n",   vdou);
	printf("8진수 출력 테스트  : [%12o]\n",   vlong);
	printf("16진수 출력 테스트 : [%12x]\n",   vlong);
	printf("문자 출력 테스트   : [%c]\n", vchar);
	printf("문자열 출력 테스트 : [%s]\n","\n안녕하세요\n");


}                        