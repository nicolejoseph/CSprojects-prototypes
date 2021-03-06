#ifndef __SEM_H
#define N_PROC 64
struct sem{

    int count;
    char lock;
    char waitlist[N_PROC];

};
void sem_init(struct sem *s, int count);
int sem_try(struct sem *s);
void handler(int sig);
void sem_wait(struct sem *s);
void sem_inc(struct sem *s);
#define __SEM_H
#endif