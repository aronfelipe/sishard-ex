
extern long var1; //TODO: complete com o tipo correto

//TODO: implemente a função solucao_ex1 abaixo

int solucao_ex1() {
    int ebx = 0;
    int eax;

    while (var1 > 0) {
        faz_algo();
        ebx += 1;
    }

    eax = ebx;
    return eax;
} 