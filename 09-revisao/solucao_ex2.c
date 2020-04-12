/* Implementar função solucao_ex2 */

// 1. `%rdi`
// 2. `%rsi`
// 3. `%rdx`
// 4. `%rcx`
// 5. `%r8`
// 6. `%r9` 

long solucao_ex2(long rdi, long rsi, long rbx) {

    // mov    %rdi,%rbx
    rbx = rdi;

    // mov    %rsi,%rdi
    rdi = rsi;

    // callq  0x5fa <vezes2>
    long rax =  vezes2(rdi);
     
    // cmp %rbx, %rax
    if (rax <= rbx) {
        // jle    0x613 <ex2+20>

        // add    %rbx,%rax
        rax += rbx;

        // retq
        return rax;

    } else {

        // add    %rbx,%rbx
        rbx += rbx;

        // add    %rbx,%rax
        rax += rbx;

        // retq
        return rax;
    }
}
