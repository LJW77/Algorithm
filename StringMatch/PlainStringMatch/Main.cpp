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
	printf("请输入主串S的长度：");
	scanf_s("%d", &n);
	printf("请输入字符串S：");
	scanf_s("%s", S, n + 1);
	printf("请输入子串T的长度：");
	scanf_s("%d", &m);
	printf("请输入字符串T：");
	scanf_s("%s", T, m + 1);
	printf("子串在主串的位置为：%d\n", index(S, T));
	return 0;
}

int index(String S, String T)
{
	int n = (int)strlen(S);    //主串的长度
	int m = (int)strlen(T);    //子串的长度
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