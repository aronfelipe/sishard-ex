//TODO: implementar função solucao_ex2 aqui

// a -> (rdx)
// b -> (%rdi)

void solucao_ex2(long *rdi, long rsi, long *rdx) {
    // mov    (%rdx),%rax
    long rax = *rdx;

    // cmp    %rax,(%rdi)
    if (*rdi > rax) {
        // jg     0x60d <ex2+19>

        // lea    (%rsi,%rsi,2),%rsi
        rsi = 3*rsi;

        // jmp    0x606 <ex2+12>
        
        // add    (%rdx),%rsi
        rsi += *rdx;

        // mov    %rsi,(%rdi)
        *rdi = rsi;
        return;

    } else {
        
        // jmp    0x606 <ex2+12>

        rax ++;
        *rdx = rax;

        // add    (%rdx),%rsi
        rsi += *rdx;

        // mov    %rsi,(%rdi)
        *rdi = rsi;
        return;
    }
}