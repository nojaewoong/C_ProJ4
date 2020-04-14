/*

2. �Է��� 2������ ���� 10������ 8������ ��ȯ�ϴ� �Լ��� ���α׷��� �ۼ��Ͻÿ�.

*/

#include <stdio.h>

#include <string.h>

#include <math.h>

 

long bin_to_dec(char num[]);

long dec_to_octal(long n);

 

int main(void)

{

        char num[20]; //�������� �־��� �迭

        printf("������ �Է�: ");

        scanf("%s", num);

        printf("10������ ��ȯ�ϸ�: %ld\n", bin_to_dec(num));

        printf("8������ ��ȯ�ϸ�: %ld\n", dec_to_octal(bin_to_dec(num)));

        return 0;

}

 

long bin_to_dec(char num[])

{

        long result = 0, idx = 0;
        
        int i;

        for (i = (strlen(num) - 1); i >= 0; i--)

               if (num[idx++] == '1')

                       result += pow(2, i); //1�� ��� 2^i�� �����ش�

        return result;

}

 

long dec_to_octal(long n) //10������ �켱 ��ȯ�ϰ� �ű⼭ 8������ �ٲ��ش�

{

        if (n <= 7)

               return n;

        return dec_to_octal(n / 8) * 10 + n % 8;

}
