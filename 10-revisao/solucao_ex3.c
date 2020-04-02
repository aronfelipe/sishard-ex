// TODO: substituir tipo pelo tipo das globais
extern int var1, var2;

// TODO: implementar solucao_ex3 abaixo

void solucao_ex3(long *rdi) {
    int eax = var1;
    eax = eax * 5;
    int edx = var2;
    int ecx = 5 * edx;
    edx = 2*ecx;
    eax+=edx;
    *rdi = eax;
    eax = var1;
    var2 = eax;
}