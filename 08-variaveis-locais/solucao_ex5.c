
// 1. `%rdi`
// 2. `%rsi`
// 3. `%rdx`
// 4. `%rcx`
// 5. `%r8`
// 6. `%r9` 

// int ex5_solucao() {

//     // mov    $0x0,%eax
//     int eax;

//     // movl   $0x1,0xc(%rsp)
//     int var = 1;

//     // mov    $0x0,%ebx
//     int ebx = 0;

//     linha_18:
//     // cmpl   $0x0,0xc(%rsp)
//     if (var <= 0) goto linha_59;

//     // callq  0x5a0 <__isoc99_scanf@plt>
//     scanf("%d", &var);

//     // 0xc(%rsp),%eax
//     eax = var;

//     if (eax <= 0) goto linha_18;

//     // add    %eax,%ebx
//     ebx += eax;

//     // jmp    0x6dc <ex5+18>
//     goto linha_18;

//     linha_59:
//     eax = ebx;
//     return eax;

// }

int ex5_solucao() {

    int eax;

    // movl   $0x1,0xc(%rsp)
    int var = 1;

    // mov    $0x0,%ebx
    int ebx = 0;

    // cmpl   $0x0,0xc(%rsp)
    while (var > 0) {
        // jmp    0x6dc <ex5+18>
        // jle    0x6dc <ex5+18>

        // lea    0xc(%rsp),%rsi
        // lea    0xd5(%rip),%rdi
        // mov    $0x0,%eax
        scanf("%d", &var);

        // mov    0xc(%rsp),%eax
        eax = var;

        // test   %eax,%eax
        if (eax > 0) {
            // add    %eax,%ebx
            ebx += eax;
        }
    }

    // jle    0x705 <ex5+59>
    eax = ebx;
    return eax;

}

