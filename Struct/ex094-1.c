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
	struct profile data[NIN] = { {"AŽ",2000,2,11,"A"},
		{"BŽ",1999,12,31,"O"},
		{ "CŽ",1999,2,25,"AB" },
		{ "DŽ",2000,3,1,"A" },
		{ "EŽ",1999,5,10,"B" } };
	struct profile* p;
	int i, j, k;
	char l;
	printf("‰½‚ÅŒŸõ‚µ‚Ü‚·‚©H(1:¶‚Ü‚ê”N@2:¶‚Ü‚êŒŽ@3:ŒŒ‰tŒ^):");
	scanf("%d", &j);

	if (j == 1) {
		printf("¶‚Ü‚ê”N‚ð“ü—Í>");
		scanf("%d", &j);
	}
	if (j == 2) {
		printf("¶‚Ü‚êŒŽ‚ð“ü—Í>:");
		scanf("%d", &k);
	}
	if (j == 3) {
		printf("ŒŒ‰tŒ^‚ð“ü—Í>:");
		scanf("%s", &l);
	}
	for (i = 0; i < NIN; i++) {
		if (j == 1) {
			printf("%s--%d”N%dŒŽ%d¶‚Ü‚ê ŒŒ‰tŒ^ - %sŒ^\n", (p + 1)->name, (p + 1)->data.nen, (p + 1)->data.tuki
				, (p + 1)->data.hi, (p + 1)->blood);
		}
		if (data[i].data.tuki == 2) {
			printf("%s--%d”N%dŒŽ%d¶‚Ü‚ê ŒŒ‰tŒ^ - %sŒ^\n", (p + 1)->name, (p + 1)->data.nen, (p + 1)->data.tuki
				, (p + 1)->data.hi, (p + 1)->blood);
		}
		if (j == 3) {
			if (strcmp((p + 1)->blood, l) == 0) {
				printf("%s--%d”N%dŒŽ%d¶‚Ü‚ê ŒŒ‰tŒ^ - %sŒ^\n", (p + 1)->name, (p + 1)->data.nen, (p + 1)->data.tuki
					, (p + 1)->data.hi, (p + 1)->blood);
			}
		}
	}
}