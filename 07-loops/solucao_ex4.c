
/* Implemente aqui sua versão em C da função soma_n
 * presente no arquivo ex4.o
 * 
 * Chame sua função de soma_n_solucao */

long soma_n_solucao(int edi){ 

    // mov    $0x0,%eax
    long rax = 0;

    // mov    $0x0,%edx
    long rdx = 0;
    
    // jmp    0x67f <soma_n+21>
    // cmp    %edi,%edx
    while(edi > rdx){

        // jl     0x676 <soma_n+12>
        // add    %rcx,%rax
        rax+=rdx;

        // add    $0x1,%edx
        rdx++;
    }

    return rax;
}
