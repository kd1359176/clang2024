#include<stdio.h>

#define STACKSIZE 8    //�X�^�b�N�T�C�Y
int stack[STACKSIZE];  //�X�^�b�N�̈�p�z��
int sp = 0;            //�X�^�b�N�|�C���g�i�z��̓Y�����p�j

//�֐��v���g�^�C�v�錾
void display(void);
int push(int d);
int pop(int* pd);

//���C���֐�
main()
{
	int key, data, result;

	do {
		printf("\n\n�v�b�V����i�A�|�b�v��o����͂���>");
		key = getche();
		printf("\n");

		//�v�b�V������
		if (key == 'i')
		{
			printf("�f�[�^����>");
			scanf("%d", &data);
			result = push(data);
			if (result == -1)
			{
				printf("\n***�X�^�b�N�������ς��ł�****\n");
			}
			else
			{
				display();
			}
		}
	

	//�|�b�v����
		if (key == '0')
		{
			result = pop(&data);
			if (result == -1)
			{
				printf("\n****�X�^�b�N����ł�****\n");
			}
			else
			{
				printf("�X�^�b�N����f�[�^�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}

void display(void)
{
	int i;

	printf("\n===���݂̃X�^�b�N���e===\n");
	for (i = 0; i < STACKSIZE; i++)
	{
		printf("stack[%2d]��%5d", i, stack[i]);
		if (i == sp)
		{
			printf("��sp�������Ă��鏊�i����sp��%d)", sp);//�m�F�p
		}
		printf("\n");
	}
	return;
}

//�X�^�b�N�Ƀf�[�^��ςށi�v�b�V������j�֐�
int push(int d)
{
	if (sp>=STACKSIZE) { return -1; }//�X�^�b�N������t�̎�
	stack[sp]=d;
	sp++;
	return 0;
}

/// <summary>
/// /�X�^�b�N����f�[�^�����o���i�|�b�v����j�֐�
/// </summary>
/// <param name="d"></param>
/// <returns></returns>
int pop(int *pd)
{
	if (sp<=0) { return -1; }//�X�^�b�N����̎�
	*pd=stack[sp];
	stack[sp]=0;
	stack[sp] = 0;//�m�F���₷�����邽��
	return 0;
}