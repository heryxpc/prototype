extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define USAGE "./reorder <param1> <param2>\n"

static int iSet = 2;
static int iCheck = 2;

static int a = 0;
static int b = 0;

void *setThread(void *param);
void *checkThread(void *param);
void set();
int check();

int main(int argc, char *argv[]) {
    int i, err;

    if (/* reachable */
        argc != 1) {
        if (argc != 3) {
            /* reachable */
            fprintf(stderr, USAGE);
            exit(-1);
        } else {
            sscanf(argv[1], "%d", &iSet);
            sscanf(argv[2], "%d", &iCheck);
        }
    }

    //printf("iSet = %d\niCheck = %d\n", iSet, iCheck);

    pthread_t setPool[iSet];
    pthread_t checkPool[iCheck];

    for (/* invariant:
         3-argc >= 0
         i >= 0
         -1+argc >= 0
         */
         i = 0; i < iSet; i++) {
        if (0 != (err = pthread_create(&setPool[i], NULL, &setThread, NULL))) {
            /* invariant:
            3-argc >= 0
            -1+argc >= 0
            */
            fprintf(stderr, "Error [%d] found creating set thread.\n", err);
            exit(-1);
        }
    }

    for (/* invariant:
         3-argc >= 0
         i >= 0
         -1+argc >= 0
         */
         i = 0; i < iCheck; i++) {
        if (0 != (err = pthread_create(&checkPool[i], NULL, &checkThread,
                                       NULL))) {
            /* invariant:
            3-argc >= 0
            -1+argc >= 0
            */
            fprintf(stderr, "Error [%d] found creating check thread.\n", err);
            exit(-1);
        }
    }

    for (/* invariant:
         3-argc >= 0
         i >= 0
         -1+argc >= 0
         */
         i = 0; i < iSet; i++) {
        if (0 != (err = pthread_join(setPool[i], NULL))) {
            /* invariant:
            3-argc >= 0
            -1+argc >= 0
            */
            fprintf(stderr, "pthread join error: %d\n", err);
            exit(-1);
        }
    }

    for (/* invariant:
         3-argc >= 0
         i >= 0
         -1+argc >= 0
         */
         i = 0; i < iCheck; i++) {
        if (0 != (err = pthread_join(checkPool[i], NULL))) {
            /* invariant:
            3-argc >= 0
            -1+argc >= 0
            */
            fprintf(stderr, "pthread join error: %d\n", err);
            exit(-1);
        }
    }

    /* invariant:
    3-argc >= 0
    -1+argc >= 0
    */
    return 0;
}
        
void *setThread(void *param) {
    a = 1;
    b = -1;

    /* reachable */
    return NULL;
}

void *checkThread(void *param) {
    if (/* reachable */
        ! ((a == 0 && b == 0) || (a == 1 && b == -1))) {
        fprintf(stderr, "Bug found!\n");
    	ERROR: /* assert not proved */
    	       __VERIFIER_error();
    	goto ERROR;
    }

    /* reachable */
    return NULL;
}

