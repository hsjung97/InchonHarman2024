#include <stdio.h>
//#include <conio.h>

int test01();         //�Լ��� ������Ÿ��
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
        printf("���ڸ� �Է��ϼ���.\n");
    }
}
*/



int test01() {

     char* str[] = {"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Zero"};  //���ڿ� ������ �迭
     printf("���� Ű�� �Է��ϼ���. �ش��ϴ� ���ܾ �˷��帮�ڽ��ϴ�.\n");
     printf("���α׷��� �����÷��� 'Q'Ű�� �Է��ϼ���.\n"); 
   
    
    int n = 1;
    int arr[2];

    while (n) {


        printf(">");
        char c = getch();

        int m = c - 0x30;                                 // ASCII --> num
        printf("%c: %s\n", c, str[m]);
        
        
        /*
                if (c == 'q') {
                    n = 0; // q�� �ԷµǸ� ���� ����
                }
                else {
                    number_to_word(c); // �Է¹��� ���ڿ� �ش��ϴ� ���� �ܾ� ���
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

void test02(int a)                                         //������Ÿ���� �����ؼ� main�Լ� �ڵ� �Լ����� ����
{ 
    char ca[] = "Hello";                                   //ca[0]:H  .... ca[4]:'o' ca[5]:\0
    
    for (int i = 0; i < 10; i++)   //0 ~ 5
    {
        printf("ca[%d] : %c  (%02x)\n", i, ca[i], ca[i]);  //  02x 2�ڸ� 16����(���ڸ� 0ä��)
    }
   


    ca[2] -= 1;    //�������� ��������� �˾ƺ��� ���� �߰�
    ca[3] -= 1;
    for (int i = 0; i < 10; i++)   //0 ~ 5
    {
        printf("ca[%d] : %c  (%02x)\n", i, ca[i], ca[i]);  //  02x 2�ڸ� 16����(���ڸ� 0ä��)
    }


}

