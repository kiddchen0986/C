/*************************************
         ÎÄ¼þµÄ¹¦ÄÜ£º
         ¿ª·¢Ê±¼ä  £º
         ×÷    Õß  £º
         ÐÞ ¶© °æ±¾£º
         º¯ÊýÁÐ±í  £º

**************************************/

#include "stdafx.h"
#include "define.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define PI 3.1415926

#if lesson_1
int main(void)
{
    /*½øÐÐprintfÊä³öHelloWorld*/
    printf("Hello World \n");  //½øÐÐHelloWorld
    printf("Hello World \n");
    printf("Hello World \n");
    system("pause");
    return 0;
}
#endif

#if lesson_2_0
//ÏàÓ¦µÄ´úÂëÖ÷ÌâµÄ±àÐ´
/***********************************************************
  Author:   LuHao
  EMAIL:	howevero@163.com
  Version:  1.2
  Date:	   19/01/20
  Description:  ÀûÓÃprintf¶Ô¸ß¶ÈºÍÖØÁ¿µÄÖµ½øÐÐÊä³ö
 ************************************************************/
int main(void)
{
    //int ÊÇ¶¨ÒåÁËÒ»¸öÕûÐÎ£¬ÕûÊý
    int height;
    //float¶¨ÒåÁËÒ»¸ö¸¡µãÐÍ£¬Ð¡ÊýÐÍ
    float weight;
    height = 175;
    weight = 75.5;
    /*ÀûÓÃprintf¶Ô¸ß¶ÈºÍÖØÁ¿µÄÖµ½øÐÐÊä³ö*/
    printf("The height is %d cm, The HEIGHT is %d \n", height, weight);

    system("pause");
    return 0;
}
#endif

#if lesson_2_1
//ÏàÓ¦µÄ´úÂëÖ÷ÌâµÄ±àÐ´
/***********************************************************
  Author:   LuHao
  EMAIL:	howevero@163.com
  Version:  1.2
  Date:	   19/01/20
  Description:  scanfµÄÊ¹ÓÃ²âÊÔ£¬»ñÈ¡¼üÅÌµÄÊäÈë
 ************************************************************/
int main(void)
{
    int height;
    float weight;

    printf("input the height (cm),the weight  (kg)\n");
    //»ñÈ¡¼ÆËã»úµÄÊäÈë
    scanf("%d,%f", &height, &weight);
    //´òÓ¡ÊäÈë½á¹û
    printf("the height is %dcm,the weight is %4.3fkg\n", height, weight);

    system("pause");
    return 0;
}
#endif

#if lesson_2_2
#define PI 3.1415926
/***********************************************************
  Author:   LuHao
  EMAIL:	howevero@163.com
  Version:  1.2
  Date:	   19/01/19
  Description:  Í¨¹ý»ñÈ¡¼üÅÌµÄÊäÈë°ë¾¶Öµ£¬¶ÔÔ²µÄÃæ»ý½øÐÐ¼ÆËã
 ************************************************************/
int main(void)
{
    //Ô²µÄ°ë¾¶
    float R;
    float S;
    ////////µÚÒ»´ÎÇóÈ¡Ô²µÄÃæ»ý//////////////
    //ÔÚÆÁÄ»ÉÏËµÃ÷ÊäÈëÄÚÈÝ
    printf("input the radius:(float)\n");
    //»ñÈ¡¼üÅÌÊäÈëÄÚÈÝ
    scanf("%f", &R);
    //Ãæ»ýµÄ¼ÆËã
    //S=3.1415926*a*R*R
    S = PI * R*R;
    printf("AREA is %f\n", S);
    ////////µÚÒ»´ÎÇóÈ¡Ô²µÄÃæ»ý//////////////

    ////////µÚ¶þ´ÎÇóÈ¡Ô²µÄÃæ»ý//////////////
    //ÔÚÆÁÄ»ÉÏËµÃ÷ÊäÈëÄÚÈÝ
    printf("input the radius:(float)\n");
    //»ñÈ¡¼üÅÌÊäÈëÄÚÈÝ
    scanf("%f", &R);
    //Ãæ»ýµÄ¼ÆËã
    //S=3.1415926*a*R*R
    S = PI * R*R;
    printf("AREA is %f\n", S);
    ////////µÚ¶þ´ÎÇóÈ¡Ô²µÄÃæ»ý//////////////

    system("pause");
    return 0;
}
#endif

#if lesson_2_3
float cube(float x);
int main()
{
    float x;
    float result_x3;
    x = 2.3;
    result_x3 = cube(x);
    printf("result is %f\n", result_x3);

    system("pause");
    return 0;

}

float cube(float y)
{
    float x_3;
    x_3 = y * y*y;
    return x_3;
}

#endif


#if lesson_2_4
float swap(float x, float y);
int main(void)
{
    float x = 5;
    float y = 10;
    float swap_result;
    printf("x is %f,y is %f\n", x, y);
    swap(x, y);
    //Êä³ö¼ÆËã½á¹û
    printf("x is %f,y is %f\n", x, y);
    ////////////////////////////////////////
    system("pause");
    return 0;
}

float swap(float x, float y)
{
    float temp;
    temp = x;
    x = y;
    y = temp;
    return(temp);
}
#endif

#if lesson_2_5
float circle_area(void);
int main(void)
{
    ////////µÚÒ»´ÎÇóÈ¡Ô²µÄÃæ»ý//////////////
    circle_area();
    ////////µÚÒ»´ÎÇóÈ¡Ô²µÄÃæ»ý//////////////
    ////////µÚ¶þ´ÎÇóÈ¡Ô²µÄÃæ»ý//////////////
    circle_area();
    ////////µÚ¶þ´ÎÇóÈ¡Ô²µÄÃæ»ý//////////////
    system("pause");
    return 0;
}

float circle_area(void)
{
    //Ô²µÄ°ë¾¶
    float R;
    float S;
    //ÔÚÆÁÄ»ÉÏËµÃ÷ÊäÈëÄÚÈÝ
    printf("input the radius:(float)\n");
    //»ñÈ¡¼üÅÌÊäÈëÄÚÈÝ
    scanf("%f", &R);
    //Ãæ»ýµÄ¼ÆËã
    //S=3.1415926*a*R*R
    S = PI * R*R;
    printf("AREA is %f\n", S);
    return S;
}


#endif

#if lesson_2_6

int main(void)
{
    //¶¨ÒåË®¼Û±äÁ¿
    float price;
    //¶¨ÒåÓÃË®Á¿
    float water_consumption;
    //¶¨ÒåÓÃË®Á¿µµÎ»
    int level;
    printf("input water consumption\n");
    //»ñÈ¡¼ÆËã»úµÄÊäÈë
    scanf("%f", &water_consumption);
    //if else ÅÐ±ðË®¼Û
    /*
    if(water_consumption<50)
    {
        price=0.5*water_consumption;
    }
    else if(water_consumption<100)
    {
        price=0.6*water_consumption+10;
    }
    else
    {
        price=0.7*water_consumption+20;
    }
    */
    // switch ÅÐ±ðË®¼Û
    //»ñÈ¡ÓÃË®Á¿µµÎ»£¬ÏòÏÂÈ¡Õû
    level = water_consumption / 50;

    switch (level)
    {
    case 0:
        price = 0.5*water_consumption;
        break;
    case 1:
        price = 0.6*water_consumption + 10;
        break;
    default:
        price = 0.7*water_consumption + 20;
        break;
    }

    //Êä³öË®¼Û
    printf("the price is %4.2f\n", price);

    system("pause");
    return 0;
}


#endif
#if lesson_3_1
/*ÔÚº¯ÊýÄÚ²¿ÉúÃü£»*/
int func(int a)
{
    int b, c;
    b = a;
    c = a;
    return a + b + c;
}
int main(void)
{
    int m, n;
    m = 3;
    /*µ÷ÓÃº¯Êýfunc*/
    n = func(m);

    printf(" n = %d \n", n);
    //printf("funcº¯ÊýbµÄ±äÁ¿ %d",c);
    system("pause");
    return 0;
}
#endif
#if lesson_3_2
int a, b;  //È«¾Ö±äÁ¿
int func1(int num1) {
    return num1;
}
float x, y;  //È«¾Ö±äÁ¿
int func2(int num2) {
    return num2;
}
int c = 0;
int main() {
    a = 2;
    x = 3;
    b = func1(x);  /*x = 3*/
    y = func2(x);  /*x = 3*/
    c = b + y;
    printf("a+x =  %d \n", c);
    system("pause");
    return 0;
}

#endif

#if lesson_3_3
/*CÓïÑÔ¹æ¶¨:¹æÔò´ÓÐ¡µ½´óµÄ×÷ÓÃÓòÈ¥Ñ°ÕÒ±äÁ¿µÄÖµ£¬²»ÄÜ·´¹ýÀ´Ñ°ÕÒ*/
int n = 10;  //È«¾Ö±äÁ¿
void func1() {
    int n = 20;  //¾Ö²¿±äÁ¿
    printf("func1 n: %d\n", n);
}
void func2(int n) {
    printf("func2 n: %d\n", n);
}
void func3() {
    printf("func3 n: %d\n", n);
}
int main() {
    int n = 30;  //¾Ö²¿±äÁ¿
    func1();     /*´òÓ¡½á¹ûÊÇ20*/
    func2(n);
    func3();
    //´úÂë¿éÓÉ{}°üÎ§
    {
        int n = 40;  //¾Ö²¿±äÁ¿
        printf("block n: %d\n", n);
    }
    printf("main n: %d\n", n);
    system("pause");
    return 0;
}

#endif
#if lesson_3_4
/*ÐÎ²Î±äÁ¿*/
void exchange(int a, int b)
{
    int t;   //¾Ö²¿±äÁ¿
    t = a;
    a = b;
    b = t;
    printf("º¯ÊýÖÐa=%d,b=%d\n", a, b);
}
int main()
{

    int a = 5, b = 3;
    exchange(a, b);
    printf("Ö÷º¯Êýa=%d,b=%d\n", a, b);
    system("pause");
    return 0;
}

#endif
#if lesson_3_5
void test()
{
    auto a = 0.5;              //¶¨Òå×Ô¶¯´æ´¢ÀàÐÍ±äÁ¿
    static int b = 3;         //¶¨Òå¾²Ì¬´æ´¢ÀàÐÍ±äÁ¿
    a++;                      //a = a+1;
    b++;                      //b = b+1;
    printf("´òÓ¡³öaµÄÖµ%f\n", a);        //Êä³öa
    //printf("´òÓ¡³öbµÄÖµ%d\n", b);        //Êä³öb

}
int main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        if (i == 4)
            //break;
            continue;
        test();              //µ÷ÓÃtestº¯Êý

    }

    i = 0;
    /*	while(i < 10)
        {
            if(i > 4)
                break;
            test();
            i = i+2;

        }
        */
        /*µ÷ÓÃÈý´Îtest£¨£©º¯Êý*/
          //test();
          //test();
          //test();
    system("pause");
    return 0;
}
#endif
#if lesson_3_6
/*srand()ºÍrand()*/
//#include<time.h>
/*²ÎÊýseedÊÇrand()µÄÖÖ×Ó£¬ÓÃÀ´³õÊ¼»¯rand()µÄÆðÊ¼Öµ¡£
µ«ÊÇ£¬Òª×¢ÒâµÄÊÇËùÎ½µÄ¡°Î±Ëæ»úÊý¡±Ö¸µÄ²¢²»ÊÇ¼ÙµÄËæ»úÊý¡£
ÆäÊµ¾ø¶ÔµÄËæ»úÊýÖ»ÊÇÒ»ÖÖÀíÏë×´Ì¬µÄËæ»úÊý£¬¼ÆËã»úÖ»ÄÜÉú³ÉÏà¶ÔµÄËæ»úÊý¼´Î±Ëæ»úÊý¡£
¼ÆËã»úÉú ³ÉµÄÎ±Ëæ»úÊý¼ÈÊÇËæ»úµÄÓÖÊÇÓÐ¹æÂÉµÄ ¡ª¡ª Ò»²¿·Ý×ñÊØÒ»¶¨µÄ¹æÂÉ£¬Ò»²¿·ÝÔò²»×ñÊØÈÎºÎ¹æÂÉ¡£
±ÈÈç¡°ÊÀÉÏÃ»ÓÐÁ½Æ¬ÐÎ×´ÍêÈ«ÏàÍ¬µÄÊ÷Ò¶¡±£¬ÕâÌåÏÖµ½ÁËÊÂÎïµÄÌØÐÔ ¡ª¡ª ²îÒìÐÔ£»µ«ÊÇÃ¿ÖÖÊ÷µÄÒ¶×Ó¶¼ÓÐ½üËÆµÄÐÎ×´£¬ÕâÕýÊÇÊÂÎïµÄ¹²ÐÔ
¡ª¡ª ¹æÂÉÐÔ¡£*/
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void main()
{
    int i, j;
    srand((int)time(NULL));
    for (i = 0; i < 10; i++)
    {
        j = 1 + (int)(10.0*rand() / (RAND_MAX + 1.0));
        printf("%d\n", j);

    }
    system("pause");
}

#endif
#if lesson_3_7
#include <stdlib.h>
#include <stdio.h>
void main(void)
{
    char *s; int ix;
    char buffer[20];
    int i = 3445;
    long l = -344115L;
    unsigned long ul = 1234567890UL;
    s = " -9885 pigs"; /* Test of atoi */
    ix = atoi(s);
    printf("atoi test: ASCII string: %s\t\tinteger: %d\n", s, ix);
    _itoa(i, buffer, 10);
    printf("String of integer %d (radix 10): %s\n", i, buffer);
    _itoa(i, buffer, 16);
    printf("String of integer %d (radix 16): 0x%s\n", i, buffer);
    _itoa(i, buffer, 2);
    printf("String of integer %d (radix 2): %s\n", i, buffer);
    _ltoa(l, buffer, 16);
    printf("String of long int %ld (radix 16): 0x%s\n", l,
        buffer);
    _ultoa(ul, buffer, 16);
    printf("String of unsigned long %lu (radix 16): 0x%s\n", ul,
        buffer);
    system("pause");
}
#endif
#if lesson_3_8
#include <stdlib.h>
#include <stdio.h>
#include <lib_a+b.h>
void main(void)
{
    int a = 3;
    int b = 6;
    int c;
    c = func(a, b);
    printf("a+b ½á¹ûÊÇ %d", c);
    system("pause");
}

#endif
#if lesson_3_9
#include<iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;

int main()
{
    //1¡¢¶ÁÈëÒ»ÕÅÍ¼Æ¬£¬·µ»ØÒ»¸ö¾ØÕó¶ÔÏó
    Mat img = imread("pic.jpg");


    //2¡¢¶¨ÒåÒ»¸ö´°¿ÚÊ¢·Å¸ÃÍ¼Æ¬
    namedWindow("Ô­Í¼");


    //3¡¢ÏÔÊ¾¸ÃÍ¼Æ¬
    imshow("ÓÎÏ·Ô­Í¼", img);


    //4¡¢µÈ´ý6000msºó´°¿ÚÍË³ö
    waitKey(6000);


    return 0;
}
#endif
#if lesson_3_10
# include <stdio.h>
int main(void)
{
    int i = 1;
    int j = 1;
    double sum = 0;  //½á¹û¿Ï¶¨ÊÇÐ¡Êý, ËùÒÔÒª¶¨Òå³Édouble»òfloatÐÍ
    while (1.0 / i > 1e-6)  /*µ±1/iÐ¡ÓÚ10µÄ-6´Î·½Ê±Í£Ö¹Ñ­»·¡£Õâ¸öÑ­»·Ìõ¼þÊÇ×Ô¼º¶¨µÄ, ¶¨µÃÔ½Ð¡×îºóµÄ½á¹û¾ÍÔ½¾«È·¡£×¢Òâ1Ò»¶¨ÒªÐ´³ÉÐ¡ÊýµÄÐÎÊ½¼´1.0*/
    {
        sum += (1.0 / i) * j;
        j = -j;  //ÊµÏÖÕý¸º½»Ìæ
        /*±í´ïÊ½3*/
        i += 2;
    }
    sum *= 4;
    printf("sum = %lf\n", sum);  //doubleÊÇ%lf, È¡6Î»Ð¡ÊýÊÇ%.6
    system("pause");
    return 0;
}
#endif
#if lesson_3_11
# include <stdio.h>
# include <math.h>
int main(void)
{
    float a, b, c;  //¶¨ÒåÒ»Ôª¶þ´Î·½³ÌµÄÈý¸öÏµÊý
    char k;  //ÓÃÓÚºóÃæÅÐ¶ÏÊÇ·ñÒª¼ÌÐøÊäÈë
    double delta, x1, x2;  /*deltaÓÃÀ´´æ´¢b*b - 4*a*cµÄÖµ£»x1ºÍx2µÄÖµ·Ö±ðÎª·½³ÌµÄ½â*/
    do
    {
        //ÊäÈëÒ»Ôª¶þ´Î·½³ÌµÄÈý¸öÏµÊýa¡¢b¡¢c
        printf("ÇëÊäÈëÒ»Ôª¶þ´Î·½³ÌµÄÈý¸öÏµÊý, ÓÃ»Ø³µ·Ö¸ô:\n");
        printf("a = ");
        scanf("%f", &a);
        while (getchar() != '\n');  /*ÈÝ´í´¦Àí, scanfºóÃæ¶¼¼ÓÉÏÕâÒ»¾ä, ×÷ÓÃÊÇÇå¿ÕÊäÈë»º³åÇø, ÒÔ·ÀÓÃ»§ÂÒÊäÈë*/
        printf("b = ");
        scanf("%f", &b);
        while (getchar() != '\n');
        printf("c = ");
        scanf("%f", &c);
        while (getchar() != '\n');
        delta = b * b - 4 * a*c;
        //ÅÐ¶ÏdeltaµÄÖµÊÇ´óÓÚÁã, µÈÓÚÁã, »¹ÊÇÐ¡ÓÚÁã
        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("ÓÐÁ½¸ö½â, x1 = %f, x2 = %f\n", x1, x2);
        }
        else if (0 == delta)
        {
            x1 = x2 = (-b) / (2 * a);
            printf("ÓÐÎ¨Ò»½â, x1 = x2 = %f\n", x1);
        }
        else
        {
            printf("ÎÞÊµÊý½â\n");
        }
        //Ñ¯ÎÊÊÇ·ñÏë¼ÌÐøÊäÈë
        printf("ÄúÏë¼ÌÐøÂð, YÏë, N²»Ïë:");
        scanf("%c", &k);  //ÊäÈëY»òÕßN, ±íÊ¾¡°Ïë¡±»ò¡°²»Ïë¡±
        while (getchar() != '\n');
    } while ('Y' == k);
    system("pause");
    return 0;
}
#endif
#if lesson_3_12
/*µÝ¹éº¯ÊýÖ®½×³ËÀý×Ó5! = */
#include<stdio.h>
int cal(int n)
{
    int result;
    /*µÝ¹éµÄ½áÊøÌõ¼þ*/
    if (n == 1)
    {
        result = 1;
    }
    else
        result = n * cal(n - 1);
    return result;
}
void main()
{
    int n = 6;
    printf("%dµÄ½×³Ë = %d \n", n, cal(n));
    system("pause");

}
#endif
#if lesson_3_13
int cal_age(int n)
{
    int age;
    /*µÝ¹éº¯Êý½áÊøÌõ¼þ*/
    if (n == 1)
    {
        age = 10;
    }
    else
        age = cal_age(n - 1) + 2;
    return age;

}
void main()
{
    int n = 5;
    printf("%d \n", cal_age(n));
    system("pause");

}
#endif
#if lesson_4_1
int main()
{
    FILE *fp;
    fp = fopen("D:\\data.txt", "w");//´ò¿ª²Ù×÷£¬Èç¹ûÎÄ¼þ²»´æÔÚ£¬Ôò´´½¨ÎÄ¼þ£¡
    fclose(fp);
}
#endif
#if lesson_4_2
int main()
{

    FILE *fp1;
    FILE *fp2;
    FILE *fp3;

    if ((fp1 = fopen("data_fail.txt", "r+")) == NULL)
    {
        printf("can't open file !!");
    }


    fp1 = fopen("data.txt", "w+");
    fclose(fp1);

    fp2 = fopen("data_c.txt", "w+");
    fclose(fp2);

    fp3 = fopen("data_a.txt", "a+");
    fclose(fp3);

    system("pause");
    return 0;
}
#endif

#if lesson_4_3
int main(int argc, _TCHAR* argv[])
{
    //ÎÄ¼þÖ¸ÕëÉùÃ÷
    FILE *fp1; //filepointer 1,2
    FILE *fp2;
    char c_tmp;

    //ÎÄ¼þ´ò¿ª·½Ê½ËµÃ÷¼°²âÊÔ
    //ÎÄ¼þ¶Á²Ù×÷,ÔÚ´ò¿ªÎÄ¼þÖ®Ç°ÐèÒªÈ·ÈÏÎÄ¼þÊÇ´æÔÚµÄ
    fp1 = fopen("data.txt", "r");
    //ÎÄ¼þµÄ´ò¿ªÐ´²Ù×÷£¬»áÇå³ýÎÄ¼þ£¬
    fp2 = fopen("data_c.txt", "w+");
    //Öð¸ö¶ÁÈ¡×Ö·û²¢Ð´Èëµ½ÁíÒ»¸öÎÄ¼þ
    //ÖØ¸´10´Î
    //ÐèÒª×¢ÒâµÄÊÇ£¬»Ø³µ·ûÒ²ÊÇÒ»¸ö×Ö·û£¬ÔÚ¼ÆËã×Ö·ûÊ±Òª¼ÇÂ¼
    for (int i = 0; i < 20; i++)
    {
        c_tmp = fgetc(fp1);
        fputc(c_tmp, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    system("pause");
    return 0;
}
#endif
#if lesson_4_4
int main(int argc, _TCHAR* argv[])
{
    //ÎÄ¼þÖ¸ÕëÉùÃ÷
    FILE *fp1; //filepointer 1,2
    FILE *fp2;
    char c_tmp;

    //ÎÄ¼þ´ò¿ª·½Ê½ËµÃ÷¼°²âÊÔ
    //ÎÄ¼þ¶Á²Ù×÷,ÔÚ´ò¿ªÎÄ¼þÖ®Ç°ÐèÒªÈ·ÈÏÎÄ¼þÊÇ´æÔÚµÄ
    fp1 = fopen("data.txt", "r");
    //ÎÄ¼þµÄ´ò¿ªÐ´²Ù×÷£¬»áÇå³ýÎÄ¼þ£¬
    fp2 = fopen("data_copy.txt", "w+");
    c_tmp = 0;//²»ÄÜÔÚÖ¸¶¨³õÖµµÄÊ±ºòÖ¸¶¨³ÉEOF
    while (c_tmp != EOF)//¶Áµ½ÎÄ¼þ½áÎ²£¬Î´µ½ÎÄ¼þ½áÎ²Ôò³ÖÐøÖ´ÐÐ
    {
        c_tmp = fgetc(fp1);
        fputc(c_tmp, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    system("pause");
    return 0;
}
#endif

#if lesson_4_5
int main(int argc, _TCHAR* argv[])
{
    //ÎÄ¼þÖ¸ÕëÉùÃ÷
    FILE *fp1;
    FILE *fp2;
    char num_str[10];

    //ÎÄ¼þ´ò¿ª·½Ê½ËµÃ÷¼°²âÊÔ
    //ÎÄ¼þ¶Á²Ù×÷,ÔÚ´ò¿ªÎÄ¼þÖ®Ç°ÐèÒªÈ·ÈÏÎÄ¼þÊÇ´æÔÚµÄ
    fp1 = fopen("data.txt", "r");
    //ÎÄ¼þµÄ´ò¿ªÐ´²Ù×÷£¬»áÇå³ýÎÄ¼þ£¬
    fp2 = fopen("data_copy_1.txt", "w+");
    //´ÓÔ­Ê¼ÎÄ¼þÖÐÖØ¸´¶ÁÈ¡3¸ö×Ö·û´®²¢Ð´Èëµ½ÁíÒ»¸öÎÄ¼þ

    //ÀûÓÃÖ±µ½¶ÁÈ¡µ½ÎÄ¼þ½áÎ²
    /*
    for (int i = 0; i < 50; i++)
    {
        if(!feof(fp1))
        {
            fgets(num_str ,10,fp1);
            fputs(num_str, fp2);
        }
    }
    */
    for (int i = 0; i < 50; i++)
    {
        if (feof(fp1))
        {
            break;
        }
        fgets(num_str, 10, fp1);
        fputs(num_str, fp2);
    }


    fclose(fp1);
    fclose(fp2);

    system("pause");
    return 0;
}
#endif

#if lesson_4_6
int main(int argc, _TCHAR* argv[])
{
    //ÎÄ¼þÖ¸ÕëÉùÃ÷
    FILE *fp1;
    FILE *fp2;
    int temp;

    //ÎÄ¼þ´ò¿ª·½Ê½ËµÃ÷¼°²âÊÔ
    //ÎÄ¼þ¶Á²Ù×÷,ÔÚ´ò¿ªÎÄ¼þÖ®Ç°ÐèÒªÈ·ÈÏÎÄ¼þÊÇ´æÔÚµÄ
    fp1 = fopen("data.txt", "r");
    //ÎÄ¼þµÄ´ò¿ªÐ´²Ù×÷£¬»áÇå³ýÎÄ¼þ£¬
    fp2 = fopen("data_c.txt", "w+");
    //´ÓÔ­Ê¼ÎÄ¼þÖÐÖØ¸´¶ÁÈ¡3¸ö×Ö·û´®²¢Ð´Èëµ½ÁíÒ»¸öÎÄ¼þ

    //ÀûÓÃÖ±µ½¶ÁÈ¡µ½ÎÄ¼þ½áÎ²
    while (!feof(fp1))
    {
        fscanf(fp1, "%d\n", &temp);//¶ÁÈë±ê×¼Êý¾Ý
        //Êý¾ÝÔËËã
        temp = temp + 1;


        //±£´æÊý¾ÝµÄÔËËã½á¹û
        fprintf(fp2, "%d\n", temp);
    }

    fclose(fp1);
    fclose(fp2);


    system("pause");
    return 0;
}


#endif
#if lesson_4_7

int main(int argc, _TCHAR* argv[])
{
    FILE *fpb_c;
    FILE *fpb_f;

    char num_bin_char[10];
    float num_bin_float[10];

    fpb_c = fopen("data_char.bin", "wb+");
    fpb_f = fopen("data_float.bin", "wb+");

    for (int i = 0; i < 10; i++)
    {
        num_bin_char[i] = i;
        num_bin_float[i] = i * 1.0;
        fwrite(&num_bin_char[i], sizeof(char), 1, fpb_c);
        fwrite(&num_bin_float[i], sizeof(float), 1, fpb_f);
    }

    fclose(fpb_c);
    fclose(fpb_f);

    for (int i = 0; i < 10; i++)
    {
        num_bin_char[i] = 0;
        num_bin_float[i] = 0.0;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d,%f\n", num_bin_char[i], num_bin_float[i]);
    }
    ///////////////read and show the value

    fpb_c = fopen("data_char.bin", "r+");
    fpb_f = fopen("data_float.bin", "r+");

    for (int i = 0; i < 10; i++)
    {
        fread(&num_bin_char[i], sizeof(char), 1, fpb_c);
        printf("%d,", num_bin_char[i]);
        fread(&num_bin_float[i], sizeof(float), 1, fpb_f);
        printf("%f\n", num_bin_float[i]);
    }

    fclose(fpb_c);
    fclose(fpb_f);
    /*
    for (int i = 0; i < 10; i++)
    {
        printf("%d,%f\n",num_bin_char[i],num_bin_float[i]);
    }
    */

    system("pause");
    return 0;
}

#endif

#if lesson_4_8

int main(int argc, _TCHAR* argv[])
{
    FILE *fp1;
    FILE *fp2;
    int pos;
    char num_bin_char[10];
    float num_bin_float[10];

    fp1 = fopen("data_char.txt", "w+");
    fp2 = fopen("data_float.txt", "w+");


    for (int i = 0; i < 10; i++)
    {
        fseek(fp1, i + 5, 0);
        num_bin_char[i] = i + 65;
        fputc(num_bin_char[i], fp1);
        pos = ftell(fp1);
        printf("char pos is %d\n", pos);


        num_bin_float[i] = i * 1.0;
        fprintf(fp2, "%f\n", &num_bin_float[i]);
        pos = ftell(fp2);
        printf("float pos is%d\n", pos);

    }

    fclose(fp1);
    fclose(fp2);


    system("pause");
    return 0;
}

#endif

#if lesson_4_9
// C_Design_lesson_basic.cpp : ¶¨Òå¿ØÖÆÌ¨Ó¦ÓÃ³ÌÐòµÄÈë¿Úµã¡£
//
/***********************************************************
  Author:  Black Jack
  Version: 2.0
  Date:	   19/01/12
  Description:  Ð´¶þ½øÖÆÎÄ¼þ£¬Ëæºó½«¶þ½øÖÆÎÄ¼þÊä³öµ½ÆÁÄ»ÉÏ
 ************************************************************/

#include "stdafx.h"
#include <stdio.h>;
#include <stdlib.h>


int main(int argc, _TCHAR* argv[])
{
    FILE *fp1;
    FILE *fp2;
    int pos;
    int last_alpha;
    char frame_head[10];
    char frame_tail[10];
    char num_bin_char[10];
    float num_bin_float[10];

    //´´½¨ÎÄ¼þ
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

    //ÕÒÎÄ¼þÍ·£¬²¢¶ÔÓ¦È¡³öÊý¾Ý£¬ºöÂÔÎÄ¼þÎ²
    fp2 = fopen("data_eg.bin", "rb");
    int i = 0;

    while (!feof(fp2))
    {
        fread(&frame_head, sizeof(char), 6, fp2);
        pos = ftell(fp2);
        printf("pos is %d now\n", pos);

        if (('B' == frame_head[0]) && ('E' == frame_head[1]) && ('G' == frame_head[2]) && ('I' == frame_head[3]) && ('N' == frame_head[4]) && (':' == frame_head[5]))
        {
            fread(&num_bin_char[i], sizeof(char), 1, fp2);
            fread(&num_bin_float[i], sizeof(float), 1, fp2);
            i++;
            printf("find the head!");
        }
        else if (!feof(fp2))
        {
            fseek(fp2, -5, 1);
        }
        else
        {
            printf("here is the end!\n");
        }

    }

    //Êä³öËÑË÷½á¹û
    printf("********************************************************\n");
    for (int i = 0; i < 10; i++)
    {
        printf("The data is %d and %f\n", num_bin_char[i], num_bin_float[i]);
    }
    printf("********************************************************\n");

    system("pause");
    return 0;
}
#endif

#if lesson_5_1
#include<stdio.h>
void main()
{
    printf("Àý³Ì½øÐÐprintfÏÔÊ¾\n");
    int result = 10;
    /*1.%dÒÔÊ®½øÖÆÀ´´òÓ¡Ò»¸öÕûÊý*/
    printf("´òÓ¡resultµÄ½á¹ûÏÔÊ¾³öÀ´ %3d \n", result);
    int a = 5, b = 12;
    printf("a =%-3d,b =%5d \n", a, b);
    /*2.%o ½«Êý×ÖÒÔ°Ë½øÖÆµÄ·½Ê½Êä³ö*/
    printf("Ê®ÁùµÄ°Ë½øÖÆÊä³öÏÔÊ¾%o \n", 16);
    printf("Ê®ÁùµÄÊ®½øÖÆÊä³öÏÔÊ¾%d \n", 16);
    printf("Ê®ËÄµÄÊ®Áù½øÖÆÊä³öÏÔÊ¾%X \n", 14);
    printf("¸¡µãÊýÏÔÊ¾%f \n", 1.0 / 3.0);
    printf("Êý¾ÝÏÔÊ¾%.3f \n", 1.0 / 3.0);

    /*3.%c½«×Ö·ûÊä³öÏÔÊ¾*/
    char ch = 'a';
    printf("%c\n", ch);
    printf("%3c\n", ch);
    printf("%-3c\n", ch);

    /*4.%sÊÇÊä³ö×Ö·û´®µÄÐÎÊ½*/
    char str[10] = "123456789";
    printf("%16s \n", str);
    /*5.\a*/
    printf("\a");

    /*6.ScanfÊäÈë*/
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
#include<stdio.h>
void main()
{
    /*
    char ch;
    for(ch = 'A';ch <= 'Z';ch++)
    {
        putchar(ch);
    }
    */
    char ch;
    ch = getchar();
    putchar(ch);
    system("pause");
    while ((ch = getchar()) != 'b')
    {
        printf("Ñ­»·ÖÐ¡£¡£¡£¡£");

    }
    printf("Ìø³öÑ­»·");
    system("pause");
}
#endif
#if lesson_5_3
#include<stdio.h>
void main()
{
    char str[5];
    gets(str);
    printf("%s \n", str);
    system("pause");
}
#endif
#if lesson_5_4
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char a[30];
    char *b = (char*)malloc(20000 * sizeof(char));

    printf("sizeof(a) = %d \n", sizeof(a));
    printf("sizeof(b) = %d \n", sizeof(b));
    free(b);
    system("pause");
}
#endif

#if lesson_6_1

int main()
{
    int test_num, a;
    test_num = 15;
    printf("test_numµÄÊ®½øÖÆ±í´ïÎª%d\n", test_num);
    printf("test_numµÄ°Ë½øÖÆ±í´ïÎª0%o\n", test_num);
    printf("test_numµÄÊ®Áù½øÖÆ±í´ïÎª0x%x\n", test_num);

    printf("**********************************\n");
    a = 2147483648;
    printf("%d,%u", a, a);

    system("pause");
    return 0;
}

#endif

#if lesson_6_2

int main()
{
    enum week
    {
        MON = 1,
        TUS,
        WED = 5,
        THU,
        FRI = 10,
        SAT,
        SUN
    };

    week day;
    /*
    day=MON;
    printf("\n here is enum :%d\n",day);

    day=TUS;
    printf("\n here is enum :%d\n",day);

    day=WED;
    printf("\n here is enum :%d\n",day);
    */

    //±éÀúÃ¶¾ÙÊä³öÃ¶¾ÙÖµ
    /*
    for(day=MON;day<=SUN;day++)
    {
        printf("\n here is enum :%d\n",day);
    }
    */

    for (int i = 1; i <= 20; i++)
    {
        day = week(i);
        printf("\n here is enum :%d\n", day);
        switch (day)
        {
        case MON:printf("now enumday is MONDAY\n");
            break;
        case TUS:printf("now enumday is TUSDAY\n");
            break;
        case WED:printf("now enumday is WEDNESDAY\n");
            break;
        case THU:printf("now enumday is TUSRSDAY\n");
            break;
        case FRI:printf("now enumday is FRIDAY\n");
            break;
        case SAT:printf("now enumday is SAT\n");
            break;
        case SUN:printf("now enumday is SUNDAY\n");
            break;
        }


    }


    system("pause");
    return 0;
}

#endif


#if lesson_6_3
int main()
{
    int tmp = 97;
    //eg 1 £ºÍÆ¼öµÄ±È½ÏÀàÐ´·¨
    //±È½Ï¹ØÏµÊ½Ê±µÄÏàÓ¦Ð´·¨
    //if(tmp==97)
    //if(tmp=99)// ²»ÈÝÒ×±»·¢ÏÖµÄ´íÎó±È½ÏÐ´·¨£¬¸³ÖµÐ´·¨
    //ÍÆ¼öÐ´·¨£º
    if (97 == tmp)
        printf("tmp is %d\n", tmp);

    //eg 2£º¸³ÖµÔËËã
    printf("*************************\n");
    int test_left_a = 1, test_left_b = 2;

    test_left_a += 9;//test_left_a=test_left_a+9
    test_left_b *= 5 + 6;//test_left_b=test_left_b*(5+6)--not :test_left_b*5+6
    printf("test_left_a value is %d,test_left_b value is %d\n", test_left_a, test_left_b);

    //eg 3£ºÓÅÏÈ¼¶ºÍ½áºÏÐÔµÄÀý×Ó
    printf("*************************\n");
    int a = 1, b = 1, c = 1, d = 0;
    printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
    d = a++ || b++&&c++;
    printf("d=a++||b++&&c++:   ");
    printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);

    a = 1, b = 1, c = 1, d = 0;
    d = a++&&b++&&c++;
    printf("d=a++&&b++&&c++:   ");
    printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);

    a = 1, b = 1, c = 1, d = 0;
    d = a++ || (b++&&c++);
    printf("d=a++||(b++&&c++):   ");
    printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);

    a = 1, b = 1, c = 1, d = 0;
    d = a++ || ++b&&c++;
    printf("d=a++||++b&&c++:   ");
    printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);

    a = 1, b = 1, c = 1, d = 0;
    d = a++ || (b++) && (c++);
    printf("d=a++||(b++)&&(c++):   ");
    printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);

    system("pause");
    return 0;
}

#endif

#if lesson_6_4
int main()
{
    struct test1
    {
        char name[20];
        int score;
    }stu1 = { "xiaoming", 50 };

    test1 stu2 = { "xiaohong", 60 };

    printf("first student is %s,score is %d\n", stu1.name, stu1.score);
    printf("second student is %s,score is %d\n", stu2.name, stu2.score);

    system("pause");
    return 0;
}
#endif

#if lesson_6_5
int main()
{
    struct test1
    {
        char name[10];
        int score;
    }stu[10] = { { "st1", 70 }, { "st2", 60 }, { "st3", 80 }, { "st4", 85 }, { "st5", 59 }, { "st6", 71 }, { "st7", 73 }, { "st8", 95 }, { "st9", 86 }, { "st10", 93 } };

    int num = sizeof(stu) / sizeof(stu[0]);
    printf("the stu size is %d\n", num);

    printf("********************************\n");
    //´òÓ¡Ñ§Éú³É¼¨
    for (int i = 0; i < 10; i++)
    {
        printf("student %d is %s,score is %d\n", i, stu[i].name, stu[i].score);

    }
    printf("********************************\n");
    //

    for (int i = 0; i < 10; i++)
    {
        if (stu[i].score >= 80)
            printf("student %s score is good\n", stu[i].name, stu[i].score);
    }

    system("pause");

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

trigle_own refresh_tri(trigle_own tri_in)
{
    trigle_own tmp;
    tmp.a = tri_in.a;
    tmp.b = tri_in.b;
    tmp.c = tri_in.c;

    tmp.L = float(tmp.a + tmp.b + tmp.c);
    tmp.S = sqrt(float((tmp.L)*(tmp.L - tmp.a)*(tmp.L - tmp.b)*(tmp.L - tmp.c)));

    return tmp;
}


int main()
{
    trigle_own temp_tri = { 6, 6, 6, 0, 0 };
    printf("a=%d,b=%d,c=%d,L=%f,S=%f\n", temp_tri.a, temp_tri.b, temp_tri.c, temp_tri.L, temp_tri.S);
    temp_tri = refresh_tri(temp_tri);
    printf("***********************\n");
    printf("a=%d,b=%d,c=%d,L=%f,S=%f\n", temp_tri.a, temp_tri.b, temp_tri.c, temp_tri.L, temp_tri.S);

    system("pause");
    return 0;
}


#endif
#if lesson_7_1
/*ÉùÃ÷Ò»¸ö¶þÎ¬Êý×éÀ´´æ´¢¸ù¾Ý²»Í¬×°ÐÞµµ´ÎµÄÃ¿Æ½Ã××â½ð¼Û¸ñ*/
float price[2][3] = { { 34, 50, 60 }, { 44, 56, 80 } };
void main()
{
    /*
    float floor_space[6];

    floor_space[0] = 68.78;
    floor_space[1] = 76;
    floor_space[2] = 68.78;
    floor_space[3] = 90;
    floor_space[4] = 59;
    floor_space[5] = 98;
    */
    float floor_space[2][3] = { { 68.78, 76, 68.78 }, { 90, 59, 98 } };
    //floor_space[6] = 117;
    /*¼ÇÂ¼×Ü·¿×â*/
    float sum = 0.0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //sum  += floor_space[i*3 +j] * price[i][j] ;  //sum = sum + floor_space[i]*34.0;
            sum += floor_space[i][j] * price[i][j];
        }
    }
    printf("×Ü·¿×â£º%f Ôª \n", sum);
    system("pause");

}
#endif
#if lesson_7_2
#include<string.h>
void main()
{
    char parr[] = "zifuchuanshuzu";
    char charr[] = { 'z', 'i', 'f', 'u', 'c', 'h', 'u', 'a', 'n', 's', 'h', 'u', 'z', 'u' };  //para ÓëcharrÊÇ·ñµÈ¼Û£¿
    char charr_test[] = { 'z', 'i', 'f', 'u', 'c', 'h', 'u', 'a', 'n', 's', 'h', 'u', 'z', 'u', '\0' }; //para Óëcharr ºÍ charr_testµÄÇø±ð£¿

    /*²é¿´ÉÏÃæÈý¸ö×Ö·ûÊý×éµÄ´óÐ¡*/
    int num_parr = sizeof(parr);
    int num_charr = sizeof(charr);
    int num_charr_test = sizeof(charr_test);

    /*´òÓ¡ÏÔÊ¾Èý¸ö×Ö·ûÊý×éµÄ´óÐ¡*/
    printf("parrÊý×éÊÇ £º%s \n", parr);
    printf("parrÊý×éµÄ´óÐ¡£º%d \n", num_parr);

    printf("charrÊý×éÊÇ £º%s \n", charr);
    printf("charrÊý×éµÄ´óÐ¡£º%d \n", num_charr);

    printf("charr_testÊý×éÊÇ £º%s \n", charr_test);
    printf("parrÊý×éµÄ´óÐ¡£º%d \n", num_charr_test);





    system("pause");
}
#endif
#if lesson_7_3
#include<stdio.h>
#include<string.h>
void main()
{
    //Ê¹ÓÃstrcpyÎª×Ö·ûÊý×é¸³Öµ
    char parr[40];
    strcpy(parr, "zifuchuanshuzu");
    printf("parr×Ö·ûÊý×éµÄÄÚÈÝ£º%s \n", parr);

    //strcatº¯ÊýÊ¹ÓÃ
    char charr[] = "_test_strcat";
    //char end_string[13]
    strcat(parr, charr);
    printf("Æ´½Óºó×Ö·û´®ÏÔÊ¾%s \n", parr);

    //strcmpµÄÊ¹ÓÃ
    char str1[15];
    char str2[15];

    strcpy(str1, "abcdefdf");
    strcpy(str2, "abcde");
    int value = strcmp(str1, str2);
    if (value < 0)
    {
        printf("str1³¤¶ÈÐ¡ÓÚstr2");

    }
    else if (value > 0)
    {
        printf("str1³¤¶È´óÓÚstr2");
    }
    else
    {
        printf("str1³¤¶ÈµÈÓÚstr2");
    }
    system("pause");
}
#endif
#if lesson_7_4
/*Êý×éÖ¸ÕëµÄ¼òµ¥Àý×Ó*/
void main()
{
    double ball[5] = { 10, 11, 12, 13, 14 };
    double *p;

    p = ball;
    for (int i = 0; i < 5; i++)
    {
        printf("Êý×éÖ¸ÕëµÄ·½Ê½·ÃÎÊÊý×éÔªËØµÚ%dµÄÔªËØÖµÊÇ%f \n", i, *(ball + i));
    }
    system("pause");
}

#endif

#if lesson_8_1
int main()
{
    //»ù±¾Î»²Ù×÷ Óë »ò Òì»ò ·Ç
    unsigned char a = 0xaa;
    unsigned char b = 0x28;

    printf("*******************************\n");
    printf("a&b=0x%x,a|b=0x%x,a^b=0x%x\n ", a&b, a | b, a^b);
    printf("*******************************\n");
    printf("~a:0x%x\n ", ~a);

    //»ù±¾ÒÆÎ»²Ù×÷

    unsigned char c;
    c = 0x02;
    printf("*******************************\n");
    printf("c: 0x%x,c<<2:0x%x,c>>1:0x%x ", c, c << 2, c >> 1);
    printf("*******************************\n");

    int d;
    d = -2;
    printf("*******************************\n");
    printf("d: 0x%d,d<<2:0d%x,d>>1:0x%d ", d, d << 2, d >> 1);
    printf("*******************************\n");



    system("pause");
    return 0;
}

#endif

#if lesson_8_2

int main()
{
    char s[4][10] = { "Pot", "name", "top", "amen" };
    //µÚÒ»ÖÖ·½·¨£¬ÀûÓÃ×ÖÄ¸ÅÅÐò½â¾öÎÊÌâ
    char s_upper[4][10] = { '\0' };
    char s_upper_sort[4][10] = { '\0' };// ×ÖÄ¸ÌØÕ÷Öµ
    int s_num_feature[4] = { 0 };// Êý×ÖÌØÕ÷Öµ
    int mark;
    char ctmp;
    int N = sizeof(s_upper) / sizeof(s_upper[0]);
    printf("***************************\n");
    //×ª»»×ÖÄ¸´óÐ¡Ð´
    for (int j = 0; j < 4; j++)
    {
        printf("before trans %s\n", s[j]);
        for (int i = 0; i < 10; i++)
        {
            s_upper[j][i] = toupper(s[j][i]);
        }
        printf("after trans %s\n", s_upper[j]);
    }
    //ÖÆ×÷ÌØÕ÷Öµ¾ØÕó£¬Ê¹ÓÃ×ÖÄ¸ÅÅÐò
    //Ôö¼ÓÅÅÐò¾ØÕó£¬
    printf("***************************\n");
    for (int j = 0; j < 4; j++)
        strcpy(s_upper_sort[j], s_upper[j]);

    for (int j = 0; j < N; j++)
    {
        for (int n = 0; n < sizeof(s[j]) - 1; n++)
            for (int i = 0; i < sizeof(s[j]) - 1; i++)
            {
                if (('\0' == s_upper_sort[j][i + 1]) || ('\0' == s_upper_sort[j][i]))
                    continue;
                ctmp = s_upper_sort[j][i];
                if (ctmp > s_upper_sort[j][i + 1])
                {
                    s_upper_sort[j][i] = s_upper_sort[j][i + 1];
                    s_upper_sort[j][i + 1] = ctmp;
                }


            }
        printf("after the sort %s\n", s_upper_sort[j]);
    }
    printf("***************************\n");
    //±È½ÏÌØÕ÷Öµ£¬½øÐÐ½á¹ûÊä³ö
    for (int j = 0; j < N - 1; j++)
    {
        for (int i = j + 1; i < N; i++)
            if (!strcmp(s_upper_sort[j], s_upper_sort[i]))//Îª0±íÊ¾Á½ÕßÏàµÈ£¡
            {
                printf("word:%s\n", s[j]);
                printf("word:%s\n", s[i]);
                printf("word:%d and %d is Anagrams\n", j, i);
            }
    }

    //ÀûÓÃÌØÕ÷ÖµµÄ·½Ê½¶ÔÊý¾Ý½øÐÐ±íÊ¾
    printf("***************************\n");
    printf("***************************\n");

    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            if ('\0' == s_upper[j][i])
                continue;
            mark = 1 << (s_upper[j][i] - 'A');
            s_num_feature[j] = s_num_feature[j] | mark;
        }
        printf("after the mark is 0x%x\n", s_num_feature[j]);

    }
    printf("***************************\n");
    for (int j = 0; j < N - 1; j++)
    {
        for (int i = j + 1; i < N; i++)
            if (s_num_feature[j] == s_num_feature[i])//Îª0±íÊ¾Á½ÕßÏàµÈ£¡
            {
                printf("word:%s\n", s[j]);
                printf("word:%s\n", s[i]);
                printf("word:%d and %d is Anagrams\n", j, i);
            }
    }


    system("pause");
    return 0;
}
#endif
#if lesson_9_1
/*ÎÞ²ÎÊýºê*/
#define Pa  3+2
#define Pa_copy 5
void main()
{
    printf("%d\n", Pa*Pa);  //3+2 * 3+ 2  = 11        ²»ÊÇ(3+2)*£¨3+2£©
    printf("%d\n", Pa_copy*Pa_copy);
    system("pause");
}
#endif
#if lesson_9_2
#define squar(x)  (x*x)
void main()
{
    printf("squar: %d", squar(5));
    system("pause");
}
#endif
#if lesson_9_3
#include<stdio.h>
void main()
{
    printf(__FILE__); // µ±Ç°Ô´ÎÄ¼þÃû³Æ
    printf("\n");
    printf("%d\n", __LINE__); // µ±Ç°ÐÐºÅ
    printf(__DATE__); // ±àÒëÊ±µÄÈÕÆÚ
    printf("\n");
    printf(__TIME__); // ±àÒëÊ±µÄÊ±¼ä
    getchar();
}

#endif
#ifndef PI
#define PI 3.1416
#endif
/*Èç¹ûa.c°üº¬ÁËÁ½¸öÍ·ÎÄ¼þb.h ÎÄ¼þºÍ c.hÎÄ¼þ£¬b.hÎÄ¼þºÍc.hÎÄ¼þÍ¬Ê±Ò²°üº¬d.h*/

#if lesson_10_1
int main()
{
    int *p_int;
    int int_a = 5765;
    char *p_char;
    char char_a = 7;

    p_int = &int_a;
    p_char = &char_a;

    printf("address is %d,value is %d\n", &int_a, int_a);
    printf("address is %d,value is %d\n", p_int, *p_int);
    printf("address is %d,value is %d\n", p_char, *p_char);

    printf("address is %d,value is %d\n", p_int + 1, *(p_int + 1));
    printf("address is %d,value is %d\n", p_char + 1, *(p_char + 1));

    system("pause");
    return 0;
}
#endif

#if lesson_10_2

int main()
{
    int a, b, c;
    int *pa, *pb, *pc;
    int *p;

    //¹¹½¨Ö¸ÕëºÍ±äÁ¿Ö®¼äµÄÁªÏµ
    pa = &a;
    pb = &b;
    pc = &c;

    printf("ÊäÈë±äÁ¿ a b c £º\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("a=%d,b=%d,c=%d\n", a, b, c);
    printf("*pa=%d,*pb=%d,*pc=%d\n", *pa, *pb, *pc);
    printf("pa address=%d,pb  address=%d,pc  address=%d\n", pa, pb, pc);
    if (*pa < *pb)
    {
        p = pa;
        pa = pb;
        pb = p;
    }
    if (*pa < *pc)
    {
        p = pa;
        pa = pc;
        pc = p;
    }
    if (*pb < *pc)
    {
        p = pb;
        pb = pc;
        pc = p;
    }

    printf("a=%d,b=%d,c=%d\n", a, b, c);
    printf("*pa=%d,*pb=%d,*pc=%d\n", *pa, *pb, *pc);
    printf("pa address=%d,pb  address=%d,pc  address=%d\n", pa, pb, pc);
    system("pause");
    return 0;
}

#endif


#if lesson_10_3
int main()
{
    int *p_int;
    int *ptr_a;
    int int_a[7] = { 5765, 102, 203, 456, 752, 1256, 426 };

    p_int = int_a;
    ptr_a = &int_a[0];

    printf("p_int:%d,int_a:%d,&int_a:%d\n", p_int, int_a, &int_a);
    printf("ptr_a:%d,int_a[0]:%d\n", ptr_a, &int_a[0]);
    printf("*ptr_a:%d,*p_int:%d\n", *ptr_a, *p_int);

    system("pause");
    return 0;

}

#endif

#if lesson_10_4
int main()
{
    //Ô­Ê¼Êý¾Ý×Ö·û´®
    char str1[] = "hello,";
    char str2[] = "Gavin!";
    //¿Õ×Ö·û´®»º´æ
    char str_c[20] = { 0 };
    //½¨Á¢×Ö·û´®Ö¸Õë
    char *p1, *p2, *p3;

    p1 = str1;
    p2 = str2;
    p3 = str_c;

    printf("p1+p2:%s %s\n", p1, p2);
    printf("p3:%s\n", p3);
    printf("*********************\n");
    printf("copy str1 to str3:\n");
    for (int i = 0; i < sizeof(str1); i++)
    {
        printf("%c->", *(p1 + i));
        *(p3 + i) = *(p1 + i);
        printf("%c.\n", *(p3 + i));
    }
    printf("p3 now:%s\n", p3);
    printf("*********************\n");
    printf("copy str2 to str3:\n");
    for (int i = 0; i < sizeof(str2); i++)
    {
        printf("%c-->", *(p2 + i));
        *(p3 + sizeof(str1) + i - 1) = *(p2 + i);
        printf("%c.\n", *(p3 + sizeof(str1) + i - 1));
    }
    printf("p3 now is:%s\n", p3);
    printf("*********************\n");
    printf("str_copy:%s", str_c);

    system("pause");
    return 0;
}

#endif

#if lesson_10_5
int main()
{
    int line1[] = { 1, 2, 3 };
    int line2[] = { 4, 5, 6 };
    int line3[] = { 7, 8, 9 };

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
    ////////////////////////////
    printf("******************\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", p_line[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;


}
#endif

#if lesson_10_6
int main()
{
    struct score
    {
        char name[10];
        int stu_score;
    };

    score stu1 = { "Jack", 95 };
    score *p_stu1;
    score *p_stus;
    score stus[2] = { { "Jack", 95 }, { "John", 100 } };

    p_stu1 = &stu1;
    p_stus = &stus[0];

    printf("the student %s: score is %d\n", stu1.name, stu1.stu_score);
    printf("pointer:");
    printf("the student %s: score is %d\n", (*p_stu1).name, (*p_stu1).stu_score);

    printf("**************************\n");

    printf("the student %s: score is %d\n", stus[0].name, stus[0].stu_score);
    printf("the student %s: score is %d\n", stus[1].name, stus[1].stu_score);
    printf("pointer:");
    printf("the student %s: score is %d\n", (*p_stus).name, (*p_stus).stu_score);
    printf("the student %s: score is %d\n", (*(p_stus + 1)).name, (*(p_stus + 1)).stu_score);

    system("pause");
    return 0;

}
#endif

#if lesson_10_7

void flip_line(int *p)
{
    //ÄÚ´æµÄ²Ù×÷
    int tmp;
    tmp = *p;
    *p = *(p + 1);
    *(p + 1) = tmp;
}

int main()
{
    int a[2] = { 1, 3 };

    //before
    printf("before flip\n");
    printf("a[0]: %d,a[1]: %d", a[0], a[1]);

    flip_line(&a[0]);

    //after
    printf("after flip\n");
    printf("a[0]: %d,a[1]: %d", a[0], a[1]);

    system("pause");
    return 0;

}

#endif


#if	lesson_10_8
int *max(int x[])
{
    int *m;
    m = &x[0];
    for (int i = 0; i < 10; i++)
    {
        if (*m < x[i])
        {
            *m = x[i];
        }
    }
    return m;
}

int main()
{
    int a[10] = { 1, 4, 3, 2, 15, 7, 24, 12, 16, 13 };
    int *max_a;
    //before fun max
    for (int i = 0; i < 10; i++)
    {
        printf(" %d,", a[i]);
    }
    printf("\n");

    max_a = max(a);
    //after fun max
    printf("max value is %d\n", *max_a);
    printf("*********************\n");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d,", a[i]);
    }

    system("pause");
    return 0;

}


#endif

#if lesson_10_9
int max(int x[])
{
    int m;
    m = 0;
    for (int i = 0; i < 10; i++)
    {
        if (m < x[i])
        {
            m = x[i];
        }
    }
    return m;
}


int main()
{
    int a[10] = { 1, 4, 3, 2, 15, 7, 24, 12, 16, 13 };
    int max_a;

    //¶¨Òåº¯ÊýÖ¸Õë
    int(*p)(int *);
    //Ö¸ÕëÓëº¯ÊýµÄ¹ØÁª
    p = max;
    //before fun max
    for (int i = 0; i < 10; i++)
    {
        printf(" %d,", a[i]);
    }
    printf("\n");

    max_a = (*p)(a);//max_a=max(a);

    //after fun max
    printf("max value is %d\n", max_a);
    printf("*********************\n");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d,", a[i]);
    }

    system("pause");
    return 0;

}

#endif

#if lesson_10_10
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
    //Ö¸Õë²Ù×÷
    printf("pointer:\n");
    printf("value of pointer is %d,pointer address is %d, pointer to value is %d\n", p, &p, *p);
    printf("pointer to pointer:\n");
    printf("value of pointer is %d,pointer address is %d, pointer to value is %d\n", pp, &pp, **pp);
    printf("pointer to pointer to pointer:\n");
    printf("value of pointer is %d,pointer address is %d, pointer to value is %d\n", ppp, &ppp, ***ppp);


    system("pause");

    return 0;
}

#endif

#if lesson_10_11

void flip_line(int *p)
{
    int tmp;
    tmp = *p;
    *(p) = *(p + 1);
    *(p + 1) = tmp;
}

int *max(int x[])
{
    int *m;
    m = &x[0];
    for (int i = 0; i < 10; i++)
    {
        if (*m < x[i])
        {
            *m = x[i];
        }
    }
    return m;
}

float *trigle(int a, int b, int c, float *Length)
{

    float AREA;
    float *S;
    float *p;
    p = Length;
    S = &AREA;

    *p = 1;//float(a + b + c);
    *S = 5;//sqrt(float((*p)*(*p - a)*(*p - b)*(*p - c)));

    return S;

}

int main()
{
    ///////Ö¸ÕëÓë±äÁ¿µÄ¹ØÏµ////////////
    int *p_int;
    int int_a = 5765;

    p_int = &int_a;

    printf("address is %d,value is %d\n", p_int, *p_int);

    //////////////Ö¸ÕëÓë½á¹¹Ìå////////////
    printf("***************************\n");
    struct score
    {
        char name[10];
        int  stu_score;

    };

    score stu1 = { "Jack", 95 };
    score stus[2] = { { "Jack", 95 }, { "John", 100 } };
    score *p_stu1;
    score *p_stus;

    p_stu1 = &stu1;
    printf("the student %s : %d\n", stu1.name, stu1.stu_score);
    printf("the student %s : %d\n", (*p_stu1).name, (*p_stu1).stu_score);

    p_stus = &stus[0];

    printf("the student %s : %d\n", stus[0].name, stus[0].stu_score);
    printf("the student %s : %d\n", stus[1].name, stus[1].stu_score);

    printf("the student %s : %d\n", (*p_stus).name, (*p_stus).stu_score);
    printf("the student %s : %d\n", (*(p_stus + 1)).name, (*(p_stus + 1)).stu_score);


    //////////////Ö¸ÕëÓëÊý×é//////////////////////
    printf("***************************\n");
    int *ptr_a;
    int int_am[7] = { 5765, 102, 203, 456, 752, 1256, 426 };

    ptr_a = &int_am[0];
    for (int i = 0; i < 7; i++)
    {
        printf("address is %d,value is %d\n", ptr_a + i, *(ptr_a + i));
    }

    //////////////Ö¸ÕëÓë º¯Êý1////////////
    printf("***************************\n");
    int a_fun[2] = { 1, 3 };

    //before
    printf("before flip \n");
    printf("%d , %d\n", a_fun[0], a_fun[1]);

    flip_line(&a_fun[0]);
    //after
    printf("after flip \n");
    printf("%d , %d\n", a_fun[0], a_fun[1]);

    //////////////Ö¸ÕëÓë º¯Êý2////////////
    printf("***************************\n");
    int a_fun2[10] = { 1, 4, 2, 3, 5, 7, 13, 24, 12, 16 };
    int *max_a;

    //before
    for (int i = 0; i < 10; i++)
    {
        printf("%d,", a_fun2[i]);
    }
    printf("\n");

    printf("**********************");
    max_a = max(a_fun2);
    printf("max is %d\n", *max_a);
    //after
    for (int i = 0; i < 10; i++)
    {
        printf("%d,", a_fun2[i]);
    }
    printf("\n");

    /////////////////////////////////////

    system("pause");
    return 0;
}


#endif

#if lesson_10_12
float *trigle(int a, int b, int c, float *Length)
{

    float AREA;
    float *S;
    float *p;
    p = Length;
    S = &AREA;
    *p = float(a + b + c);
    *S = sqrt(float((*p / 2)*(*p / 2 - a)*(*p / 2 - b)*(*p / 2 - c)));
    return S;

}
int main()
{
    //ÊäÈëÔ­Ê¼µÄÈý½ÇÐÎ±ß³¤Êý¾Ý
    int a = 3;
    int b = 4;
    int c = 5;
    //¶¨ÒåÈý½ÇÐÎÖÜ³¤ºÍÃæ»ý±äÁ¿
    float L = 0.0;
    float *S_tri;

    //º¯Êýµ÷ÓÃ
    S_tri = trigle(a, b, c, &L);

    //½á¹ûÊä³ö
    printf("length is %f,area is %f\n", L, *S_tri);
    system("pause");
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

    // µ±ÒÔ"%s"×÷ÎªÊäÈëÊ±£ºÊäÈëÊý¾ÝÊ±£¬ÓöÒÔÏÂÇé¿öÈÏÎª¸ÃÊý¾Ý½áÊø£º
    // Óö¿Õ¸ñ¡¢TAB£¬»Ø³µ
    // Óö¿í¶È½áÊø
    // Óö·Ç·¨ÊäÈë
    // ×¢£º scanfÖÐ%sÊäÈëÊ±£¬Óö¿Õ¸ñ»ò»Ø³µ½áÊø

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
    printf("address of b is: %d\n", &b);  //±äÁ¿Ò»µ©¶¨Òå£¬¾Í·ÖÅäÁËÄÚ´æ
    b = 10;
    printf("address of b is: %d\n", &b);

    int a = 11;
    int *pi = &a;
    void *pv = pi;
    printf("address of pi is : %d, %d\n", pi, *pi);
    printf("address of pv is : %d, %d\n", pv, *((int*)(pv)));  // (int*)(pv)×ª»»³ÉÕûÐÍÖ¸Õë

    double *pi2 = (double*)(pv);  //ok, µ«²»°²È«
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
    printf("size of address of pa: %d\n", sizeof(pa));  //ËùÓÐÖ¸Õë±äÁ¿¶¼Õ¼4¸ö×Ö½Ú

    return 0;

}
#endif
#if lesson_11_4
int main()
{
    // ÒÔÖ¸ÕëµÄ·½Ê½±éÀúÊý×éÔªËØ
    int a[] = { 1, 3, 4, 6, 9 };
    int len = sizeof(a) / sizeof(int);

    for (int i = 0; i < len; i++)
    {
        printf("%d\n", *(a + i));
    }

    //ÓÃÖ¸Õë±éÀúÊý×é
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

    ////Ö±½ÓÊä³ö×Ö·û´®
    //printf("%s\n", str);
    ////Ê¹ÓÃ*(str+i)
    //for (i = 0; i < len; i++) {
    //    printf("%c", *(str + i));
    //}
    //printf("\n");
    ////Ê¹ÓÃstr[i]
    //for (i = 0; i < len; i++) {
    //    printf("%c", str[i]);
    //}
    //printf("\n");

    char *str = "Hello World!";
    printf("len of p is :%d\n", strlen(str));
    str = "I love C!";  //ÕýÈ·
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

#if lesson_11_9
struct student
{
    int num;
    char name[20];
    float score[3];
    float aver;
};
void input(struct student stu[])
{
    printf("Please input three student's No., Name, Score in order? \n");
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

    if (fclose(fp)) {                         /* ???? */
        printf("Can not close the file!\n");
        exit(0);
    }
    p = NULL;

    return 0;


}
#endif
#if lesson_11_10
#include<stdio.h>
#define MAX 30   //ºê¶¨Òå£º¶¨Òå×Ü¹²ÈýÊ®Ö»ºï×Ó
int Monkey[MAX]; //Êý×é£ºÖÐ´æ´¢ºï×Ó±àºÅ
int N;
int i, j, k;     //Ñ­»·Ê¹ÓÃ±äÁ¿
int temp;      //»º´æÊý¾Ý
void init()
{
    for (i = 0; i < MAX; i++)
    {
        Monkey[i] = i + 1;
    }
    printf("ºï×Ó±àºÅ£º");
    for (i = 0; i < MAX; i++)
    {
        printf("%d ", Monkey[i]);
    }
    printf("\n ");

}
void output()
{
    printf("ºï×ÓµÄ³öÈ¦Ë³Ðò£º\n\r");
    for (i = MAX - 1; i >= 0; i--)
        printf("µÚ%3dºÅºï×Ó³öÈ¦\n\r", Monkey[i]);
    printf("iµÄÖµ%d \n\r", i);
    printf("ºïÍõÊÇ£ºµÚ%3dÖ»ºï×Ó\n\r", Monkey[i + 1]);
}
void main()
{
    init();
    printf("ÇëÊäÈë³ö¶ÓÊýÁÐ£º\n\r");
    scanf("%d", &N);
    //½â¾ö·½°¸Â·¾¶
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
#if lesson_11_11
struct Student
{
    int num;
    char name[20];
    float score[3];
    float aver;
};
void input(struct Student stu[])
{
    int i;
    printf("ÇëÒÀ´ÎÊäÈëÑ§Éú±àºÅ£¬ÐÕÃû£¬Èý¸ö¿ÆÄ¿³É¼¨£º\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d %s %f %f %f", &stu[i].num, &stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
    }
}

struct Student max(struct Student stu[])
{
    int i, m = 0;
    for (i = 0; i < 3; i++)
    {
        if (stu[i].aver > stu[m].aver) m = i;
    }
    return stu[m];
}

void print(struct Student stud)
{
    printf("³É¼¨×î¸ßµÄÑ§Éú£º\n");
    printf("Ñ§ºÅ£º%d\n ÐÕÃû£º%s\n ÈýÃÅ³É¼¨£º%5.1f,%5.1f,%5.1f\n Æ½¾ù³É¼¨£º%6.2f\n", stud.num, stud.name, stud.score[0], stud.score[1], stud.score[2], stud.aver);
    getchar();
}




void main()
{

    struct Student stu[3];
    struct Student *p = stu;
    input(p);
    print(max(p));
    Student max_student;
    max_student = max(p);

    char c_nun[2];


    itoa(max_student.num, c_nun, sizeof(max_student.num));

    FILE *fp;                                     /* ¶¨ÒåÎÄ¼þÖ¸Õë*/

    if ((fp = fopen("½á¹û.txt", "w")) == NULL) {    /* ´ò¿ªÎÄ¼þ */
        printf("File open error!\n");
        exit(0);
    }
    fprintf(fp, "%s", c_nun);            /* Ð´ÎÄ¼þ */
    fprintf(fp, "%s", "  ");            /* Ð´ÎÄ¼þ */
    fprintf(fp, "%s", max_student.name);            /* Ð´ÎÄ¼þ */
    fprintf(fp, "%s", "\n");            /* Ð´ÎÄ¼þ */
    fprintf(fp, "%s", "xueshengchengji");            /* Ð´ÎÄ¼þ */

    if (fclose(fp)) {                         /* ¹Ø±ÕÎÄ¼þ */
        printf("Can not close the file!\n");
        exit(0);
    }
    p = NULL;
    system("pause");
    //return 0;
}
#endif

#if lesson_12_1
int main()
{
    int year, month, day;
    int sum = 0, leap;
    printf("???????????2020/10/11?\n");
    scanf("%d/%d/%d", &year, &month, &day);
    switch (month)
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
    default: printf("????????\n"); break;
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
    printf("??????? %d ??", sum);
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
    uint8_t data[6] = { 54, 53, 55, 55, 54, 55 };
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
        printf("%d, %d", v, i % 4);
        printf("\n");
    }

    int va = 204 * 3 + 205 * 296 + 206 * 1872 + 207 * 692 + 208 * 17;
    int av = va / 2880;
    printf("%d, %d", va, av);
}
#endif
#if lesson_14_1
/*
  ????swap??????????
  ???????????????swap???????
  ?????????????swap??????
  */
void swap_a(int *p1, int *p2)
{
    // ?????????swap?????
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
}
void swap_b(int *p1, int *p2)
{
    // ?????????????????swap????
    // p1, p2??pa pb?p1 p2?????
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
    float f(int a, int b, float(*p)(int, int));

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
    char name[3][44] = { "Programming in ANSI C", "BASIC", "Visual C++ 6.0 Programming" };
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
#if lesson_15_1
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
table insertTable(table t, int elem, int add)
{
    if ((add > t.length + 1) || add < 0)
    {
        printf("插入位置有问题\n");
        return t;
    }
    if (t.length == t.size)
    {
        t.head = (int*)realloc(t.head, (t.size + 1) * sizeof(int));
        if (!t.head)
        {
            printf("分配失败\n");
            exit(0);
        }

        t.size++;
    }
    for (int i = t.length-1; i >=add-1; i--)
    {
        t.head[i+1] = t.head[i];
    }
    t.head[add - 1] = elem;
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
        t.head[i-1] = t.head[i];
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
        t.head[i-1] = i;
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
#if lesson_15_2
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
    p=insertLink(p, 10, 3);
    printf("display new link table\n");
    displayLink(p);


    printf("delete one data into link table\n");
    p = deleteLink(p, 3);
    printf("display new link table\n");
    displayLink(p);


    printf("select one data into link table\n");
    int index = selectLink(p, 3);
    printf("the value you want to select is index %d\n",index);


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
#if lesson_15_3
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
    link *temp=NULL;
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