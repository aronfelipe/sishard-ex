
extern long var1; //TODO: complete com o tipo correto

//TODO: implemente a função solucao_ex1 abaixo

int solucao_ex1() {

    // mov    $0x0,%ebx
    int ebx = 0;

    // mov    $0x0,%eax
    int eax = 0;

    // jmp    0x62b <ex1+21>
    // cmpq   $0x0,0x2009dd(%rip)
    while (var1 > 0) {

        //jg     0x61e <ex1+8>
        // callq  0x5fa <faz_algo>
        faz_algo();

        // add    $0x1,%ebx
        ebx += 1;
    }

    // mov    %ebx,%eax
    eax = ebx;
    return eax;
} 