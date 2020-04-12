/* Implementar função solucao_ex1 */

int solucao_ex1(long rdi, long rsi, long rdx, long rcx) {

   // lea    (%rdi,%rsi,1),%rax
   long rax =  rdi + (rsi*1);

   // lea    (%rax,%rdx,4),%rcx
   rcx = rax + (rdx*4);

   // imul   %rdi,%rdi
   rdi *= rdi;

   // lea    (%rdi,%rsi,2),%rax
   rax = rdi + (rsi*2);

   // add    %rax,%rdx
   rdx += rax;

   // cmp    %rdx,%rcx
   // setge  %al
   int al;
   if (rcx >= rdx) {
      al = 1;
   } else {
      al = 0;
   }
   return al;
}