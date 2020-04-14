/*
7. �Ʒ��� �׸��� ���� �Ľ�Į�� �ﰢ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
hint : �Ľ�Į�� �ﰢ���� ����Ϸ��� ���װ���� �̿��մϴ�.

*/

#include <stdio.h>

 

int Factorial(int n);

int Combination(int n, int r);

void Pascal(int n);

 

int main(void)

{

        int size;

 

        printf("�ﰢ�� ũ�� �Է�: ");

        scanf("%d", &size);

 

        Pascal(size);

        return 0;

}

 

int Factorial(int n)

{

        if (n > 1)

               return n*Factorial(n - 1);

        else

               return 1;

}

 

int Combination(int n, int r)

{

        return Factorial(n) / (Factorial(n - r)*Factorial(r));

}

 

void Pascal(int n)



{
        int i, j; 

        for (i = 0; i <= n; i++)

        {

              

               for (j = 0; j <= i; j++) 

                       printf("%4d", Combination(i, j));

               printf("\n");

        }

       

}
