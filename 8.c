/*

8. ������ �츮���� "���� ��"�� �˷��� "Twinkle, twinkle, little star" ������ �Ϻκ��Դϴ�. ���� �κ��� ������ ���� �ؽ�Ʈ ����(plaintext.txt)�� ������ ���� Caesar ��ȣ��, �ܼ� ��ġ ��ȣ��, XOR ��ȣ������ ��ȯ�� �ؽ�Ʈ ������ �����Ͻÿ�.

Twinkle, twinkle, little star. How I wonder what you are.
Up above the world so high. Like a diamond in the sky.
Twinkle, twinkle, little star. How I wonder what you are.

*/

#include <stdio.h>

#include <string.h>

#include <Windows.h>

 

int main(void)

{
        int i, j;
        char str[3][57]; //plain text�� 3��

        FILE *fp = fopen("C:\\plaintext.txt", "r");

        printf("Caesar ��ȣ��\n");

        printf("Plain Text\n");

        for (i = 0; i < 3; i++)

        {

               for (j = 0; j < 57; j++)

               {

                       fscanf(fp, "%c", &str[i][j]); //�о����

                       printf("%c", str[i][j]); //���

               }

        }

        printf("\n\n");

        printf("Plain Text Caesar ��ȣȭ\n");

        for (i = 0; i < 3; i++)

        {

               for (j = 0; j < 57; j++)

               {

                       str[i][j] -= 3; //3�� ����

                       if (str[i][j] < 0)

                              str[i][j] += 3; //������ 3�� ���ϱ�

                       printf("%c", str[i][j]);

               }

        }

        printf("\n\n");

        fclose(fp);

        Sleep(3000); //��� ������

        system("cls");

        fp = fopen("C:\\plaintext.txt", "r");

        printf("�ܼ� ��ġ ��ȣ��\n");

        printf("Plain Text\n");

        for (i = 0; i < 3; i++)

        {

               for (j = 0; j < 57; j++)

               {

                       fscanf(fp, "%c", &str[i][j]);

                       printf("%c", str[i][j]);

               }

        }

        printf("\n\n");

        printf("Plain Text �ܼ� ��ġ ��ȣ��\n");

        for (i = 0; i < 57; i++)

        {

               for (j = 0; j < 3; j++)

               {

                       printf("%c", str[j][i]); //�ε��� i�� j �ٲٱ�

               }

        }

        printf("\n\n");

        fclose(fp);

        Sleep(3000);

        system("cls");

        fp = fopen("C:\\plaintext.txt", "r");

        printf("XOR ��ȣ��\n");

        printf("Plain Text\n");

        for (i = 0; i < 3; i++)

        {

               for (j = 0; j < 57; j++)

               {

                       fscanf(fp, "%c", &str[i][j]);

                       printf("%c", str[i][j]);

               }

        }

        printf("\n\n");

        printf("Plain Text XOR ��ȣ��\n");

        for (i = 0; i < 3; i++)

        {

               for (j = 0; j < 57; j++)

               {

                       str[i][j] %= 3; //����ũ

                       printf("%c", str[i][j]);

               }

        }

        printf("\n");

        fclose(fp);

        return 0;

}
