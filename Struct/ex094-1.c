#include<stdio.h>
#include<string.h>

#define NIN 5

struct day {
	char nen;
	int  tuki;
	char hi;
};
struct profile {
	char name[20];
	struct day data;
	char blood[5];
};


main()
{
	struct profile data[NIN] = { {"A��",2000,2,11,"A"},
		{"B��",1999,12,31,"O"},
		{ "C��",1999,2,25,"AB" },
		{ "D��",2000,3,1,"A" },
		{ "E��",1999,5,10,"B" } };
	struct profile* p;
	int i, j, k;
	char l;
	printf("���Ō������܂����H(1:���܂�N�@2:���܂ꌎ�@3:���t�^):");
	scanf("%d", &j);

	if (j == 1) {
		printf("���܂�N�����>");
		scanf("%d", &j);
	}
	if (j == 2) {
		printf("���܂ꌎ�����>:");
		scanf("%d", &k);
	}
	if (j == 3) {
		printf("���t�^�����>:");
		scanf("%s", &l);
	}
	for (i = 0; i < NIN; i++) {
		if (j == 1) {
			printf("%s--%d�N%d��%d���܂� ���t�^ - %s�^\n", (p + 1)->name, (p + 1)->data.nen, (p + 1)->data.tuki
				, (p + 1)->data.hi, (p + 1)->blood);
		}
		if (data[i].data.tuki == 2) {
			printf("%s--%d�N%d��%d���܂� ���t�^ - %s�^\n", (p + 1)->name, (p + 1)->data.nen, (p + 1)->data.tuki
				, (p + 1)->data.hi, (p + 1)->blood);
		}
		if (j == 3) {
			if (strcmp((p + 1)->blood, l) == 0) {
				printf("%s--%d�N%d��%d���܂� ���t�^ - %s�^\n", (p + 1)->name, (p + 1)->data.nen, (p + 1)->data.tuki
					, (p + 1)->data.hi, (p + 1)->blood);
			}
		}
	}
}