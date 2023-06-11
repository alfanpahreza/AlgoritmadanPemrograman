#include<stdio.h>

void main()
{
	//jumlah mahasiswa
	int n = 100;
	char namaMhs[n][100];
	int nilaiMhs[n];
	//tampilkan Nama dan masukan Hasil
	//1 = lulus, 2 = gagal 
	int i;
	for(i=0;i<n;i++)
	{
		printf("Nama: ");
		scanf("%s",&namaMhs[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("Nama: %s, Masukkan Hasil: ",namaMhs[i]);
		scanf("%d",&nilaiMhs[i]);
	}
	//tampilkan daftar mhs dan nilai
	for(i=0;i<n;i++)
	{
		printf("Nama: %s, Hasil: %d\n",namaMhs[i],nilaiMhs[i]);
	}
	//jumlah lulus dan jumlah gagal
	int jmlLulus=0;
	int jmlGagal=0;
	for(i=0;i<n;i++)
	{
		if(nilaiMhs[i]==1)
		{
			jmlLulus+=1;
		}else
		{
			jmlGagal+=1;
		}
	}
	//jika jumlah lulus > 80%
	if(jmlLulus>(n*80/100))
	{
		printf("Kelulusan kelas telah mencapai target!\n");
	}
	system("pause");
}
