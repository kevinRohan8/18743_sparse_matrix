#include <stdio.h>
main()
{
	//CSR Multiplication
	int data[5] = {1,8,7,4,3};
	int col[5] = {0,1,1,0,3};
	int ptr[4] = {0,2,3,4};
	int res[4] = {0,0,0,0};
	int colMatrix[4] = {1,2,3,4};
	int j;
	int k;
	int i;
	int z;
	for (i=0;i<3;i++)
	{	
		j = ptr[i];
		k = ptr[i+1];
		
		for (;j<k;j++)
		{
			z = col[j];
			res[i] = res[i] + data[j] * colMatrix[z]; 
		}
	}
	j = ptr[3];
	for (;j<5;j++)
	{
		z = col[j];
		res[3] = res[3] + data[j] * colMatrix[z]; 
	}

	
	//CSC Multiplication
/*	int data[5] = {1,4,8,7,3};
	int row[5] = {0,2,0,1,3};
	int ptr[3] = {0,2,4};
	int colMatrix[4] = {1,2,3,4};
	int result[4] = {0,0,0,0};
	int j;
	int k;
	int i;
	int z;
	for (i=0;i<2;i++)
	{
		j=ptr[i];
		k = ptr [i+1];
		for (;j<k;j++)
		{
			z=row[j];
			result[z] = result[z] + data[j]*colMatrix[i];
		}
	}
	j = ptr[2];
	for (;j<5;j++)
	{
			z=row[j];
			result[z] = result[z] + data[j]*colMatrix[3];
	}*/

}

