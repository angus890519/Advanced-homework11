/* �p������׹��-�i���m�ߧ@�~-�@�~11 */
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/04/11 16:31 */
/*2019/1-2��o�����X 
�S�O���G00106725 
�P���Τ@�o�������p8��Ƹ��X�P�S�O�����X�ۦP�̼���1,000�U��
�S���G90819218�A�P���Τ@�o�������p8��Ƹ��X�P�S�����X�ۦP�̼���200�U��
�Y��1�G13440631�A�P���Τ@�o�������p8��Ƹ��X�P�Y�����X�ۦP�̼���20�U��
�Y��2�G26650552�A�P���Τ@�o�������p8��Ƹ��X�P�Y�����X�ۦP�̼���20�U��
�Y��3�G09775722�A�P���Τ@�o�������p8��Ƹ��X�P�Y�����X�ۦP�̼���20�U��
�G���G�P���Τ@�o�������p��7��Ƹ��X�P�Y���������X��7��ۦP�̦U�o����4�U��
�T���G�P���Τ@�o�������p��6��Ƹ��X�P�Y���������X��6��ۦP�̦U�o����1�U��
�|���G�P���Τ@�o�������p��5��Ƹ��X�P�Y���������X��5��ۦP�̦U�o����4�d��
�����G�P���Τ@�o�������p��4��Ƹ��X�P�Y���������X��4��ۦP�̦U�o����1�d��
�����G�P���Τ@�o�������p��3��Ƹ��X�P�Y���������X��3��ۦP�̦U�o����2�ʤ�
�W�}����1�G809�A�P���Τ@�o�������p��3��Ƹ��X�P�W�}�������X�ۦP�̦U�o����2�ʤ�
�W�}����2�G264�A�P���Τ@�o�������p��3��Ƹ��X�P�W�}�������X�ۦP�̦U�o����2�ʤ�
*/
#include<stdio.h> //��ܮw 
#include<string.h> //�����n�i��r����A�ҥH�ޤJstring.h�����Y��
 
int main()
{
 
  char te1[10];  //�ŧi�@�Ӧr��}�C�A�S�O��(1000�U)�}�C
  char te2[10];  //�ŧi�@�Ӧr��}�C�A�S��(200�U)���}�C
  char to1[10];  //�ŧi�@�Ӧr��}�C�A�Y��1(20�U)���}�C
  char to2[10];  //�ŧi�@�Ӧr��}�C�A�Y��2(20�U)���}�C
  char to3[10];  //�ŧi�@�Ӧr��}�C�A�A�Y��3(20�U)���}�C
  char six1[5];  //�ŧi�@�Ӧr��}�C�A�o�̥u���5�Ӧr���A�B���W�}����1(200)���}�C
  char six2[5];  //�ŧi�@�Ӧr��}�C�A�o�̥u���5�Ӧr���A�B���W�}����2(200)���}�C
  char number[10]; //�o�����X��10�X 
  // fgets() �q�ɮפ@��@�檺Ū����ơA�@�ݤT�ӰѼơA�Ĥ@�ӰѼƬ��x�s��J��ƪ��}�C�A�ĤG�ӰѼƬ��Ӧ�̦h�X�Ӧr���A�ĤT�ӰѼƬ����V���c FILE ������
  printf("�п�J�S�O�������X:"); //��J�S�O�����X
  fgets(te1,10,stdin); 
 
  printf("�п�J�S�������X:"); //��J�S�������X 
  fgets(te2,10,stdin);
 
  printf("�п�J�Y��(�@)�����X:");//��J�Y��(�@)�����X 
  fgets(to1,10,stdin);
 
  printf("�п�J�Y��(�G)�����X:");//��J�Y��(�G)�����X  
  fgets(to2,10,stdin); 
 
  printf("�п�J�Y��(�T)�����X:");//��J�Y��(�T)�����X  
  fgets(to3,10,stdin);
 
  printf("�п�J�W�}����(�@)�����X:");//��J�W�}����(�@)�����X  
  fgets(six1,5,stdin);
 
  printf("�п�J�W�}����(�G)�����X:");//��J�W�}����(�G)�����X  
  fgets(six2,5,stdin);
 
  printf("�п�J�o�����X:\n"); //�q�o�̶}�l�ШϥΪ̿�J�n�諸�o�����X
  
  // strcmp �����
  //strcmp(str1, str2),str1�G�o�O�Ĥ@�ӭn������r�Ŧ�,str2�G�o�O�ĤG�Ӫ��r�Ŧ�i�����C 
 while(fgets(number,10,stdin)) //�u�n�ϥΪ̦���J���X�N�@������o�Ӱj��
 {
        if (strcmp(number,te1)==0) //��� 
        {
           printf("���ߧA���F�S�O��!���B��1000�U��!\n");
        }
 
        else if (strcmp(number,te2)==0)//��� 
        {
           printf("���ߧA���F�S��!���B��200�U��!\n");
        }
 
        else if (strcmp(number,to1)==0)//��� 
        {
            printf("���ߧA���F�Y��!���B��20�U��!\n");
        }
 
        else if (strcmp(number,to2)==0)//��� 
        {
            printf("���ߧA���F�Y��!���B��20�U��!\n");
        }
 
        else if (strcmp(number,to3)==0)//��� 
        {
            printf("���ߧA���F�Y��!���B��20�U��!\n");
        }
 
        else if (strncmp(&number[1],&to1[1],7)==0)//��� 
        {
            printf("���ߧA���F�G��!���B��40000��!\n");
        }
 
        else if (strncmp(&number[1],&to2[1],7)==0)//��� 
        {
            printf("���ߧA���F�G��!���B��40000��!\n");
        }
 
        else if (strncmp(&number[1],&to3[1],7)==0)//��� 
        {
            printf("���ߧA���F�G��!���B��40000��!\n");
        }
 
        else if (strncmp(&number[2],&to1[2],6)==0)//��� 
        {
            printf("���ߧA���F�T��!���B��10000��!\n");
        }
 
        else if (strncmp(&number[2],&to2[2],6)==0)//��� 
        {
            printf("���ߧA���F�T��!���B��10000��!\n");
        }
 
        else if (strncmp(&number[2],&to3[2],6)==0)//��� 
        {
            printf("���ߧA���F�T��!���B��10000��!\n");
        }
 
        else if (strncmp(&number[3],&to1[3],5)==0)//��� 
        {
            printf("���ߧA���F�|��!���B��4000��!\n");
        }
 
        else if (strncmp(&number[3],&to2[3],5)==0)//��� 
        {
            printf("���ߧA���F�|��!���B��4000��!\n");
        }
 
        else if (strncmp(&number[3],&to3[3],5)==0)//��� 
        {
            printf("���ߧA���F�|��!���B��4000��!\n");
        }
 
        else if (strncmp(&number[4],&to1[4],4)==0)//��� 
        {
            printf("���ߧA���F����!���B��1000��!\n");
        }
 
        else if (strncmp(&number[4],&to2[4],4)==0)//��� 
        {
            printf("���ߧA���F����!���B��1000��!\n");
        }
 
        else if (strncmp(&number[4],&to3[4],4)==0)//��� 
        {
            printf("���ߧA���F����!���B��1000��!\n");
        }
 
        else if (strncmp(&number[5],&to1[5],3)==0)//��� 
        {
            printf("���ߧA���F����!���B��200��!\n");
        }
 
        else if (strncmp(&number[5],&to2[5],3)==0)//��� 
        {
            printf("���ߧA���F����!���B��200��!\n");
        }
 
        else if (strncmp(&number[5],&to3[5],3)==0)//��� 
        {
            printf("���ߧA���F����!���B��200��!\n");
        }
 
        else if (strncmp(&number[5],&six1[0],3)==0)//��� 
        {
            printf("���ߧA���F�W�}����!���B��200��!\n");
        }
 
        else if (strncmp(&number[5],&six2[0],3)==0)//��� 
        {
            printf("���ߧA���F�W�}����!���B��200��!\n");
        }
 
        else //�Ϥ� 
        {
            printf("���ߧA!!�A�S��!!���´f�U!!\n");
        }
 
        printf("�п�J�o�����X:");  //���槹���G��b���ϥΪ̦A��J�O�����X
 }
        return 0;
}
