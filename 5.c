/*

5. õ������ �� ���� 0.1�� �����Ͽ� 1�⸶�� ������ 10�Ⱓ �����Ѵٰ� �� �� �����հ踦 ����Ͻÿ�.
hint : 10�� ���� �����հ�� ������ (1+0.1)10�谡 �ȴ�.

*/

#include <stdio.h>

#include <stdlib.h>

#include <math.h>

 

int main(void)

{

        double principle, rate; //���� ������

        double *income; //����

        int i, year;

 

        printf("����(��)");

        scanf("%lf", &principle);

 

        printf("������(%%): ");
 
        scanf("%lf", &rate);

 

        printf("�Ⱓ(��): ");

        scanf("%d", &year);

 

        income = (double*)malloc(sizeof(double)*year);

 

        for (i = 0; i < year; i++)

        {

               income[i] = principle*(double)(pow(1 + 0.01*rate, i + 1)); //����*(1+������)^��ġ�Ⱓ

               printf("%d�� ��ġ��:%.2f��(��%.1f%%)\n", i + 1, income[i], rate);

        }

        free(income); //�޸� ����

        return 0;

}
