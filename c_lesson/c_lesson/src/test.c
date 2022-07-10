#include "../include/test.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"

//在下次读取前清空缓冲区
//scanf("%*[^\n]"); scanf("%*c"); 
//while ((c = getchar()) != '\n' && c != EOF); //在下次读取前清空缓冲区
#if test_1_1
#define OS_BITS     (((int)((ptrdiff_t *)0 + 1)) << 3)
int main()
{
    printf("%d", OS_BITS);
}
#endif
#if test_1_2
int main()
{
    int times[62] = { 0 };
    int num = 0;
    char ch;
    while ((ch = getchar()) != '#')
    {

        if (ch >= '0'&&ch <= '9')
        {
            num = ch - '0';
            times[num]++;
        }
        else if (ch >= 'A'&&ch <= 'Z')
        {
            num = ch - 'A' + 10;
            times[num]++;
        }
        else if (ch >= 'a'&&ch <= 'z')
        {
            num = ch - 'a' + 20;
            times[num]++;
        }
        else
        {
            printf("Enter error");
        }
    }
    for (int i = 0; i < 62; i++)
    {
        printf("%d ", times[i]);
    }
}
#endif
#if test_1_3
int hexToDex(char shex[], int *value);
int main()
{
    // 十六制转十进制
    char a[8] = { 0 };
    int value = 0;
    strcpy(a, "121");
    value = hexToDec(a, &value);
    printf("%d", value);

}
int hexToDec(char shex[], int *value)
{
    size_t i = 0, len = 0;
    int mid = 0;
    len = strlen(shex);
    if (len > 8)
    {
        return 0;
    }
    *value = 0;
    for (int i = 0; i < len; i++)
    {
        mid = 0;
        if (shex[i] >= '0'&&shex[i] <= '9')
        {
            mid = shex[i] - '0';
        }
        else if (shex[i] >= 'A'&&shex[i] <= 'F')
        {
            mid = shex[i] - 'A' + 10;
        }
        else if (shex[i] >= 'a'&&shex[i] <= 'f')
        {
            mid = shex[i] - 'a' + 10;
        }
        else
        {
            return 0;
        }
        *value += mid * pow(16, len - i - 1);
    }
    return *value;
}
#endif
#if test_1_4
int main()
{
    int temp, p;
    int array[10] = { 2, 6, 1, 9, 4, 7, 5, 8, 3, 0 };
    printf("Display this array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        temp = array[i];
        p = i - 1;
        while (p >= 0 && temp < array[p])
        {
            array[p + 1] = array[p];
            p--;
        }
        array[p + 1] = temp;
    }
    printf("\n");
    printf("After sorting, this array is:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
#endif
#if test_1_5
void* mymemorycopy(void* dest, void* src, size_t count)
{
    char* pd = (char*)dest;
    char* ps = (char*)src;

    if (pd <= ps || pd >= ps + count)
    {
        while (count--)
        {
            *pd++ = *ps++;
        }
    }
    else
    {
        pd += count - 1;
        ps += count - 1;
        while (count--)
        {
            *pd-- = *ps--;
        }
    }
    return dest;
}
int main()
{
    char str1[] = "0123456789";
    char* str2 = str1 + 15;
    mymemorycopy(str2, str1 + 0, 9);
    printf(str2);
    return 0;
}
#endif
#if test_1_6
#define Size 5
typedef struct Table
{
    int *head;
    int length;
    int size;
}table;
table initTable()
{
    table t;
    t.head = (int*)malloc(Size * sizeof(int));
    if (!t.head)
    {
        printf("内存分配失败");
        exit(0);
    }
    t.length = 0;
    t.size = Size;
    return t;
}
void displayTable(table t)
{
    for (int i = 0; i < t.length; i++)
    {
        printf("%d\n", t.head[i]);
    }
}
table insertTable(table t, int elem, int index)
{
    if (index > t.length + 1 || index < 0)
    {
        printf("insert position is out of range!\n");
        return t;
    }
    if (t.length == t.size)
    {
        t.head = (int *)realloc(t.head, (t.size + 1) * sizeof(int));
        if (!t.head)
        {
            printf("realloc is failed!\n");
            exit(0);
        }
        t.size++;
    }
    for (int i = t.length - 1; i >= index - 1; i--)
    {
        t.head[i + 1] = t.head[i];
    }
    t.head[index - 1] = elem;
    t.length++;
    return t;
}
table deleTable(table t, int add)
{
    if ((add > t.length) || (add < 0))
    {
        printf("删除的位置不对\n");
        exit(0);
    }
    for (int i = add; i < t.length; i++)
    {
        t.head[i - 1] = t.head[i];
    }
    t.length--;
    return t;
}
int selectTable(table t, int elem)
{
    for (int i = 0; i < t.length; i++)
    {
        if (t.head[i] == elem)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{
    table t = initTable();
    for (int i = 1; i <= t.size; i++)
    {
        t.head[i - 1] = i;
        t.length++;
    }
    printf("print origin table\n");
    displayTable(t);
    printf("Insert data into table\n");
    t = insertTable(t, 8, 3);
    printf("print table after inserting\n");
    displayTable(t);
    printf("Delete data from table\n");
    deleTable(t, 3);
    printf("print table after deleting\n");
    displayTable(t);
    printf("Select data from table\n");
    int add = selectTable(t, 4);
    if (add != -1)
    {
        printf("The index of data you want to selected is %d\n", add);
    }
    else
    {
        printf("Can not find the data you want to select!\n");
    }
    printf("\n");

    return 0;
}
#endif
#if test_1_7
typedef struct Link
{
    char elem;
    struct Link * next;
}link;
link *initLink();
void displayLink(link* p);
link * insertLink(link *p, int elem, int add);
link * deleteLink(link *p, int add);
int selectLink(link *p, int elem);
link *amendLink(link *p, int elem, int add);
int main()
{
    link *p = initLink();
    displayLink(p);

    printf("insert one data into link table\n");
    p = insertLink(p, 10, 3);
    printf("display new link table\n");
    displayLink(p);


    printf("delete one data into link table\n");
    p = deleteLink(p, 3);
    printf("display new link table\n");
    displayLink(p);


    printf("select one data into link table\n");
    int index = selectLink(p, 3);
    printf("the value you want to select is index %d\n", index);


    printf("update one data value of link table\n");
    p = amendLink(p, 5, 3);
    printf("display table after updated\n");
    displayLink(p);

    return 0;
}
link *initLink()
{
    link *p = NULL;
    link *temp = (link*)malloc(sizeof(link));
    temp->elem = 1;
    temp->next = NULL;
    p = temp;

    for (int i = 2; i < 5; i++)
    {
        link * a = (link *)malloc(sizeof(link));
        a->elem = i;
        a->next = NULL;
        temp->next = a;
        temp = temp->next;
    }
    return p;
}
void displayLink(link* p)
{
    link * temp = p;
    while (temp)
    {
        printf("%d", temp->elem);
        temp = temp->next;
    }
    printf("\n");
}
link * insertLink(link *p, int elem, int add)
{
    link *temp = p;
    for (int i = 1; i < add; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("insert position is not valid\n");
            return p;
        }
    }
    link * c = (link*)malloc(sizeof(link));
    c->elem = elem;
    c->next = temp->next;
    temp->next = c;
    return p;
}
link * deleteLink(link *p, int add)
{
    link* temp = p;
    for (int i = 1; i < add; i++)
    {
        temp = temp->next;
        if (temp->next == NULL)
        {
            printf("delete position is not valid\n");
        }
    }
    link* del = temp->next;
    temp->next = temp->next->next;
    free(del);

    return p;
}
int selectLink(link *p, int elem)
{
    link *temp = p;
    int i = 1;
    while (temp->next)
    {
        if (temp->elem == elem)
        {
            return i;
        }
        i++;
        temp = temp->next;
    }
    printf("not found this value\n");
    return 0;
}
link *amendLink(link *p, int elem, int add)
{
    link* temp = p;
    for (int i = 1; i < add; i++)
    {
        temp = temp->next;
    }
    temp->elem = elem;
    return p;
}
#endif
#if test_1_8
typedef struct Link
{
    char elem;
    struct Link * next;
}link;
bool linkIntersect(link *L1, link *L2)
{
    link *p1 = L1;
    link *p2 = L2;

    while (p1)
    {
        while (p2)
        {
            if (p1 == p2)
            {
                return true;
            }
            p2 = p2->next;
        }
        p1 = p1->next;
    }
}
// method-2
bool linkIntersect_2(link *L1, link *L2)
{
    link *p1 = L1;
    link *p2 = L2;
    while (p1->next)
    {
        p1 = p1->next;
    }
    while (p2->next)
    {
        p2 = p2->next;
    }
    if (p1 == p2)
    {
        return true;
    }
    return false;
}
// method-3
bool linkIntersect(link *L1, link *L2)
{
    link *plong = L1;
    link *pshort = L2;
    link *temp = NULL;
    int num1 = 0, num2 = 0, step = 0;
    while (plong)
    {
        num1++;
        plong = plong->next;
    }
    while (pshort)
    {
        num2++;
        pshort = pshort->next;
    }

    plong = L1;
    pshort = L2;
    step = num1 - num2;
    if (num1 < num2)
    {
        plong = L2;
        pshort = L1;
        step = num2 - num1;

    }
    temp = plong;
    while (step)
    {
        temp = temp->next;
        step--;
    }
    while (temp && pshort)
    {
        if (temp == pshort)
        {
            return true;
        }
        temp = temp->next;
        pshort = pshort->next;
    }
    return false;
}
#endif
#if test_1_9
typedef struct {
    unsigned int nMant : 23;
    unsigned int nExp : 8;
    unsigned int nSign : 1;
}FP_SINGLE;

int main()
{
    char strBin[24] = { 0 };
    float f = 19.65;
    FP_SINGLE *p = (FP_SINGLE*)&f;

    itoa(p->nMant, strBin, 2);
    printf("nMant : %s\n", strBin);
    itoa(p->nExp, strBin, 2);
    printf("nExp : %s\n", strBin);
    itoa(p->nSign, strBin, 2);
    printf("nSign : %s\n", strBin);

    return 0;
}
#endif
#if test_1_10
int main()
{
    int array[10] = { 23, 1, 4, 9, 6, 17, 24, 56, 98, 72 };
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            int temp;
            if (array[j + 1] < array[j])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
#endif
#if test_1_11
#define BIT3 (0x1 << 3 ) 
static int a;
//设置a的bit 3: 
void set_bit3(void)
{
    a |= BIT3; //将a第3位置1 
}
//清a的bit 3 
void set_bit3(void)
{
    a &= ~BIT3; //将a第3位清零 
}
//保留第k位
void set_bit3(void)
{
    a &= BIT3;
}
#endif
#if test_1_12
#include"assert.h"
// 方法一：
void strcpy(char *strdest, const char *strsrc)
{
    //对源地址和目的地址加非0断言，加3分
    assert((strdest != null) && (strsrc != null));
    while ((*strdest++ = *strsrc++) != ‘\0’);
}
// 方法二
char *stcpy(char *str1, const char *str2)
{
    assert((str1 != NULL) && (str2 != NULL));
    char *address = str1;
    while ((*address++ = *str2++) != '\0');
    return address;
}
#endif
#if test_1_13
#define max_len 50
void loopmove(char *pstr, int steps);
int main()
{
    char pstr[] = "abcdefp";
    loopmove(pstr, 2);
    printf(pstr);
    return 0;
}
void loopmove(char *pstr, int steps)
{
    int n = strlen(pstr) - steps;
    char tmp[max_len];
    strcpy(tmp, pstr + n);
    strcpy(tmp + steps, pstr);
    *(tmp + strlen(pstr)) = '\0';
    strcpy(pstr, tmp);
}

// 方法二

//void loopmove(char *pstr, int steps)
//{
//    int n = strlen(pstr) - steps;
//    char tmp[max_len];
//    memcpy(tmp, pstr + n, steps);
//    memcpy(pstr + steps, pstr, n);
//    memcpy(pstr, tmp, steps);
//}
#endif
#if test_1_14
typedef union W {
    char x;
    int y;
}c;
int main()
{
    c c;
    c.y = 1;
    printf("%d", c.x);
    return 0;
}
#endif
#if test_1_15
char *strrcat(char *dst, const char *src)
{
    char *ch = dst;
    while (*ch)
    {
        ch++;
    }
    while (*ch++ = *src++);
    return dst;
}
#endif
#if test_1_16
typedef struct node
{
    int number;
    struct node* next;
}person;

person* initLink(int n)
{
    person *head = (person*)malloc(sizeof(person));
    head->number = 1;
    head->next = NULL;
    person *cyclic = head;
    for (int i = 2; i <= n; i++)
    {
        person* body = (person*)malloc(sizeof(person));
        body->number = i;
        body->next = NULL;
        cyclic->next = body;
        cyclic = cyclic->next;
    }
    cyclic->next = head;
    return head;
}
void findAndKillK(person * head, int k, int m) {
    person * tail = head;
    //找到链表第一个结点的上一个结点，为删除操作做准备
    while (tail->next != head) {
        tail = tail->next;
    }
    person * p = head;
    //找到编号为k的人
    while (p->number != k) {
        tail = p;
        p = p->next;
    }
    //从编号为k的人开始，只有符合p->next==p时，说明链表中除了p结点，所有编号都出列了，
    while (p->next != p) {
        //找到从p报数1开始，报m的人，并且还要知道数m-1de人的位置tail，方便做删除操作。
        for (int i = 1; i < m; i++) {
            tail = p;
            p = p->next;
        }
        tail->next = p->next;//从链表上将p结点摘下来
        printf("出列人的编号为:%d\n", p->number);
        free(p);
        p = tail->next;//继续使用p指针指向出列编号的下一个编号，游戏继续
    }
    printf("出列人的编号为:%d\n", p->number);
    free(p);
}

int main() {
    printf("输入圆桌上的人数n:");
    int n;
    scanf("%d", &n);
    person * head = initLink(n);
    printf("从第k人开始报数(k>1且k<%d)：", n);
    int k;
    scanf("%d", &k);
    printf("数到m的人出列：");
    int m;
    scanf("%d", &m);
    findAndKillK(head, k, m);
    return 0;
}
#endif
#if test_1_17
int main()
{
    char src[] = "hello world!";
    int len = strlen(src);
    char *dest = (char*)malloc(len + 1);
    char *d = dest;
    char *s = &src[len - 1];
    while (len-- != 0)
    {
        *d++ = *s--;
    }
    *d = '\0';
    printf("%s\n", dest);
    free(dest);
    return 0;
}
#endif
#if test_1_18
void inverse(char *p)
{
    if (*p = = '\0')
        return;
    inverse(p + 1);
    printf("%c", *p);
}
int main(int argc, char *argv[])
{
    inverse("abc\0");
    return 0;
}
#endif
#if test_1_19
#include"stdio.h"
static int top = -1;
void push(char *a, char elem) 
{
    a[++top] = elem;
}
char pop(char *a) 
{
    if (top == -1) 
    {
        return 0;
    }
    a[top] = '\0';
    --top;
    return a[top];
}
char visit(char *a) 
{
    if (top == -1) 
    {
        return 0;
    }
    return a[top];
}
int main() 
{
    char a[30] = { 0 };
    char bracket[30] = { 0 };
    printf("Enter bracket : ");
    scanf("%s", a);
    getchar();
    int len = strlen(a);
    for (int i = 0; i < len; i++) 
    {
        if ((a[i] == '(') || (a[i] == '{')) 
        {
            push(bracket, a[i]);
        }
        else 
        {
            if (a[i] == ')') 
            {
                if (visit(bracket) == '(')
                {
                    pop(bracket);
                }
                else 
                {
                    printf("Match Fail");
                    return 0;
                }
            }
            else 
            {
                if (visit(bracket) == '{')
                {
                    pop(bracket);
                }
                else 
                {
                    printf("Match Fail");
                    return 0;
                }
            }
        }
    }
    if (top == -1) 
    {
        printf("Match Ok");
    }
    else 
    {
        printf("Match Fail");
    }
    return 0;
}
#endif
#if test_1_20
int minv(int a[], int len)
{
    int temp;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a[0];
}
int main()
{
    int gcd = 0;
    int a[3] = { 60, 30, 24 };
    int len = sizeof(a) / sizeof(a[0]);
    int min = minv(a, len);
    printf("The min value is : %d\n", min);

    for (int i = min; i > 0; i--)
    {
        for (int j = 0; j < len; j++)
        {
            if (a[j] % i == 0)
            {
                if (j == len - 1)
                {
                    gcd = i;
                    printf("The gcd is :%d", gcd);
                    return gcd;
                }
            }
            else
            {
                break;
            }
        }
    }
    return 0;
}
#endif
#if test_1_21
#include"math.h"
int main() 
{
    int c = 0, count=0;
    printf("  a     b    c       a     b    c       a     b    c       a     b    c\n");
    for (int a = 1; a <= 100; a++) 
    {
        for (int b = a + 1; b <= 100; b++) 
        {
            c = (int)sqrt(a*a + b * b);
            if (c*c == a * a + b * b&&a + b > c&&a + c > b&&b + c > a&&c <= 100) 
            {
                printf("%4d %4d %4d     ", a, b, c);
                count++;
                if (count % 4 == 0)
                {
                    printf("\n");
                }
            }
        }
    }
    printf("\n");
    return 0;
}
#endif
#if test_1_22
char * longestPalindrome(char *s)
{
    int len = strlen(s);
    if (len <= 1) { return s; }
    int start = 0;
    int maxlen = 0;
    //i表示中间元素下标
    for (int i = 1; i < len; i++)
    {
        //偶数长度
        int low = i - 1;
        int high = i;
        while (low >= 0 && high < len && s[low] == s[high])
        {
            low--;
            high++;
        }
        if (high - low - 1 > maxlen)
        {
            maxlen = high - low - 1;
            start = low + 1;
        }
        //奇数长度
        low = i - 1; high = i + 1;
        while (low >= 0 && high < len && s[low] == s[high])
        {
            low--;
            high++;
        }
        if (high - low - 1 > maxlen)
        {
            maxlen = high - low - 1;
            start = low + 1;
        }
    }
    char *arr = (char *)malloc(sizeof(int) * (maxlen * 2));
    int i = 0;
    for (; i < maxlen; i++)
    {
        arr[i] = s[start++];
    }
    arr[i] = '\0';
    return arr;
}
int main()
{
    char s[8] = "abcdcef";
    char s1[7] = { 0 };
    *s1 = longestPalindrome(s);
    printf("%s\n", s1);
}
#endif
//int main() 
//{
//    printf("Enter a string: \n");
//    int a, sum =0;
//    int b[10];
//    scanf("%d", &a);
//    for (int i = 1; i<a; i++) 
//    {
//        for (int j = 1; j < a; j++) 
//        {
//            if ((i < j) && (i + j == a))
//            {
//                printf("%d, %d\n", i, j);
//            }
//            for (int k = 1; k < a; k++) 
//            {
//                if (i < j && j < k && i + j + k == a) 
//                {
//                    printf("%d, %d, %d\n", i, j, k);
//                }
//            }
//        }
//    }
//    return 0;
//}
//2. Please write a program which can print all 6 digitsnumbers composed of 1, 2, 2, 3, 4, 5.
//#include "stdio.h"
//void showAnother(char *str, int start, int num)
//{
//    int i = 0;
//    char c;
//    if (str[start] == '\0')
//    {
//        printf("%s\n", str);
//    }
//
//    if (str == NULL)
//        return;
//
//    for (i = start; i < num; i++)
//    {
//        c = str[start];
//        str[start] = str[i];
//        str[i] = c;
//        showAnother(str, start + 1, num);
//        c = str[start];
//        str[start] = str[i];
//        str[i] = c;
//    }
//}
//void showDigit(char *str, int start, int num)
//{
//    int i = 0;
//    char c;
//    if (str == NULL)
//        return;
//
//    for (i = start; i < num; i++)
//    {
//        c = str[start];
//        str[start] = str[i];
//        str[i] = c;
//        showAnother(str, start + 1, num);
//        c = str[start];
//        str[start] = str[i];
//        str[i] = c;
//    }
//
//
//}
//
//
//int main()
//{
//    char str[] = "122345";
//
//    showDigit(str, 0, sizeof(str) / sizeof(str[0]));
//
//
//}

// method 2
//#include"string.h"
//void showDigit(char *str, int len)
//{
//    char *temp1 = (char*)malloc(sizeof(char));
//    memcpy(temp1, str, len);
//    for (int i = 0; i < len - 1; i++) 
//    {
//        for (int j = i + 1; j < len&&str[j]!='\0'; j++) 
//        {
//            char temp = str[i];
//            str[i] = str[j];
//            str[j] = temp;
//            if (str[i] == str[j])continue;
//        }
//    }
//    if (strcmp(str, temp1)!=0) 
//    {
//        showDigit(str, len);
//    }
//}
//int main() 
//{
//    char str[] = "122345";
//    printf("%s\n", str);
//    showDigit(str, sizeof(str) / sizeof(str[0]));
//    return 0;
//}
//int *numberOfItems(char *s, int startIndices_count, int* startIndices,
//    int endIndices_count, int *endIndices, int *result_count)
//{
//    if (s == NULL && startIndices == NULL && endIndices == NULL)
//    {
//        exit(0);
//    }
//    if (startIndices_count != endIndices_count)
//    {
//        exit(0);
//    }
//    int start_indice = 0, end_indice =0;
//    int *a = (int*)malloc(startIndices_count *sizeof(int));
//    int m = 0;
//    for (int i = 0; i < endIndices_count; i++)
//    {
//        int flag = 0, count = 0, c = 0;
//        for (int j = startIndices[i] - 1; j < endIndices[i]; j++)
//        {
//            if (s[j] == '|' && flag == 0)
//            {
//                start_indice = j;
//                flag = 1;
//                count++;
//                continue;
//            }
//            if (s[j] == '|')
//            {
//                end_indice = j;
//                count++;
//            }
//            if (end_indice - start_indice > 0)
//            {
//                c = end_indice - start_indice + 1 - count;
//            }
//        }
//        a[m++] = c;
//        printf("%d\n", c);
//    }
//    *result_count = endIndices_count;
//    return a;
//}
//int main() 
//{
//    int count=0;
//    char s[] = "*|*|*|";
//    int b1[1] = { 1 };
//    int b2[1] = { 6 };
//    int *aa = numberOfItems(s, 1, b1, 1, b2, &count);
//    printf("%d %d %d %d\n%d", aa[0], aa[1], aa[2], aa[3], count);
//}
//
//int *miniHeaviestSet(int arr_count, int *arr, int *result_count) 
//{
//    int sum = 0, sumA = 0, count = 0;
//    for (int i = 0; i < arr_count; i++)
//    {
//        sum += arr[i];
//    }
//    int i, j, t;
//    for (i = 1; i <= arr_count-1; i++)
//        for (j = i + 1; j <= arr_count; j++)
//            if (arr[i] > arr[j])    //如果前一个数比后一个数大，则利用中间变量t实现两值互换
//            {
//                t = arr[i];
//                arr[i] = arr[j];
//                arr[j] = t;
//            }
//    /*for (int i = 0; i < arr_count - 1; i++)
//    {
//        for (int j = i + 1; j < arr_count; j++)
//        {
//            if (arr[i] < arr[j])
//            {
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }*/
//    for (int i = 0; i < arr_count; i++)
//    {
//        sumA += arr[i];
//        if (sumA > sum - sumA)
//        {
//            break;
//        }
//        else
//        {
//            count++;
//        }
//    }
//    int *a = malloc(sizeof(int)*(count+1));
//    for (int i = count; i >=0; i--)
//    {
//        *(a + i) = arr[count -i];
//    }
//    *result_count = count+1;
//    return a;
//}
//int main() 
//{
//    int b = 0;
//    int a[7] = { 6, 5, 3, 2, 4, 1, 2 };
//    int *aa = miniHeaviestSet(7, a, &b);
//    printf("%d %d %d %d", aa[0], aa[1], aa[2], b);
//     
//}

int maximumPages(SinglyLinkedListNode* head) 
{
    SinglyLinkedListNode* slow = head;
    SinglyLinkedListNode* fast = slow->next;

//finding middle of linked list
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

//split the list in two
    SinglyLinkedListNode* head1 = head;
    SinglyLinkedListNode* head2 = slow->next;
    slow->next = NULL;

//reverse the second list
    reverseList(head2);

//calculate max pages
    int maxi = INT_MIN;
    int sum = 0;

    SinglyLinkedListNode* ptr1 = head1;
    SinglyLinkedListNode* ptr2 = head2;
    while (ptr1 && ptr2)
    {
        sum = ptr1->data + ptr2->data;
        maxi = max(maxi, sum);

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return maxi;
}