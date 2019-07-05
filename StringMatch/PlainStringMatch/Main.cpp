#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXSIZE 255

typedef char String[MAXSIZE];

int index(String S, String T);

int main()
{
	String S, T;
	int n, m;
	printf("����������S�ĳ��ȣ�");
	scanf_s("%d", &n);
	printf("�������ַ���S��");
	scanf_s("%s", S, n + 1);
	printf("�������Ӵ�T�ĳ��ȣ�");
	scanf_s("%d", &m);
	printf("�������ַ���T��");
	scanf_s("%s", T, m + 1);
	printf("�Ӵ���������λ��Ϊ��%d\n", index(S, T));
	return 0;
}

int index(String S, String T)
{
	int n = (int)strlen(S);    //�����ĳ���
	int m = (int)strlen(T);    //�Ӵ��ĳ���
	int i = 0;
	int j = 0;
	while (i < n&&j < m)
	{
		if (S[i] == T[j])
		{
			++i;
			++j;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if (j > m - 1)
	{
		return i - m + 1;
	}
	else
		return 0;
}