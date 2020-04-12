
// 1. `%rdi`
// 2. `%rsi`
// 3. `%rdx`
// 4. `%rcx`
// 5. `%r8`
// 6. `%r9` 

int ex4_solucao(int edi) {

    // sub    $0x10,%rsp
    // Reservando 16 espaços na pilha para criação de váriaveis locais.

    // mov    %edi,%ebx
    int ebx = edi;

    // lea    0x8(%rsp),%rdx
    int rdx;

    // lea    0xc(%rsp),%rsi
    int rsi;

    // lea    0xea3(%rip),%rdi
    // long rdi = 2004 + rip;
    
    // mov    $0x0,%eax
    int eax = 0;

    // callq  0x1040 <__isoc99_scanf@plt>
    scanf("%d %d", &rsi, &rdx);

    // mov    0x8(%rsp),%edx
    // int edx = &rsp + 8;

    // lea    (%rax,%rdx,2),%eax
    // `C + %R1 + (%R2 * S)`
    eax = rsi + rdx * 2 + ebx;

    return eax;
    
}

// int ex4_solucao(int edi){
//   int ebx = edi;
//   long rsi;
//   long rdx;
//   scanf("%d %d", &rsi, &rdx);
//   int eax = rsi + rdx*2 + ebx;
//   return eax;
// }