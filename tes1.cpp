// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main()
// {
//   int no_urut[5] = {10};
//   // no_urut[0]=12;
//   // no_urut[1]=13;
//   // no_urut[2]=14;
//   // no_urut[3]=15;
//   // no_urut[4]=16;

//   // cout << no_urut[0]<< " " << no_urut[1] << " " << no_urut[2] << " " << no_urut[3] << " " << no_urut[4];

//   // no_urut[0] = 20;
//   cout << no_urut[0] << " ";

//   for (int i = 1; i < 5; i++)
//   {
//     no_urut[i] = no_urut[i - 1] + 1;
//     cout << no_urut[i] << " ";
//   }

//   return 0;
// }

#include <iostream>
using namespace std;
// int main()
// {
//   int matrixA[2][3] = {{10}};
//   // matrixA[0][0] = 10;
//   // matrixA[0][1] = 11;
//   // matrixA[0][2] = 12;
//   // matrixA[1][0] = 13;
//   // matrixA[1][1] = 14;
//   // matrixA[1][2] = 15;

//   // cout << matrixA[0][0] << " " << matrixA[0][1] << " " << matrixA[0][2] << endl
//   //      << matrixA[1][0] << " " << matrixA[1][1] << " " << matrixA[1][2];

//   int elementA = 10;
//   for (int i = 0; i < 2; i++)
//   {
//     for (int j = 0; j < 3; j++)
//     {
//       // matrixA[i][j] = matrixA[0][0] + (i + j) + (i * 2);
//       matrixA[i][j] = elementA++;

//       cout << matrixA[i][j] << " ";
//       // elementA++;
//     }
//     cout << endl;
//   }

//   return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int arr1[3][4];
// 	int arr2[4][3];
// 	int arr3[3][3];

// 	for(int b=1;b<=2;b++)
// 		for(int k=1;k<=3;k++)
// 			scanf("%d ",&arr1[b][k]);
// 	for(int b=1;b<=3;b++)
// 		for(int k=1;k<=2;k++)
// 			scanf("%d",&arr2[b][k]);

// 	memset(arr3,0,sizeof(arr3));

// 	for(int b=1;b<=2;b++)
// 	{
// 		for(int k=1;k<=2;k++)
// 		{
// 			for(int g=1;g<=3;g++)
// 			{
// 				arr3[b][k]=arr3[b][k]+arr1[b][g] * arr2[g][k];
// 			}
// 		}
// 	}

// 	for(int b=1;b<=2;b++)
// 	{
// 		for(int k=1;k<=2;k++)
// 			printf("%d ",arr3[b][k]);
// 		printf("\n");
// 	}

// }

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int a, b, c, d;
// 	cout << "Masukkan jumlah baris matrix A :";
// 	cin >> a;

// 	cout << "Masukkan jumlah kolom matrix A :";
// 	cin >> b;

// 	cout << "Masukkan jumlah baris matrix A :";
// 	cin >> c;

// 	cout << "Masukkan jumlah kolom matrix A :";
// 	cin >> d;

// 	if (a + b != c + d)
// 	{
// 		cout << "Matrix tidak bisa dioperasikan!!";
// 		return 0;
// 	}

// 	int A[a][b], B[c][d], C[a][b], max;
// 	for (int i = 0; i < a; i++)
// 	{
// 		cout << "Masukkan array A baris ke-" << i + 1 << endl;
// 		for (int j = 0; j < b; j++)
// 		{
// 			cout << "Masukkan array A kolom ke-" << j + 1 << " : ";
// 			cin >> A[i][j];
// 		}
// 	}
// 	for (int i = 0; i < a; i++)
// 	{
// 		cout << "Masukkan array B baris ke-" << i + 1 << endl;
// 		for (int j = 0; j < b; j++)
// 		{
// 			cout << "Masukkan array B kolom ke-" << j + 1 << " : ";
// 			cin >> B[i][j];
// 		}
// 	}
// 	cout << endl
// 		 << "Matrix A dengan ukuran" << a << "x" << b << endl;
// 	for (int i = 0; i < a; i++)
// 	{
// 		for (int j = 0; j < b; j++)
// 		{
// 			cout << A[i][j] << " 	";
// 		}
// 		cout << endl;
// 	}
// 	cout << endl
// 		 << "Array B dengan ukuran" << a << "x" << b << endl;
// 	for (int i = 0; i < a; i++)
// 	{
// 		for (int j = 0; j < b; j++)
// 		{
// 			cout << B[i][j] << " 	";
// 		}
// 		cout << endl;
// 	}

// 	for (int i = 0; i < a; i++)
// 	{
// 		for (int j = 0; j < b; j++)
// 		{
// 			C[i][j] = A[i][j] + B[i][j];
// 		}
// 	}
// 	cout << endl
// 		 << "Array C dengan ukuran" << a << "x" << b << endl;
// 	for (int i = 0; i < a; i++)
// 	{
// 		for (int j = 0; j < b; j++)
// 		{
// 			cout << C[i][j] << "	";
// 		}
// 		cout << endl;
// 	}
// 	// for (int i = 0; i < 3; i++)
// 	// {
// 	// 	for (int j = 0; j < 5; j++)
// 	// 	{
// 	// 		for (int k = 0; k < 3; k++)
// 	// 		{
// 	// 			for (int l = 0; l < 5; l++)
// 	// 			{
// 	// 				if (C[i][j] > C[k][l])
// 	// 				{
// 	// 					max = C[i][j];
// 	// 					C[i][j] = C[k][l];
// 	// 					C[k][l] = max;
// 	// 				}
// 	// 			}
// 	// 		}
// 	// 	}
// 	// }
// 	max = C[0][0];
// 	for (int i = 0; i < a; i++)
// 	{
// 		for (int j = 0; j < b; j++)
// 		{
// 			if (C[i][j] > max)
// 			{
// 				max = C[i][j];
// 			}
// 		}
// 	}

// 	cout << endl
// 		 << "nilai max : " << max << endl
// 		 << endl;

// 	int CT[b][a];

// 	for (int i = 0; i < b; i++)
// 	{
// 		for (int j = 0; j < a; j++)
// 		{
// 			CT[i][j] = C[j][i];
// 		}
// 	}

// 	for (int i = 0; i < b; i++)
// 	{
// 		for (int j = 0; j < a; j++)
// 		{
// 			cout << CT[i][j] << "	";
// 		}
// 		cout << endl;
// 	}

// 	return 0;
// }