/*
6. 10000�� �̸��� �ݾ��� �Է¹޾� 10��, 50��, 100��, 500�� ������ �ּ��� �ѹ����� �̿��Ͽ� �Էµ� �ݾ��� ��Ÿ���� ������ ������ �ּҰ� �Ǵ� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� ��� 1500���� �Է��ϸ� ������ ���� ����մϴ�.
500�� : 2��
100�� : 4��
50�� : 1��
10�� : 5��


*/

#include <stdio.h>

 

void printCoin(int coin[4], int money);

 

int main(void)

{

        int coin[4] = { 500, 100, 50, 10 }; //500�� 100�� 50�� 10��

        int nn, money, limit=10000;
        
        
        do
        {
		
           
           
               printf("�ݾ��Է�(1��������): ");

               scanf("%d", &money);
       

      
        }while(money > limit);
        printCoin(coin, money - (500 + 100 + 50 + 10)); //�������� �ּ� �ѹ����� ����ߴ�

        return 0;

}



void printCoin(int coin[4], int money)

{

        int i, result[4] = { 0, 0, 0, 0 };

        for (i = 0; i < 4; i++)

        {

               while (1)

               {

                       if (money - coin[i] >= 0) //������ ���� �� �� ���� ������

                       {

                              money -= coin[i];

                              result[i]++;

                       }

                       else

                              break;

               }

        }

        printf("500��:%d��\n100��:%d��\n50��:%d��\n10��:%d��\n", result[0] + 1, result[1] + 1, result[2] + 1, result[3] + 1);

}
