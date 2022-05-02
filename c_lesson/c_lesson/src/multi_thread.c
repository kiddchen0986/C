#include"../include/multi_thread.h"
#include"stdio.h"
#include"stdlib.h"

#if lesson_2_1
#include <stdio.h>
#include <stdint.h>
#include <windows.h>
//#include<WinBase.h>
#include <pthread.h>
#pragma comment(lib,"pthreadVC2.lib")
//定义线程要执行的函数，arg 为接收线程传递过来的数据
void *Thread1(void *arg)
{
    printf("http://c.biancheng.net\n");
    return "Thread1 Executed well";
}
//定义线程要执行的函数，arg 为接收线程传递过来的数据
void* Thread2(void* arg)
{
    printf("C yuyan zhongwen wang\n");
    return "Thread2 Executed well";
}

int main()
{
    int res;
    pthread_t mythread1, mythread2;
    void* thread_result;
    /*创建线程
    &mythread:要创建的线程
    NULL：不修改新建线程的任何属性
    ThreadFun:新建线程要执行的任务
    NULL：不传递给 ThreadFun() 函数任何参数

    返回值 res 为 0 表示线程创建成功，反之则创建失败。
    */
    res = pthread_create(&mythread1, NULL, Thread1, NULL);
    if (res != 0) {
        printf("Failed to create thread");
        return 0;
    }

    res = pthread_create(&mythread2, NULL, Thread2, NULL);
    if (res != 0) {
        printf("Failed to create thread");
        return 0;
    }
    /*
    等待指定线程执行完毕
    mtThread:指定等待的线程
    &thead_result:接收 ThreadFun() 函数的返回值，或者接收 pthread_exit() 函数指定的值

    返回值 res 为 0 表示函数执行成功，反之则执行失败。
    */
    res = pthread_join(mythread1, &thread_result);
    //输出线程执行完毕后返回的数据
    printf("%s\n", (char*)thread_result);

    res = pthread_join(mythread2, &thread_result);
    printf("%s\n", (char*)thread_result);
    printf("The main thread finished");
    return 0;
}
#endif
#if lesson_8_1
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include"windows.h"
//#include<unistd.h>
#pragma comment(lib,"pthreadVC2.lib")

int ticket_sum = 10;
pthread_mutex_t myMutex = PTHREAD_MUTEX_INITIALIZER;

void *sell_ticket(void *arg) 
{
    //输出当前执行函数的线程 ID
    printf("Current thread ID: %u\n", pthread_self());
    int i;
    int islock = 0;
    for (i = 0; i < 10; i++)
    {
        //当前线程“加锁”
        islock = pthread_mutex_lock(&myMutex);
        //如果“加锁”成功，执行如下代码
        if (islock == 0) {
            //如果票数 >0 ,开始卖票
            if (ticket_sum > 0)
            {
                Sleep(2);
                printf("%d sold the %d ticket\n", pthread_self(), 10 - ticket_sum);
                ticket_sum--;
            }
            //当前线程模拟完卖票过程，执行“解锁”操作
            pthread_mutex_unlock(&myMutex);
        }
    }
    return 0;
}
int main() 
{
    int flag;
    int i;
    void *ans;
    //创建 4 个线程，模拟 4 个售票员
    pthread_t tids[4];
    for (i = 0; i < 4; i++)
    {
        flag = pthread_create(&tids[i], NULL, &sell_ticket, NULL);
        if (flag != 0) {
            printf("线程创建失败!");
            return 0;
        }
    }
    Sleep(100);   //等待 4 个线程执行完成
    for (i = 0; i < 4; i++)
    {
        //阻塞主线程，确认 4 个线程执行完成
        flag = pthread_join(tids[i], &ans);
        if (flag != 0) {
            printf("tid=%d 等待失败！", tids[i]);
            return 0;
        }
    }
    return 0;
}
#endif
#if lesson_9_1
#include"pthread.h"
#include"semaphore.h"
#include"Windows.h"

sem_t mySem;
int ticket_sum = 10;

void* sell_ticket(void* arg) 
{
    int flag = 0;
    printf("Thread number: %d\n", pthread_self());
    for (int i = 0; i < 10; i++) 
    {
        flag = sem_wait(&mySem);
        if (flag == 0) 
        {
            if (ticket_sum>0)
            {
                Sleep(1);
                printf("thread %d ", pthread_self());
                printf("sold the ticket No.%d\n", 10 - ticket_sum + 1);
                ticket_sum--;
            }
        }
        sem_post(&mySem);
        Sleep(1);
    }
}
int main()
{
    int res;
    pthread_t tids[4];
    void *pthread_result;

    res = sem_init(&mySem, 0, 1);
    for (int i = 0; i < 4; i++) 
    {
        res = pthread_create(&tids[1], NULL, &sell_ticket, NULL);
        if (res != 0) 
        {
            printf("Failed to create thread %d", tids[i]);
        }
    }
    Sleep(10);
    for (int i = 0; i < 4; i++) 
    {
        res = pthread_join(tids[i], &pthread_result);
        if (res != 0) 
        {
            printf("Failed to thread %d", tids[i]);
        }
    }
    return 0;
}
#endif
#if lesson_9_2
#include"semaphore.h"
#include"windows.h"
#include"pthread.h"

int num = 5;
sem_t sem;

void *get_service(void *arg) 
{
    int id = *((int *)arg);
    if (sem_wait(&sem) == 0) //成功则返回0。 sem信号量为0时，则阻塞线程，信号量>0时，则执行下面函数
    {
        printf("---customer%d is busying service\n",id);
        Sleep(2);
        printf("--customer%d service is done\n", id);
        sem_post(&sem);
    }
    return 0;
}
int main() 
{
    pthread_t tids[5];
    void *ans;
    int res = sem_init(&sem, 0, 2);
    if (res != 0) 
    {
        printf("Failed to create semaphore\n");
        return 0;
    }
    for (int i = 0; i < num; i++) 
    {
        res = pthread_create(&tids[i], NULL, get_service, &i);
        if (res != 0) 
        {
            printf("Failed to create thread %d\n", tids[i]);
            return 0;
        }
        else 
        {
            printf("customer%d is coming\n", i);
        }
        Sleep(1);
    }
    for (int i = 0; i < num; i++) 
    {
        res = pthread_join(tids[i], NULL);
        if (res != 0) 
        {
            printf("Failed to run thread %d", tids[i]);
            return 0;
        }
    }
    sem_destroy(&sem);
    return 0;
}
#endif