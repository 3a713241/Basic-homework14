#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int x,y,z;
	printf("請輸入三角形3邊長X,Y,Z\n");
	scanf("%d%d%d",&x,&y,&z);
	printf("X=%d,Y=%d,Z=%d\n",x,y,z);
	
	if ((x+y)>z&&(x+z)>y&&(y+z)>x)
	printf("三角形成立的啦\n");
	 
	else
	printf("三角形不成立\n");
	system("PAUSE");
	return 0;
	

	
 
	 
	
}
