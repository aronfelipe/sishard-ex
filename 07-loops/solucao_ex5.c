
/* Implemente aqui sua versão em C da função ex5
 * presente no arquivo ex5.o
 * 
 * Chame sua função de ex5_solucao */
 
long ex5_solucao(long rdi, long rcx, long rdx){
    // mov    $0x0,%ecx
    int ecx = 0;

    // mov    $0x0,%r8d

    // jmp    0x114a <ex4+17>

    // cmp    %rdi,%rcx
    if (rdi >= rcx) {

        // mov    %r8,%rax
        long rax = "r8";

        // retq
        return rax

    } else {

        // mov    %rcx,%rax
        long rax = rcx;

        // cqto

        // idiv   %rsi

        // test   %rdx,%rdx
        // jne    0x1146 <ex4+13>
        if (rdx != 0) {

            // add    $0x1,%rcx
            rcx += 1;

            // cmp    %rdi,%rcx
            if (rdi >= rcx) {
                long rax = "r8";

                // retq
                return rax;
                
            } else{

            }
        }

    }

}