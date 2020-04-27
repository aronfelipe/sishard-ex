#include <stdlib.h>

#include "vec_int.h"

typedef struct _vec_int {
    int *data;
    int size;
    int capacity;
} vec_int;


vec_int *vec_int_create() {
    vec_int *vector = malloc(sizeof(vec_int));
    vector->data = malloc(2*sizeof(int));
    vector->capacity = 2;
    vector->size = 0;
    return vector;
}

void vec_int_destroy(vec_int **_v) {
    free(*_v);
    *_v = NULL;
}

int vec_int_size(vec_int *v) {
    return v->size;
}

int vec_int_at(vec_int *v, int pos, int *val) {
    if(pos > v->size - 1) {
        return 0;
    } else {
        *val = v->data[pos];
        return 1;
    }
}

// void queue_int_put(queue_int *q, int value) {

//     int i;

//     if(q->begin > q->end) {
//         int temp = q->data[q->capacity];
//         for (i = q->begin + 1; i < q->capacity - 1; i++) {
//             q->data[i] = q->data[i-1];
//         }

//         int temp2 = q->data[0];
//         q->data[0] = temp;

//         for (i = 0 ; i < q->end; i++) {
//             if (i == 0 || i == 1) {
//                 q->data[0] = temp;

//             } else {
//                 q->data[i] = q->data[i-1]
//             }
//         }

//         q->data[q->begin + 1] == value;
//         q->data[q->capacity] 
//     } else if (q->begin == q->end - 1) {
//         q->data[q->begin - 1] == value;
//     }
// }

int vec_int_insert(vec_int *v, int pos, int val) {

    if (pos < 0) {
        return 0;
    }

    if (v->size == v->capacity || pos >= v->capacity) {
        v->data = realloc(v->data, 2*(sizeof(v->data)));
        printf("FEZ ALLOO");
    }
    
    if (pos > v->size - 1) {
        v->data[v->size] = val;
    }

    printf(v->data);
    
    if (pos < v-> size - 1) {

        int temp = v->data[pos];

        v->data[pos] = val;
        int i = pos + 1;

        for(i; i <= v->size; i++) {
            v->data[i] = temp;
            int temp2 = v->data[i + 1];
            temp = temp2;
        }

        return 1;
    }

}

int vec_int_remove(vec_int *v, int pos) {
    return 0;    
}
