
/* Implemente aqui sua versão em C da função soma_n
 * presente no arquivo ex4.o
 * 
 * Chame sua função de soma_n_solucao */

long soma_n_solucao(int edi){

    long rax = 0;
    long rdx = 0;

    while(edi > rdx){
        rax+=rdx;
        rdx++;
    }

    return rax;
}
