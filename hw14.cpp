#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int x,y,z;
	printf("�п�J�T����3���X,Y,Z\n");
	scanf("%d%d%d",&x,&y,&z);
	printf("X=%d,Y=%d,Z=%d\n",x,y,z);
	
	if ((x+y)>z&&(x+z)>y&&(y+z)>x)
	printf("�T���Φ��ߪ���\n");
	 
	else
	printf("�T���Τ�����\n");
	system("PAUSE");
	return 0;
	

	
 
	 
	
}
