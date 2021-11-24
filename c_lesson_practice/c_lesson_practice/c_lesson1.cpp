//#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"stdlib.h"
#include"define.h"
#include"math.h"
#include"string.h"
#include"ctype.h"

#if lesson_2_1
#define PI 3.14
int main()
{
    float r;
    printf("Please enter into r=");
    scanf("%f", &r);
    printf("The area is: %.1f\n", float(PI*r*r));

    return 0;
}
#endif
#if lesson_2_3
int cube(float x);
int main()
{
    float x;
    float result_x3;
    x = 2.1;
    result_x3 = cube(x);
    printf("result is %dn", result_x3);
    return 0;
}
int cube(float x)
{
    float x_3;
    x_3 = x * x*x;
    return x_3;
}
#endif
#if lesson_2_4
int swap(int x, int y);
int main()
{
    int x = 5;
    int y = 10;
    int swap_result;
    printf("x is %d, y is %d\n", x, y);
    swap_result = swap(x, y);
    printf("x is %d, y is %d\n", x, y);
    return 0;
}
int swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return temp;
}
#endif
#if lesson_3_1
#include<stdlib.h>
#include<time.h>
int main()
{
    int i, j;
    srand((int)time(NULL));   //�������Ҫ�����������������
    for (int i = 0; i < 6; i++)
    {
        j = 1 + (int)(10.0*rand() / (RAND_MAX + 1.0));
        printf("%d", j);
    }

    return 0;
}
#endif
#if lesson_3_2
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <string.h>
int main()
{
    char *s; int ix;
    char buffer[20];
    int i = 3445;
    long l = -344115L;
    unsigned long ul = 1234567890UL;
    s = "-9885 pigs";
    ix = atoi(s);
    printf("atoi test: ASCII string: %s\t\tinteger: %d\n", s, ix);
    _itoa(i, buffer, 10);
    printf("String of integer %d (radix 10): %s\n", i, buffer);
    _itoa(i, buffer, 16);
    printf("String of integer %d (radix 16): %s\n", i, buffer);
    _itoa(i, buffer, 2);
    printf("String of integer %d (radix 2): %s\n", i, buffer);
    _ltoa(l, buffer, 16);
    printf("String of integer %ld (radix 16): 0x%s\n", l, buffer);
    _ultoa(ul, buffer, 16);
    printf("String of integer %lu (radix 16): 0x%s\n", ul, buffer);

}
#endif
#if lesson_3_3
#include"lib_a+b.h"
int main()
{
    int a = 5, b = 7;
    int result;

    result = func(3, 5);
    printf("func ����ֵ�� %d", result);
    return 0;
}
#endif

#if lesson_4_2
int main()
{
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    if ((fp1 = fopen("data.txt", "r+")) == NULL)
    {
        printf("Cannot open file data.txt\n");
    }

    fp1 = fopen("data_a.txt", "w+");
    fclose(fp1);

    fp2 = fopen("data_b.txt", "w+");
    fclose(fp2);

    fp3 = fopen("data_c.txt", "a+");
    fclose(fp3);
    return 0;

}
#endif // lesson_4_2
#if lesson_4_3
int main()
{
    FILE *fp1;
    FILE *fp2;

    fp1 = fopen("data.txt", "r+");   // fopen_s(&fp1, "data.txt", "r");  is okay
    fp2 = fopen("data_w.txt", "w+");

    // ��һ��
    //while(!feof(fp1))
    //{
    //    char temp = fgetc(fp1);
    //    fputc(temp, fp2);
    //}

    //�ڶ���
    char temp;
    while (!feof(fp1))
    {
        fscanf_s(fp1, "%c", &temp);
        printf("%c", temp);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
#endif
#if lesson_4_4
int main()
{
    FILE *fp1;
    FILE *fp2;
    char c_tmp;

    fp1 = fopen("data.txt", "r");
    fp2 = fopen("data_c.txt", "w+");
    c_tmp = 0;
    while (c_tmp != EOF)
    {
        c_tmp = fgetc(fp1);
        fputc(c_tmp, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
#endif // lesson_4_4

#if lesson_4_5
int main()
{
    FILE *fp1;
    FILE *fp2;
    char c_temp[50];

    fp1 = fopen("E:\\WorkSpace\\C\\c_lesson\\c_lesson\\data_origin.txt", "r");
    fp2 = fopen("E:\\WorkSpace\\C\\c_lesson\\c_lesson\\data_copy.txt", "w+");

    while (!feof(fp1))
    {
        fgets(c_temp, 50, fp1);
        fputs(c_temp, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}

#endif // lesson_4_5
#if lesson_4_6
int main()
{
    FILE *fp1;
    FILE *fp2;
    int temp;

    fp1 = fopen("data.txt", "r");
    fp2 = fopen("data_c_2.txt", "w");

    for (int i = 0; i < 50; i++)
    {
        if (!feof(fp1))
        {
            fscanf(fp1, "%d\n", &temp);
            temp = temp + 1;
            fprintf(fp2, "%d\n", temp);
        }
    }
}
#endif
#if lesson_4_7
int main()
{
    FILE *fpl_char;
    FILE *fp2_float;
    char num_bin_char[10];
    float num_bin_float[10];

    fpl_char = fopen("E:\\WorkSpace\\C\\c_lesson\\c_lesson\\data_char.bin", "w+b");
    fp2_float = fopen("E:\\WorkSpace\\C\\c_lesson\\c_lesson\\data_float.bin", "w+b");

    for (int i = 0; i < 10; i++)
    {
        num_bin_char[i] = i;
        num_bin_float[i] = i * 1.0;
        fwrite(&num_bin_char[i], sizeof(char), 1, fpl_char);
        fwrite(&num_bin_float[i], sizeof(float), 1, fp2_float);
    }
    fclose(fpl_char);
    fclose(fp2_float);

    for (int i = 0; i < 10; i++)
    {
        num_bin_char[i] = 0;
        num_bin_float[i] = 0.0;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d, %f\n", num_bin_char[i], num_bin_float[i]);
    }

    fpl_char = fopen("E:\\WorkSpace\\C\\c_lesson\\c_lesson\\data_char.bin", "r+");
    fp2_float = fopen("E:\\WorkSpace\\C\\c_lesson\\c_lesson\\data_float.bin", "r+");
    for (int i = 0; i < 10; i++)
    {
        fread(&num_bin_char[i], sizeof(char), 1, fpl_char);
        printf("%d\n", num_bin_char[i]);
        fread(&num_bin_float[i], sizeof(float), 1, fp2_float);
        printf("%f\n", num_bin_float[i]);
    }
    fclose(fpl_char);
    fclose(fp2_float);

    return 0;
}
#endif
#if lesson_4_8
int main()
{
    FILE *fp1;
    FILE *fp2;
    char num_bin_char[10];
    float num_bin_float[10];
    int pos;

    fp1 = fopen("data_char", "w+");
    fp2 = fopen("data_float", "w+");

    for (int i = 0; i < 10; i++)
    {
        fseek(fp1, 5, 0);
        num_bin_char[i] = i + 65;
        fputc(num_bin_char[i], fp1);
        pos = ftell(fp1);
        printf("char pos is %d: \n", pos);

        num_bin_float[i] = i * 1.0;
        fprintf(fp2, "%f\n", num_bin_float[i]);
        pos = ftell(fp2);
        printf("float pos is %d: \n", pos);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
#endif
#if lesson_4_9
int main()
{
    FILE *fp1;
    FILE *fp2;
    char fread_head[10];
    char fread_tail[10];
    char num_bin_char[10];
    float num_bin_float[10];

    //�����ļ�
    fp1 = fopen("data_eg.bin", "wb+");
    for (int i = 0; i < 10; i++)
    {
        char tmp = i;
        float temp = i * 1.0;
        fwrite("BEGIN:", sizeof(char), 6, fp1);
        fwrite(&tmp, sizeof(char), 1, fp1);
        fwrite(&temp, sizeof(float), 1, fp1);
        fwrite("END!", sizeof(char), 4, fp1);
    }
    fclose(fp1);

    //���ļ�ͷ
    fp2 = fopen("data_eg.bin", "rb");
    int i = 0;
    int pos;

    while (!feof(fp2))
    {
        fread(fread_head, sizeof(char), 6, fp2);
        pos = ftell(fp2);
        printf("pos is %d now\n", pos);

        if ((fread_head[0] == 'B') && (fread_head[1] == 'E') && (fread_head[2] == 'G') && (fread_head[3] == 'I') && (fread_head[4] == 'N') && (fread_head[5] == ':'))
        {
            fread(&num_bin_char[i], sizeof(char), 1, fp2);
            fread(&num_bin_float[i], sizeof(float), 1, fp2);
            i++;
            printf("Find the head!\n");
        }
        else if (!feof(fp2))
        {
            fseek(fp2, -5, 1);
            pos = ftell(fp2);
            printf("Current pos is %d\n", pos);
        }
        else
        {
            printf("Here is the end!\n");
        }
    }
    //��ӡ������
    printf("**************************\n");
    for (int i = 0; i < 10; i++)
    {
        printf("The data is %d and %f\n", num_bin_char[i], num_bin_float[i]);
    }
    printf("**************************\n");


    return 0;
}
#endif

#if lesson_5_1
#include<stdio.h>
void main()
{
    /*
                unsigned short| unsigned int |	unsigned long	| short	}	int	|	long
        �˽���		%ho				%o				%lo				--		--		--
        ʮ����		%hu				%u				%lu				%hd		%d		%ld
        ʮ������	%hx				%x				%lX ��x�ɴ�д��	--		--		--

        printf��֧�ְ˽��ơ�ʮ���Ƶ��з������������Ҳ�޶�Ӧ�ĸ�ʽ���Ʒ�
    */
    printf("���̽���printf��ʾ\n");
    int result = 10;
    /*1.%d��ʮ��������ӡһ������*/
    printf("��ӡresult�Ľ����ʾ���� %3d \n", result);
    int a = 5, b = 12;
    printf("a =%-3d,b =%5d \n", a, b);
    /*2.%o �������԰˽��Ƶķ�ʽ���*/
    printf("ʮ���İ˽��������ʾ%o \n", 16);
    printf("ʮ���İ˽��������ʾ%#o \n", 16);
    printf("ʮ����ʮ���������ʾ%d \n", 16);
    printf("ʮ�ĵ�ʮ�����������ʾ%x \n", 14);
    printf("ʮ�ĵ�ʮ�����������ʾ%X \n", 14);
    printf("ʮ�ĵ�ʮ�����������ʾ%#X \n", 14);
    printf("��������ʾ%f \n", 1.0 / 3.0);
    printf("������ʾ%.3f \n", 1.0 / 3.0);

    /*3.%c���ַ������ʾ*/
    char ch = 'a';
    printf("%c\n", ch);
    printf("%3c\n", ch);
    printf("%-3c\n", ch);

    /*4.%s������ַ�������ʽ*/
    char str[10] = "123456789";
    printf("%16s \n", str);
    /*5.\a*/
    printf("\a");

    /*6.Scanf����*/
    /*
    int i = 0;
    scanf("%d",&i);
    printf("%d\n",i);
    scanf("%i",&i);
    printf("%d\n",i);
    */
    char str_a[100];
    scanf("%[abcdef]", str_a);
    printf("%s\n", str_a);
    system("pause");
}
#endif
#if lesson_5_2
int main()
{
    // ��1 ��
    printf("C������������"  "C���Ժ�C++��"  "http://c.biancheng.net\n");
    puts("C������������"  "C���Ժ�C++��"  "http://c.biancheng.net");
    // ��2 ��
    printf("C������������"
        "C���Ժ�C++��"
        "http://c.biancheng.net\n");
    puts("C������������"
        "C���Ժ�C++��"
        "http://c.biancheng.net");
    return 0;
}
#endif
#if lesson_5_3
void main()
{
    char str[20];
    printf("����һ���ַ���...\n");
    gets_s(str, 20);
    puts(str);
}
#endif
#if lesson_5_4
#include<typeinfo.h>
int main()
{
    char ch[30];
    char *p = (char*)malloc(20 * sizeof(char));
    printf("sizeof(ch) = %d\n", sizeof(ch));
    printf("sizefo(p) = %d\n", sizeof(p));
    free(p);
    return 0;
}
#endif
#if lesson_5_5
void tools_free(void* memory);
int main()
{
    char *p = (char*)malloc(20 * sizeof(char));
    printf("sizefo(p) = %d\n", sizeof(p));

    tools_free(p);   // ��Ȼ�ú����ڲ���memory = null, ������P������ڿ�; 432�в�����free����Ϊ�������Ѿ��ͷ��˸�memory
    if (NULL != p)
    {
        printf("free memory of p\n");
        free(p);  //tools_free�Ѿ�free�˸�block memory���ظ�free�ᱨ��
    }

    return 0;
}
void tools_free(void* memory)
{
    if (memory != NULL) {
        free(memory);
        memory = NULL;
    }
}
#endif
#if lesson_5_6
void tools_free(void* memory);
#define TOOLS_FREE(ptrptr) tools_free(*(ptrptr)); *(ptrptr) = NULL;
int main()
{
    char *p = (char*)malloc(20 * sizeof(char));
    printf("sizefo(p) = %d\n", sizeof(p));

    TOOLS_FREE(&(p));  //���ϸ����Ӳ�ͬ���������p ����ΪNULL,����������жϲ������
    if (NULL != p)
    {
        printf("free memory of p\n");
        free(p);
    }
    return 0;
}
void tools_free(void* memory)
{
    if (NULL != memory)
    {
        free(memory);
        memory = NULL;
    }
}
#endif
#if lesson_6_1
int main()
{
    int total_number;
    total_number = 22;
    printf("total_numberʮ��������%d\n", total_number);
    printf("total_number�˽�������o%o\n", total_number);
    printf("total_numberʮ����������0X%x\n", total_number);

    printf("*******************\n");
    int a;
    a = 21474836481;
    printf("%d, %u\n", a, a);

    return 0;
}
#endif
#if lesson_6_2
int main()
{
    int a = 256;
    char b;
    unsigned char c;
    b = a;
    c = a;
    printf("%d, %d\n", b, c);

    printf("**********************\n");
    char tmp = 'A';
    int temp;
    temp = tmp;
    printf("%c, %d\n", tmp, temp);
    printf("%c, %c\n", tmp, tmp);

    return 0;
}
#endif // lesson_6_2
#if lesson_6_3
int main()
{
    enum week
    {
        MON,
        TUE = 5,
        WED,
        THU,
        FRI,
        SAT,
        SUM
    };
    week day;

    day = MON;
    printf("\n here is the enum: %d\n", day);

    day = TUE;
    printf("\n here is the enum: %d\n", day);

    day = WED;
    printf("\n here is the enum: %d\n", day);
    return 0;
}
#endif // lesson_6_3
#if lesson_6_4
int main()
{
    struct student
    {
        char name[20];
        int score;
    }stu1 = { "kidd", 99 };
    student stu2 = { "chen",100 };
    printf("stu1�������� %s, ������%d\n", stu1.name, stu1.score);
    printf("stu2�������� %s, ������%d\n", stu2.name, stu2.score);
    return 0;
}
#endif
#if lesson_6_5
int main()
{
    struct test
    {
        char name[10];
        int score;
    }stu[10] = { {"stu1", 89},{"stu2", 92},{"stu3", 59},{"stu4", 92},{"stu5", 99},{"stu6", 44},{"stu7", 79},{"stu8", 66},{"stu9", 49},{"stu10", 92} };
    int num = sizeof(stu) / sizeof(stu[0]);
    printf("�ṹ���С�ǣ� %d\n", num);

    for (int i = 0; i < 10; i++)
    {
        printf("student %d ��������%s���ɼ���%d�֡�\n", i, stu[i].name, stu[i].score);
        if (stu[i].score > 90)
        {
            printf("��ѧ�����ڳɼ����㡣\n");
        }
        else if (stu[i].score > 80 && stu[i].score < 90)
        {
            printf("��ѧ�����ڳɼ�����\n");

        }
        else if (stu[i].score > 70 && stu[i].score < 80)
        {
            printf("��ѧ�����ڳɼ��Ϻá�\n");

        }
        else if (stu[i].score > 60 && stu[i].score < 70)
        {
            printf("��ѧ�����ڳɼ�һ�㡣\n");

        }
        else
        {
            printf("��ѧ���ɼ�������\n");
        }

        printf("*********************\n");
    }
    return 0;
}
#endif
#if lesson_6_6
struct trigle_own
{
    int a;
    int b;
    int c;
    float L;
    float S;
};
trigle_own reflash_trigle(trigle_own trip)
{
    trigle_own tmp;
    tmp.a = trip.a;
    tmp.b = trip.b;
    tmp.c = trip.c;


    tmp.L = tmp.a + tmp.b + tmp.c;
    tmp.S = sqrt(float((tmp.L*(tmp.L - tmp.a)*(tmp.L - tmp.b)*(tmp.L - tmp.c))));
    return tmp;
}
int main()
{
    trigle_own tri = { 10,10,10, 0 };
    printf("a=%d, b=%d, c=%d, L=%f, S=%f\n", tri.a, tri.b, tri.c, tri.L, tri.S);
    printf("**************************\n");
    trigle_own new_tri = reflash_trigle(tri);
    printf("a=%d, b=%d, c=%d, L=%f, S=%f\n", new_tri.a, new_tri.b, new_tri.c, new_tri.L, new_tri.S);
}
#endif
#if lesson_6_7
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
void printbook(struct Books);
int main()
{
    struct Books book1;
    struct Books book2;

    /*book1������*/
    strcpy(book1.title, "C programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C programming Tutorial");
    book1.book_id = 6495407;

    /*book2������*/
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Zara Ali");
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 6495700;

    /*��� Book1 ��Ϣ*/
    printf("Book 1 title : %s\n", book1.title);
    printf("Book 1 author : %s\n", book1.author);
    printf("Book 1 subject : %s\n", book1.subject);
    printf("Book 1 book_id : %d\n", book1.book_id);
    printf("*******************\n");

    /*��� Book2 ��Ϣ*/
    printf("Book 2 title : %s\n", book1.title);
    printf("Book 2 author : %s\n", book1.author);
    printf("Book 2 subject : %s\n", book1.subject);
    printf("Book 2 book_id : %d\n", book1.book_id);
    printf("*******************\n");

    /*������ֿ�������ģ�麯��*/
    printbook(book1);
    printf("*******************\n");
    printbook(book2);
    printf("*******************\n");

    return 0;
}

void printbook(struct Books Book)
{
    printf("Book title : %s\n", Book.title);
    printf("Book author : %s\n", Book.author);
    printf("Book subject : %s\n", Book.subject);
    printf("Book book_id : %d\n", Book.book_id);
}
#endif
#if lesson_6_8
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
void printbook(struct Books *Book);
int main()
{
    struct Books book1;
    struct Books book2;

    /*book1������*/
    strcpy(book1.title, "C programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C programming Tutorial");
    book1.book_id = 6495407;

    /*book2������*/
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Zara Ali");
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 6495700;

    /*������ֿ�������ģ�麯��*/
    printbook(&book1);
    printf("*******************\n");
    printbook(&book2);
    printf("*******************\n");

    return 0;
}

void printbook(struct Books *Book)
{
    printf("Book title : %s\n", Book->title);         //->ָ���Ա����
    printf("Book author : %s\n", (*Book).author);     // ָ��ָ���Ա����
    printf("Book subject : %s\n", Book->subject);
    printf("Book book_id : %d\n", Book->book_id);
}
#endif
#if lesson_7_1
int main()
{
    float total_price = 0;
    float floor_space[7];
    floor_space[0] = 58.5;
    floor_space[1] = 44.5;
    floor_space[2] = 49.9;
    floor_space[3] = 79.8;
    floor_space[4] = 100.0;
    floor_space[5] = 120.1;
    floor_space[6] = 89.98;

    for (int i = 0; i < 7; i++)
    {
        total_price += floor_space[i] * 34.0;
    }
    printf("���������Ϊ: %.3f\n", total_price);
}
#endif
#if lesson_7_2
#define N 10
int main()
{
    int i;
    int nums[N];
    int count1 = 0, count2 = 0, count3 = 0;
    printf("���ȣ�������10������");
    for (int i = 0; i < N; i++)
    {
        scanf("%d,", &nums[i]);
        if (nums[i] == 0)
        {
            count1++;
        }
        else if (nums[i] > 0)
        {
            count2++;
        }
        else
        {
            count3++;
        }
    }
    printf("\n******************\n���Ľ��Ϊ��\n");
    printf("������%d��\n", count2);
    printf("��������%d��\n", count3);
    printf("����0������%d��\n", count1);
    return 0;
}
#endif
#if lesson_7_3
#include"string.h"
int main()
{
    char pharr[] = "zifuchuanshuzu";
    char charr[] = { 'z','i','f','u','c','h','u','a','n','s','h','u','z','u' };
    char charr_test[] = { 'z','i','f','u','c','h','u','a','n','s','h','u','z','u','\n' };
    int num_pharr = sizeof(pharr);
    int num_charr = sizeof(charr);
    int num_charr_test = sizeof(charr_test);

    printf("pharr������: %s\n", pharr);
    printf("�����ǣ� %d\n", num_pharr);

    printf("charr������: %s\n", charr);
    printf("�����ǣ� %d\n", num_charr);

    printf("charr_test������: %s\n", charr_test);
    printf("�����ǣ� %d\n", num_charr_test);

    //strcpy, strcmp����
    char a[10];
    char b[10];

    strcpy(a, "abce");
    strcpy(b, "abb");
    int value = strcmp(a, b);
    if (value < 0)
    {
        printf("a<b\n");
    }
    else if (value == 0)
    {
        printf("a==b");
    }
    else
    {
        printf("a>b");
    }
    return 0;
}
#endif
#if lesson_7_4
void bubble_sort(int arr[], int len);
int main()
{
    int arr[] = { 22, 34, 44, 51, 2, 12, 15, 19, 21, 77, 56 };
    int len = sizeof(arr) / sizeof(*arr);
    bubble_sort(arr, len);

    for (int i = 0; i < len; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}
void bubble_sort(int arr[], int len)
{
    int i, j, temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
            temp = arr[j];
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
#endif
#if lesson_7_5
int main()
{
    char line[150];
    printf("����һ���ַ���: ");
    int i, j;
    //���ַ��������� �ο�<C�����ַ�������������.html>
    //gets_s(line);
    //fgets(line, (sizeof(line)/sizeof(*line)), stdin);
    scanf("%s", line); //ͨ����ʽ���Ʒ�%s�����ַ����������ַ�����scanf() ���������������͵����ݡ�

    for (i = 0; line[i] != '\0'; ++i)
    {
        while (!((line[i] >= 'a') && (line[i] <= 'z') || (line[i] >= 'A') && (line[i] <= 'Z') || line[i] == '\0'))
        {
            for (j = i; line[j] != '\0'; ++j)
            {
                line[j] = line[j + 1];
            }
            line[j] = '\0';
        }
    }
    printf("����� ");
    //���ַ��������
    puts(line);
    fputs(line, stdout);
    printf("%s", line);

    return 0;
}
#endif
#if lesson_7_6
#define MAX_LENGTH_CHAR 65535
int main()
{
    char line[MAX_LENGTH_CHAR];
    printf("��������󳤶�С��%d���ַ�����\n", MAX_LENGTH_CHAR);
    scanf("%s", line);
    for (int i = 0; line[i] != '\0'; i++)
    {
        printf("��%d���ַ�%c��ASCIIֵ�ǣ�%-5d  %#-5x\n", i + 1, line[i], line[i], line[i]);
    }

    return 0;
}
#endif
#if lesson_7_7
int main()
{
    printf("��ӡ�žų˷���\n");
    printf("***************\n");
    int i = 1, j = 1;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%-2d\t", i, j, i*j);
        }
        printf("\n");
    }
}
#endif
#if lesson_7_8
int main()
{
    int t1 = 0, t2 = 1, next_term = 0;
    printf("쳲��������� %d %d", t1, t2);
    next_term = t1 + t2;
    for (int i = 0; i < 10; i++)
    {
        printf(" %d", next_term);
        t1 = t2;
        t2 = next_term;
        next_term = t1 + t2;
    }
    printf("\n");

    return 0;
}
#endif
#if lesson_7_9
#include <stdio.h>
void reverseSentence();

int main()
{
    printf("����һ���ַ���: ");
    reverseSentence();

    return 0;
}

void reverseSentence()
{
    char c;
    scanf("%c", &c);

    if (c != '\n')
    {
        reverseSentence();
        printf("%c", c);
    }
}
#endif
#if lesson_7_10
int main()
{
    int i, j;
    char str[10][50], temp[50];

    printf("����10������:\n");

    for (i = 0; i < 10; ++i) {
        scanf("%s[^\n]", str[i]);
    }

    for (i = 0; i < 9; ++i) {
        for (j = i + 1; j < 10; ++j)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\n�����: \n");
    for (i = 0; i < 10; ++i)
    {
        puts(str[i]);
    }

    return 0;
}
#endif
#if lesson_7_11
int main()
{
    char c;
    FILE *fp;
    fp = fopen(__FILE__, "r");
    do
    {
        c = getc(fp);
        putc(c, stdout);
    } while (c != EOF);

    return 0;
}
#endif
#if lesson_7_12
int main()
{
    int i, j, k;
    int count = 0;
    for (i = 1; i < 5; i++)
        for (j = 1; j < 5; j++)
            for (k = 1; k < 5; k++)
            {
                if ((i != j) && (i != k) && (j != k))
                {
                    printf("%d%d%d\n", i, j, k);
                    count++;
                }
            }
    printf("\n�ܹ���%d����ͬ���������\n", count);
    return 0;
}
#endif
#if lesson_7_13
#include<stdio.h>
#define MAX 30   //�궨�壺�����ܹ���ʮֻ����
int Monkey[MAX]; //���飺�д洢���ӱ��
int N;
int i, j, k;     //ѭ��ʹ�ñ���
int temp;      //��������
void init()
{
    for (i = 0; i < MAX; i++)
    {
        Monkey[i] = i + 1;
    }
    printf("���ӱ�ţ�");
    for (i = 0; i < MAX; i++)
    {
        printf("%d ", Monkey[i]);
    }
    printf("\n ");

}
void output()
{
    printf("���ӵĳ�Ȧ˳��\n\r");
    for (i = MAX - 1; i >= 0; i--)
        printf("��%3d�ź��ӳ�Ȧ\n\r", Monkey[i]);
    printf("i��ֵ%d \n\r", i);
    printf("�����ǣ���%3dֻ����\n\r", Monkey[i + 1]);
}
void main()
{
    init();
    printf("������������У�\n\r");
    scanf("%d", &N);
    //�������·��
    for (i = MAX - 1; i >= 0; i--)
    {
        for (k = 1; k <= N; k++)
        {
            temp = Monkey[0];
            for (j = 0; j < i; j++)
            {
                Monkey[j] = Monkey[j + 1];

            }
            Monkey[i] = temp;
        }

    }
    output();
    system("pause");

}
#endif
#if lesson_7_14
#include"string.h"
#include"stdint.h"
int main()
{
    char pharr[] = "zifuchuanshuzu";

    //strcpy, strcmp����
    char a[10];

    // src���� < dest  �������, dest ���� < src ���ȣ� ����쳣
    strncpy(a, "ababab", 10);

    printf(a);
    printf("\n");

    //******************************
    uint8_t b[10];
    uint8_t c[5] = { 10, 9, 8, 7 };
    memcpy(b, c, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d", b[i]);
        printf("\n");
    }

    //***************
    char *end_pointer;
    char source[14] = "20210814 abcd";

    const int32_t serial_number = (int32_t)strtol(&source[3], &end_pointer, 10);
    printf("%d\n", serial_number);
    printf("%s", end_pointer);


    return 0;
}
#endif
#if lesson_8_1
int main()
{
    char s[4][10] = { "Pot","Name","top","amen" };
    char s_upper[4][10] = { '\0' };
    char s_upper_sort[4][10] = { '\0' };
    char ctmp[4][10] = { '\0' };
    int s_feature[4] = {};
    const int N = sizeof(s) / sizeof(s[0]);

    //1. Upper character
    printf("*****************\n");
    for (int j = 0; j < N; j++)
    {
        printf("Befor the transfer data: %s\n", s[j]);
        for (int i = 0; i < 10; i++)
        {
            s[j][i] = toupper(s[j][i]);
            s_upper[j][i] = s[j][i];
        }
        printf("After the tranfer data: %s\n", s_upper[j]);
    }
    printf("*******************\n");

    // ��������ֵ����ʹ����ĸ����
    // �����������
    for (int i = 0; i < N; i++)
    {
        strcpy(s_upper_sort[i], s_upper[i]);
    }

    //2. ����s_upper
    for (int j = 0; j < N; j++)
    {
        for (int n = 0; n < 9; n++)
        {
            for (int i = 0; i < 10; i++)
            {
                if (('\0' == s_upper_sort[j][i]) || ('\0' == s_upper_sort[j][i + 1]))
                    continue;
                ctmp[j][i] = s_upper_sort[j][i];
                if (s_upper_sort[j][i] > s_upper_sort[j][i + 1])
                {
                    s_upper_sort[j][i] = s_upper_sort[j][i + 1];
                    s_upper_sort[j][i + 1] = ctmp[j][i];
                }
            }
        }
        printf("After sorted: %s\n", s_upper_sort[j]);
    }
    printf("*******************\n");

    // 3. �Ƚ�,��ӡ����ͬ���ַ�
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (0 == strcmp(s_upper_sort[i], s_upper_sort[j]))
            {
                printf("The string of %d and %d is equal, string is: %s\n", i, j, s_upper_sort[j]);
            }
        }
    }
    printf("*******************\n");

    //�ڶ��ַ�����ͨ��λ����ֵ����ʡ�ڴ棬�����
    //����λ����ֵ
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ('\0' == s_upper[i][j])
                continue;
            int mark = 1 << (s_upper[i][j] - 'A');
            s_feature[i] = s_feature[i] | mark;
        }
        printf("%#x\n", s_feature[i]);
    }
    printf("*******************\n");
    //�Ƚϡ���ӡ��ȵ������ַ���
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (s_feature[i] == s_feature[j])
            {
                printf("The string of %d and %d is equal, string is: %d\n", i, j, s_feature[i]);
            }
        }
    }
    printf("*******************\n");

    return 0;
}
#endif
#if lesson_9_1
#define Pa 3+2
#define Pa1 5
#define Pa2 (3+2)
int main()
{
    printf("%d\n", Pa*Pa);  // =11
    printf("%d\n", Pa1*Pa1); //=25
    printf("%d\n", Pa2*Pa2); //=25
}
#endif
#if lesson_9_2
int main()
{
    printf(__FILE__);
    printf("\n");
    printf("%d\n", __LINE__);
    printf(__DATE__);
    printf("\n");
    printf(__TIME__);
    getchar();
}
#endif
#if lesson_10_1
int main()
{
    int a, b, c;
    int *pa, *pb, *pc;
    int *p;
    pa = &a;
    pb = &b;
    pc = &c;

    printf("����a,b,c\n");
    scanf("%d,%d,%d", &a, &b, &c);

    printf("a=%d, b=%d, c=%d\n", a, b, c);
    printf("*pa=%d,*pb=%d,*pc=%d\n", *pa, *pb, *pc);
    printf("*pa address=%d,*pb address=%d,*pc address=%d\n", pa, pb, pc);

    if (a < b)
    {
        p = pa;
        pa = pb;
        pb = p;
    }

    if (a < c)
    {
        p = pa;
        pa = pc;
        pc = p;
    }

    if (b < c)
    {
        p = pb;
        pb = pc;
        pc = p;
    }
    printf("a=%d,b=%d,c=%d\n", a, b, c);
    printf("*pa=%d,*pb=%d,*pc=%d\n", *pa, *pb, *pc);
    printf("*pa address=%d,*pb address=%d,*pc address=%d\n", pa, pb, pc);
    return 0;
}
#endif
#if lesson_10_2
int main()
{
    char str1[] = "hello,";
    char str2[] = "Kidd";
    char str_copy[] = { 0 };

    char *p1, *p2;
    char *p;
    p1 = str1;
    p2 = str2;
    p = str_copy;
    printf("p1+p2: %s %s\n", p1, p2);
    printf("p1,p2,p3 address: %d,%d,%d\n", p1, p2, p);
    printf("**********************\n");
    printf("Copy str1 to str_copy\n");
    for (int i = 0; i < sizeof(str1); i++)
    {
        printf("%c->", *(p1 + i));
        *(p + i) = *(p1 + i);
        printf("%c.\n", *(p + i));
    }
    printf("p now is:%s\n", p);
    printf("str_copy is: %s\n", str_copy);
    printf("**********************\n");
    printf("Copy str2 to str_copy\n");
    for (int i = 0; i < sizeof(str2); i++)
    {
        printf("%c->", *(p2 + i));
        *(p + sizeof(str1) + i - 1) = *(p2 + i);
        printf("%c.\n", *(p + sizeof(str1) + i - 1));
    }
    printf("p now is:%s\n", p);
    printf("str_copy is: %s\n", str_copy);
    printf("p1,p2,p3 address: %d,%d,%d\n", p1, p2, p);
    printf("**********************\n");
    system("pause");
    return 0;
}
#endif
#if lesson_10_3
void main()
{
    int line1[] = { 1,2,3 };
    int line2[] = { 4,5,6 };
    int line3[] = { 7,8,9 };

    int *p_line[3];
    p_line[0] = line1;
    p_line[1] = line2;
    p_line[2] = line3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", *(p_line[i] + j));
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", p_line[i][j]);
        }
        printf("\n");
    }


}
#endif
#if lesson_10_4

struct student
{
    char name[10];
    int score;

};
int main()
{
    student stu1 = { "Jakcy", 99 };
    student stus[2] = { {"Jakcy", 99}, { "Kidd", 88 } };
    student *p_stu;
    student *p_stus;
    p_stu = &stu1;
    p_stus = &stus[0];

    printf("*********************\n");
    printf("The student %s's score is: %d\n", stu1.name, stu1.score);
    printf("pointer:\n");
    printf("The student %s's score is: %d\n", (*p_stu).name, (*p_stu).score);

    printf("**********************\n");
    printf("The student %s's score is: %d\n", (*p_stus).name, (*p_stus).score);
    printf("The student %s's score is: %d\n", (*(p_stus + 1)).name, (*(p_stus + 1)).score);

    return 0;
}
#endif
#if lesson_10_5
void flipe_data(int *p)
{
    int temp;
    temp = *p;
    *p = *(p + 1);
    *(p + 1) = temp;
}
void main()
{
    int a[2] = { 1, 4 };
    printf("Before data:\n");
    printf("a[0]: %d, a[1]: %d\n", a[0], a[1]);

    printf("After flipe data:\n");
    flipe_data(a);
    printf("a[0]: %d, a[1]: %d\n", a[0], a[1]);

}
#endif
#if lesson_10_6
int *max(int a[])
{
    int *m;
    m = a;
    for (int i = 0; i < 10; i++)
    {
        if (*m < a[i])
        {
            *m = a[i];
        }
    }
    printf("%d\n", *m);
    return m;

}
int main()
{
    int a[10] = { 1,4,3,19,11,9,7,17,12,10 };
    int *max_a;
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ,", a[i]);
    }
    printf("\n");

    max_a = max(a);
    printf("max value is :%d \n", *max_a);
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ,", a[i]);
    }


    return 0;
}
#endif
#if lesson_10_7
int max1(int a[])
{
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}
int main()
{
    int a[10] = { 1,4,3,19,11,9,7,17,12,10 };
    int max_a;
    int(*p)(int *);
    p = max1;
    //before
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ,", a[i]);
    }
    printf("\n");
    //after

    max_a = (*p)(a); //max_a = max(a);
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ,", a[i]);
    }
    printf("\n");
    printf("The max value is : %d", max_a);
    return 0;
}
#endif
#if lesson_10_8
int main()
{
    int a = 0x10;
    int *p;
    p = &a;

    int **pp;
    pp = &p;

    int ***ppp;
    ppp = &pp;

    printf("value is %d, address is %d\n", a, &a);
    printf("pointer\n");
    printf("value of pointer: %d, pointer address: %d, pointer to value: %d\n", p, &p, *p);
    printf("pointer to pointer");
    printf("value of pointer: %d, pointer address: %d, pointer to value: %d\n", pp, &pp, **pp);
    printf("pointer to pointer");
    printf("value of pointer: %d, pointer address: %d, pointer to value: %d\n", ppp, &ppp, ***ppp);

    return 0;
}
#endif
#if lesson_10_9
float *trigle(int a, int b, int c, float *length)
{
    float Area;
    float *s;
    float *p_length;
    p_length = length;
    s = &Area;

    *p_length = float(a + b + c);
    *s = sqrt(float((*p_length / 2)*(*p_length / 2 - a)*(*p_length / 2 - b)*(*p_length / 2 - c)));
    return s;

}
int main()
{
    int a = 3, b = 4, c = 5;
    float L = 0.0;
    float *s_tri;

    s_tri = trigle(a, b, c, &L);
    printf("%f, %f\n", L, *s_tri);
    return 0;
}
#endif
#if lesson_11_1
int main()
{
    char c1, c2, c3;
    /*
    printf("Enter c1,c2,c3: ");
    scanf("%3c%2c%c", &c1, &c2, &c3);
    printf("c1=%c\nc2=%c\nc3=%c\n", c1, c2, c3);*/

    // ����"%s"��Ϊ����ʱ����������ʱ�������������Ϊ�����ݽ�����
    // ���ո�TAB���س�
    // ����Ƚ���
    // ���Ƿ�����
    // ע�� scanf��%s����ʱ�����ո��س�����

    /*
    char a[5];
    scanf("%s", a);
    printf("%s\n", a);*/

    // putchar getchar
    /*char ch;
    ch = getchar();
    putchar(ch);*/

    //gets
    /*printf("\n");
    char s[10];
    gets_s(s);
    puts(s);*/

    char *p;
    p = (char *)malloc(sizeof(char) * 7);
    strcpy(p, "123456");
    printf("%s\n", p);
    free(p);
    p = NULL;

    return 0;
}
#endif
#if lesson_11_2
void main()
{
    int b;
    printf("address of b is: %d\n", &b);  //����һ�����壬�ͷ������ڴ�
    b = 10;
    printf("address of b is: %d\n", &b);

    int a = 11;
    int *pi = &a;
    void *pv = pi;
    printf("address of pi is : %d, %d\n", pi, *pi);
    printf("address of pv is : %d, %d\n", pv, *((int*)(pv)));  // (int*)(pv)ת��������ָ��

    double *pi2 = (double*)(pv);  //ok, ������ȫ
    printf("address of pi2 is : %d\n", *pi2);

}
#endif
#if lesson_11_3
int main()
{
    int a = 10, b = 11, temp;
    int *pa, *pb;
    pa = &a;
    pb = &b;

    printf("before covert a and b, a=%d, b=%d\n", a, b);
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    printf("after convert a, b, a= %d, b=%d\n", a, b);
    printf("size of address of pa: %d\n", sizeof(pa));  //����ָ�������ռ4���ֽ�

    return 0;

}
#endif
#if lesson_11_4
int main()
{
    // ��ָ��ķ�ʽ��������Ԫ��
    int a[] = { 1, 3, 4, 6, 9 };
    int len = sizeof(a) / sizeof(int);

    for (int i = 0; i < len; i++)
    {
        printf("%d\n", *(a + i));
    }

    //��ָ���������
    printf("\n");
    int b[] = { 1, 3, 4, 6, 9 };
    int len_b = sizeof(b) / sizeof(int);
    int *p = b;

    for (int i = 0; i < len_b; i++)
    {
        printf("%d\n", *(p + i));
    }

}
#endif
#if lesson_11_5
int main()
{
    /*
    char str[] = "http://www.baidu.com";
    int len = strlen(str), i=0;
    char *pstr = str;

    for (i = 0; i < len; i++)
    {
        printf("%c", *(pstr + i)); //printf("%c", *(str + i));
    }
    printf("\n");*/

    //char *str = "http://c.biancheng.net";
    //int len = strlen(str), i;

    ////ֱ������ַ���
    //printf("%s\n", str);
    ////ʹ��*(str+i)
    //for (i = 0; i < len; i++) {
    //    printf("%c", *(str + i));
    //}
    //printf("\n");
    ////ʹ��str[i]
    //for (i = 0; i < len; i++) {
    //    printf("%c", str[i]);
    //}
    //printf("\n");

    char *str = "Hello World!";
    printf("len of p is :%d\n", strlen(str));
    str = "I love C!";  //��ȷ
    printf("len of str is :%d\n", strlen(str));

    return 0;
}
#endif
#if lesson_11_6
void SortString(char *p);
int main()
{
    char str[50];
    gets_s(str);
    SortString(str);

    printf("new string is :\n%s\n", str);
}
void SortString(char *p)
{
    int i = 0, len = strlen(p);
    char *p1, *p2;
    printf("the original string is: \n%s\n", p);

    for (p1 = p; p1 < p + len - 1; p1++)
    {
        for (p2 = p1 + 1; p2 < p + len; p2++)
        {
            char temp;
            if (*p1 > *p2)
            {
                temp = *p1;
                *p1 = *p2;
                *p2 = temp;
            }
        }
    }
}
#endif
#if lesson_11_7
int main()
{
    union u_ta
    {
        int ival;
        float fval;
        char *pval;
    }uval, *p;
    uval.ival = 10; uval.fval = 9.0; uval.pval = "C language";
    printf("\n%s", uval.pval);
    p = &uval;
    printf("\n%d\n", p->ival);

    return 0;
}
#endif
#if lesson_11_8
void bitpat(int x)
{
    int i;
    for (i = 15; i >= 0; i--)
    {
        printf("%d\n", (x >> i) & 0x0001);
    }
}
int main()
{
    int a = 65;
    bitpat(a);

    return 0;

}
#endif