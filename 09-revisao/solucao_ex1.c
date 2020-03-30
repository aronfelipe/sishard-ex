/* Implementar função solucao_ex1 */

int solucao_ex1(long rdi, long rsi, long rdx, long rcx) {
   long rax =  rdi + (rsi*1);
   rcx = rax + (rdx*4);
   rdi *= rdi;
   rax = rdi + (rsi*2);
   rdx += rax;
   return rcx >= rdx;
}