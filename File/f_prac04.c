#include<stdio.h>
#define Sol_NUM 3 //�����̐�


typedef struct
{
	char Wname[20];
	int bullet;
	float atk;
}Weapon;

typedef struct
{
	char name[20];
	int hp;
	Weapon wpn;
}Soldier;

void Setinfo(Soldier* s, char* filename);
void Display(Soldier *s);

main()
{
	Soldier sols[Sol_NUM];
	Setinfo(sols, "file04.txt");
	Display(sols);
}
void Setinfo(Soldier* s, char* filename)
{
	FILE* fp;
	int i;
	if (fp = fopen(filename, "r"))
	{
		for (i = 0; i < Sol_NUM; i++)
		{
			fscanf(fp, "%s%d%s%d%f", (s+i)->name, &(s+i)->hp, (s+i)->wpn.Wname, &(s+i)->wpn.bullet, &(s+i)->wpn.atk);
		}
		fclose(fp);
	}
	else
	{
		printf("�t�@�C�����ǂݍ��߂܂���\n");
	}
}
void Display(Soldier* s){
	for (int i = 0; i < Sol_NUM; i++){
		printf("���O:%s �̗�:%d\n", (s + i)->name, (s + i)->hp);
		printf("����:%s �c�e��:%d �U����:%.2f\n", (s + i).wpn.Wname, (s + i).wpn.bullet, (s + i).wpn.atk);
	}
}