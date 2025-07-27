#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

// This program creates two threads to print numbers from 0 to 49 in sequential order.
// One thread is responsible for printing even numbers, and the other for odd numbers,
// using a mutex and condition variables for synchronization.

int counter = 0;

pthread_mutex_t mutex;
pthread_cond_t even;
pthread_cond_t odd;

void* print_even(void* arg)
{
    for(int i = 0; i < 25; i++)
    {
        pthread_mutex_lock(&mutex);
        while(counter % 2 != 0)
        {
            pthread_cond_wait(&even, &mutex);
        }

        printf("%d ", counter);
        counter++;
        pthread_cond_signal(&odd);
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

void* print_odd(void* arg)
{
    for(int i = 0; i < 25; i++)
    {
        pthread_mutex_lock(&mutex);
        while(counter % 2 == 0)
        {
            pthread_cond_wait(&odd, &mutex);
        }

        printf("%d ", counter);
        counter++;
        pthread_cond_signal(&even);
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main()
{
    pthread_t even_thread, odd_thread;

    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&even, NULL);
    pthread_cond_init(&odd, NULL);

    pthread_create(&even_thread, NULL, print_even, NULL);
    pthread_create(&odd_thread, NULL, print_odd, NULL);

    pthread_join(even_thread, NULL);
    pthread_join(odd_thread, NULL);

    pthread_mutex_destroy(&mutex); 
    pthread_cond_destroy(&even);
    pthread_cond_destroy(&odd);
    
    return 0;

}
