
/* Implemente aqui sua versão em C da função ex5
 * presente no arquivo ex5.o
 * 
 * Chame sua função de ex5_solucao */
 
long ex5_solucao(long rdi, long rsi, long rdx){

    // mov    $0x0,%ecx
    int rcx = 0;
    // mov    $0x0,%r8d
    int r8d = 0;

    for(rcx; rcx >= rdi; rcx++) {
        
        // cmp    %rdi,%rcx
        if (rcx >= rdi) {
            
            // jge    0x1161 <ex4+40>
            // mov    %r8,%rax
            long rax = r8d;

            // retq
            return rax;
        } else {
            // mov    %rcx,%rax
            long rax = rcx;

            // cqto
            // Aumenta o registrador de %rax para um registrador de 128 bits
            // Nada em C

            // idiv   %rsi
            // Divisão de %rax por %rsi
            rax = rax/rsi;

            // Divisão de %rax por %rsi
            rdx = rax % rsi;

            // test   %rdx,%rdx
            // jne    0x1146 <ex4+13>
            if (rdx == 0) {
                r8d += rcx;
            }
        }
    }
}