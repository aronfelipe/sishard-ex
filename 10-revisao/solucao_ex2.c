//TODO: implementar função solucao_ex2 aqui

// a -> (rdx)
// b -> (%rdi)

void solucao_ex2(long *rdi, long rsi, long *rdx) {
    long rax = *rdx;
    if (*rdi > rax) {
        rsi = 3*rsi;
        rsi += *rdx;
        *rdi = rsi;
        return;
    } else {
        rax ++;
        *rdx = rax;
        rsi += *rdx;
        *rdi = rsi;
        return;
    }
}