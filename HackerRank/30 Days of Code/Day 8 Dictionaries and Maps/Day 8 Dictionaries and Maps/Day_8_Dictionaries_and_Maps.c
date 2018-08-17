//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>
//
//
//
//int main() {
//	
//	
//	int n;
//	char pho[100000][10];
//	char str[100000][10];
//	char str1[100000][10];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//	
//		scanf("%s %s", &str[i],&pho[i]);
//
//	}
//	for (int i = 0; i < n; i++)
//	{
//
//		scanf("%s", &str1[i]);
//
//	}
//
//	for (int j =0; j < n; j++)
//	{
//		if (strcmp(str1[j],str[j])==0)
//		{
//			printf("%s=%s\n", str1[j],pho[j]);
//		}
//		else
//		{
//			printf("Not found\n");
//		}
//
//	}
//
//	
//	return 0;
//	
//}
//
//
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct Datas
{
	char pho[100000][10];
	char str[100000][10];
	char str1[100000][10];
	int Number;
}Data;

int main() {



	Data MyData;
	scanf("%d", &MyData.Number);
	for (int i = 0; i < MyData.Number; i++)
	{

		scanf("%s %s", &MyData.str[i], &MyData.pho[i]);

	}
	for (int i = 0; i < MyData.Number; i++)
	{

		scanf("%s", &MyData.str1[i]);

	}

	for (int j = 0; j < MyData.Number; j++)
	{
		if (strcmp(MyData.str1[j], MyData.str[j]) == 0)
		{
			printf("%s=%s\n", MyData.str[j], MyData.pho[j]);
		}
		else
		{
			printf("Not found\n");
		}

	}


	return 0;

}


