/* Implementar função solucao_ex2 */

// 1. `%rdi`
// 2. `%rsi`
// 3. `%rdx`
// 4. `%rcx`
// 5. `%r8`
// 6. `%r9` 

int solucao_ex3(long rdi, long rsi, int *rdx, int *rcx, int *r8) {
    int eax = 0;
    int al = 0;

    // cmp    %rsi,%rdi
    if (rdi < rsi) {
        // setl   %al
        // movzbl %al,%eax
        eax = 1;
    }
    // mov    %eax,(%rdx)
    *rdx = eax;
    eax = 0;

    // cmp    %rsi,%rdi
    if (rdi == rsi) {
        // sete   %al
        // movzbl %al,%eax
        eax = 1;
    }

    // mov    %eax,(%rcx)
    *rcx = eax;
    eax = 0;
    
    // cmp    %rsi,%rdi
    if (rdi > rsi) {
        // setg   %al
        // movzbl %al,%eax
        eax = 1;
    }

    // mov    %eax,(%r8)
    *r8 = eax;

    // retq
    return eax;

}
