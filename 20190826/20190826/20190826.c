#define _CRT_SECURE_NO_WARNINGS 1

//1.ʵ��strcpy
//2.ʵ��strcat
//3.ʵ��strstr
//4.ʵ��strchr
//5.ʵ��strcmp
//6.ʵ��memcpy
//7.ʵ��memmove

#include<stdio.h>
#include<assert.h>


char* My_strcpy(char* arr2, const char* arr1)
{
	char* ret = arr2;
	assert(arr2 && arr1);
	while (*arr2++ = *arr1++)
	{
		;
	}
	return ret;
}

char* My_strcat(char* arr3, const char* arr1)
{
	char* ret = arr3;
	assert(arr3 && arr1);
	while (*arr3 != '\0')
	{
		arr3++;
	}
	while (*arr3++ = *arr1++)
	{
		;
	}
	return ret;
}

int My_strcmp(const char* str1, const char* str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '/0')
			return 0;
		str1++;
		str2--;
	}
	return *str1 - *str2;
}

int main()
{
	char arr1[20] = "abcdef";
	char arr2[20] = { 0 };
	char arr3[20] = "123456";
	printf("%s\n", My_strcpy(arr2, arr1));
	printf("%s\n", My_strcat(arr3, arr1));
	printf("%d\n", My_strcmp("abc", "abcde"));
	return 0;
}