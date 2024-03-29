#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale(LC_ALL,"Turkish");
 
    
    char basharfegoreisim;

    printf("Taniyor olabilirim,isminin bas harfini soyle belki hatirlarim...\n");
    scanf("%c",&basharfegoreisim);

    switch (basharfegoreisim)
    {
    case 'a':
    printf("Ali Can in cocukluk arkadasi,en iyi kankalarindan biri.\n");
    break;
    case 'b':
    printf("Selcuk Bayraktar i nasil tanimazsin.Inanamiyorum.\n");
    break;
    case 'c':
    printf("Mehdi yi nasil unuturum,ekmegin alti gizarmis olsun diyordu gecen...\n");
    break;
    case 'm':
    printf("Mustafa yi da taniyorum.Gecen tatli yemeye gitmiştik beraber...\n");
    break;
    case 'e':
    printf("Elif bizim Can in kardeşi,bu kodu yazanin...\n");
    break;
    case 'f':
    printf("Fahrettini taniyorum.Kral adam.\n ");
    break;
    default:
    printf("Boyle birisini tanimiyorum...\n");
    break;

    return 0;

    }

    }