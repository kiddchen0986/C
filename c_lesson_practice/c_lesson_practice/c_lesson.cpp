#include "define.h"
#include <stdio.h>
#include <stdlib.h>

#if lesson_11_2
struct student
{
    int num;
    char name[20];
    float score[3];
    float aver;
};
void input(struct student stu[])
{
    printf("Please input three student's No., Name, Score in order： \n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %s %f %f %f", &stu[i].num, &stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
    }
}
struct student max(student stu[])
{
    int i = 0;
    int m = 0;
    for (i = 0; i < 3; i++)
    {
        if (stu[i].aver > stu[m].aver)m = i;
    }
    return stu[m];
}
void print(struct student stud)
{
    printf("The student of higest score: \n");
    printf("Student No. %d\n Name %s\n The scores: %f %f %f\n The average score: %f", stud.num, stud.name, stud.score[0], stud.score[1], stud.score[2], stud.aver);
    getchar();
}
int main(void)
{
    student stu[3];
    student *p;
    p = stu;
    input(p);
    print(max(p));
    student max_student;
    max_student = max(p);

    char c_nun[2];
    itoa(max_student.num, c_nun, sizeof(max_student.num));
    FILE *fp;
    if ((fp = fopen("Result.txt", "w")) == NULL)
    {
        printf("File open error!\n");
        exit(0);
    }
    fprintf(fp, "%s", c_nun);
    fprintf(fp, "%s", "   ");
    fprintf(fp, "%s", max_student.name);
    fprintf(fp, "%s", "\n");
    fprintf(fp, "%s", "xueshengchengji");

    if (fclose(fp)) {                         /* 关闭文件 */
        printf("Can not close the file!\n");
        exit(0);
    }
    p = NULL;

    return 0;


}
#endif
#if lesson_12_1
int main()
{
    int year, month, day;
    int sum=0, leap;
    printf("请输入你的年，月，日（2020/10/11）\n");
    scanf("%d/%d/%d", &year, &month, &day);
    switch(month)
    {
    case 1: sum = 0; break;
    case 2: sum = 31; break;
    case 3: sum = 59; break;
    case 4: sum = 90; break;
    case 5: sum = 121; break;
    case 6: sum = 152; break;
    case 7: sum = 182; break;
    case 8: sum = 213; break;
    case 9: sum = 244; break;
    case 10: sum = 274; break;
    case 11: sum = 305; break;
    case 12: sum = 335; break;
    default: printf("输入的月份不对！\n"); break;
    }
    sum = sum + day;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        leap = 1;
    }
    else
    {
        leap = 0;
    }
    if (leap == 1 && month > 2)
    {
        sum++;
    }
    printf("这是这一年的第 %d 天。", sum);
    printf("\n");

    return 0;
}
#endif
#if lesson_12_2
#include <errno.h>
#include <string.h>

extern int errno;

int main()
{
    FILE * pf;
    int errnum;
    pf = fopen("unexist.txt", "rb");
    if (pf == NULL)
    {
        errnum = errno;
        fprintf(stderr, "Error No.: %d\n", errno);
        perror("Using perror to output error");
        fprintf(stderr, "open file error: %s\n", strerror(errnum));
    }
    else
    {
        fclose(pf);
    }
    return 0;
}
#endif
#if lesson_13_1
#include <string.h>
struct AA {
    int id;
    char lot_id[7];
}a;
struct BB
{
    int id;
    char lot_id[8] = "1234568";
}b;
int main()
{
    b.id = 3;
    a.id = b.id;
    memcpy(a.lot_id, b.lot_id, 8);
    a.lot_id[8] = 0;
    printf("%s", a.lot_id);


    return 0;
}
#endif
#if lesson_13_2
#include <stdint.h>
int main()
{
	uint8_t row;
	uint8_t col;
	uint16_t first_hist[4][60];
	uint16_t second_hist[4][60];
	uint16_t slot;
	uint16_t j;

	uint8_t slot_first;
	uint8_t slot_second;
	uint8_t pixel_first;
	uint8_t pixel_second;
	uint8_t data[6] = { 54, 53, 55, 55, 54, 55};
	/* Zero out the histograms */
	for (slot = 0; slot < 4; slot++) {
		for (j = 50; j < 60; j++) {
			first_hist[slot][j] = 0;
			second_hist[slot][j] = 0;
		}
	}

	for (row = 0; row < 4 - 1; row += 2) {
		for (col = 0; col < 6; col++) {

				slot_second = row / 12;
				slot_first = (row + 1) / 12;
				pixel_second = data[col];
				pixel_first = data[col];


			/* Update histograms */
			first_hist[slot_first][pixel_first]++;
			second_hist[slot_second][pixel_second]++;
		}
	}


	for (int i = 0; i < 12; i++)
	{
		int v = i / 4;
		printf("%d, %d",v, i%4);
		printf("\n");
	}

	int va = 204 * 3 + 205 * 296 + 206 * 1872 + 207 * 692 + 208 * 17;
	int av = va / 2880;
	printf("%d, %d", va, av);
}
#endif
#if lesson_14_1
/*
  两种方式swap，最终结果是不一样的
  只有当指针和对应的值同时操作，swap的值才会有用；
  只操作指针或对应的值不会，swap的值不会有用
  */
void swap_a(int *p1, int *p2)
{
	// 操作指针指向的值，swap的值会有用
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
}
void swap_b(int *p1, int *p2)
{
	// 只操作指针，指针对应的值没有变化，swap不会变化
	// p1, p2不是pa pb，p1 p2是局部变量
	printf("Before swaping:\n p1 = %x, p2 = %x\n *p1 = %d, *p2 = %d\n", p1, p2, *p1, *p2);
	int *p;
	p = p1;
	p1 = p2;
	p2 = p;
	printf("\nAfter swaping:\n p1 = %x, p2 = %x\n *p1 = %d, *p2 = %d\n", p1, p2, *p1, *p2);
}
int main()
{
	int a, b, *pa, *pb;
	pa = &a;
	pb = &b;
	printf("Enter a, b: \n");
	scanf("%d", &a);
	scanf("%d", &b);

	//swap_a(pa, pb);
	//printf("pa = %x, pb = %x\n", pa, pb);
	//printf("*pa = %d, *pb = %d\n", *pa, *pb);

	printf("\n");
	swap_b(pa, pb);
	printf("Outside swaping:\n pa = %x, pb = %x\n *pa = %d, *pb = %d\n", pa, pb, *pa, *pb);

	return 0;
}
#endif
#if lesson_14_2
#include"math.h"
#include"stdio.h"

int main()
{
	int m, n;
	float s, l;
	float(*q)(int, int);

	float area(int a, int b), length(int a, int b);
	float f(int a, int b, float (*p)(int, int));

	scanf("%d%d", &m, &n);
	q = area;
	s = f(m, n, q);
	l = f(m, n, length);

	printf("Areaf of the right triangle is %.2f\n", s);
	printf("Length of the hypotenuse is %.2f\n", l);

	return 0;
}

float area(int a, int b)
{
	float z;
	z = (a * b / 2);
	return(z);
}
float length(int a, int b)
{
	float z;
	z = sqrt(a*a + b * b);
	return(z);
}
float f(int a, int b, float(*p)(int, int))
{
	float y;
	y = (*p)(a, b);
	return(y);
}
#endif
#if lesson_14_3
#include"string.h"
int main()
{
	int n;
	char a[] = "computer";
	char b[10];
	char *p, *q;
	p = a, q = b;

	scanf("%d", &n);
	if (strlen(a) > n)
	{
		p = p + n - 1;
	}
	for (; *p != 0; p++, q++)
	{
		*q = *p;
	}
	*q = '\0';

	printf("String a: %s\n", a);
	printf("String b: %s\n", b);
	//printf("string a is : %s\n", p);
	//printf("string b is : %s\n", q);
	return 0;
}
#endif
#if lesson_14_4
#include"stdio.h"
#include"string.h"
void sort(char *name[], int);
int main()
{
	char *bname[3];
	char name[3][44] = { "Programming in ANSI C", "BASIC", "Visual C++ 6.0 Programming"};
	for (int i = 0; i < 3; i++)
	{
		bname[i] = name[i];
		//printf("%s", bname[i]);
	}

	int i, m;
	m = sizeof(bname) / sizeof(char *);
	sort(bname, m);
	printf("\n");
	for (i = 0; i < m; i++)
	{
		printf("%8s ", bname[i]);
	}

	return 0;
}
void sort(char *name[], int n)
{
	char *t;
	int i, j, k;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(name[k], name[j]) > 0)
			{
				k = j;
			}
		}
		if (k != i)
		{
			t = name[i];
			name[i] = name[k];
			name[k] = t;
		}
	}
}
#endif