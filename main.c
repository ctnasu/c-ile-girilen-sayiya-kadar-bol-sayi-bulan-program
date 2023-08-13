//
//  main.c
//  bolsayi
//
//  Created by ASUDE on 13.08.2023.
//

#include <stdio.h>

int main() {
    int sayi;
    printf("bir sayi grininiz:\n");
    scanf("%d",&sayi);
    for (int i=0; i<=sayi; i++) {
        int toplam=0;
        for (int j=0; j<i; j++) {
            if(i%j==0)
            {
                toplam=toplam+j;
            }
        }
        if(toplam>i)
        {
            printf("%d bir bol sayidir.",i);
        }
    }
    return 0;
}
