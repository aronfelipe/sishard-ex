// TODO: substituir tipo pelo tipo das globais
extern int var1, var2;

// TODO: implementar solucao_ex3 abaixo

void solucao_ex3(long *rdi) {
    // mov    0x200a14(%rip),%eax
    int eax = var1;

    // lea    (%rax,%rax,4),%eax
    eax = eax * 5;

    // mov    0x200a07(%rip),%edx
    int edx = var2;

    // lea    (%rdx,%rdx,4),%ecx
    int ecx = 5 * edx;

    // lea    (%rcx,%rcx,1),%edx
    edx = 2*ecx;

    // add    %edx,%eax
    eax+=edx;

    // mov    %eax,(%rdi)
    *rdi = eax;

    // add    0x2009fb(%rip),%eax 
    eax = var1;

    // mov    %eax,0x2009f1(%rip)
    var2 = eax;
}