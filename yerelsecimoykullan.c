#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");

    //35 parti sayısı
    //81 il
    //çok adımlı doğrulamalar gerekli.
    //e devlet şifresi,tc kimlik numarası,sms ile doğrulama,robot mu değil mi?
    //Bu kodun amacı oy kullanmayan 10 miyonu aşkın seçmeni kazanmak.


char edevletsifresi[32];
long long int tckimlikno;
int onay,onay2,onay3,onay4;
long long int telefonno,telkodu;


printf("Yerel seçimlerde oy kullanmak için lütfen aşağıdaki adımları takip ediniz...\n");


printf("Hoşgeldiniz...Lütfen TC kimlik numaranızı giriniz...");
scanf("%lld",&tckimlikno);
printf("TC kimlik numaraniz:%lld\n",tckimlikno);


printf("TC kimlik numaanızı onaylıyor musunuz?\nEvet için 1,hayır için 2 yi seçiniz..");
scanf("%d",&onay);


while (onay==2)
{
    printf("Lütfen TC kimlik numaranızı tekrar giriniz...\n");
    scanf("%lld",&tckimlikno);
    printf("TC kimlik numaraniz:%lld\n",tckimlikno);


    printf("TC kimlik numaanızı onaylıyor musunuz?\nEvet için 1,hayır için 2 yi seçiniz..");
    scanf("%d",&onay);
}
{
    printf("TC kimlik numaranız onaylandı...\n");
}


printf("Lütfen e devlet şifrenizi giriniz...\n");
scanf("%s",edevletsifresi);
printf("e-devlet şifreniz:%s\n",edevletsifresi);


printf("Girdiğiniz şifreyi onaylıyor musunuz?Onay için 1,red için 2 yi seçiniz...\n ");
scanf("%d",&onay2);


while (onay2==2)
{
    printf("Lütfen e devlet şifrenizi tekrar giriniz...\n");
    scanf("%s",edevletsifresi);
    printf("e-devlet şifreniz:%s",edevletsifresi);

    printf("Girdiğiniz şifreyi onaylıyor musunuz?Onay için 1,red için 2 yi seçiniz...\n ");
    scanf("%d",&onay2);
}
{
    printf("e-devlet şifreniz onaylandı...\n");
}

printf("SMS ile doğrulama yapmak için lütfen telefon numaranızı giriniz...\n");
scanf("%lld",&telefonno);
printf("Telefon numaranız:%lld\n",telefonno);

printf("Telefon numaranızı onaylıyor musunuz?\nOnay için 1,red için 2 yi seçiniz...\n ");
scanf("%d",&onay3);

while (onay3==2)
{
    printf("Lütfen telefon numaranızı tekrar giriniz...\n");
    scanf("%lld",&telefonno);
    printf("Telefon numaranız:%lld\n",telefonno);

    printf("Telefon numaranızı onaylıyor musunuz?\nOnay için 1,red için 2 yi seçiniz...\n ");
    scanf("%d",&onay3);
}
{
    printf("Telefon numaranız onaylandı...\n");
}

printf("SMS ile doğrulama yapmak için telefonunuza gelen kodu giriniz...\n");
scanf("%lld",&telkodu);

printf("Telefonunuza gelen kod:%lld\n",telkodu);

while (telkodu!=1453)
{
    printf("Kod hatalı.Lütfen kontrol edip tekrar giriniz...\n");
    scanf("%lld",&telkodu);
    printf("Telefonunuza gelen kod:%lld\n",telkodu);
}

{
    printf("Eşleşme sağlandı...\n");
}


printf("Hangi ilden katılıyorsunuz?\n");
char il[20];
scanf("%s",il);
printf("İliniz:%s\n",il);

printf("Oyunuzu hangi partiye vermek istersiniz?\n");
printf("Lütfen partiyi seçiniz...\n");

printf("1-AKP\n2-IP-\n3-SP\n4-BBP\n5-MP\n6-AP\n7-DSP\n8-YRP\n9-HEDP\n10-TKP\n11-ABP\n12-ZP\n13-HKP\n14-TKH\n15-BTP\n16-GP\n17-YTP\n18-CHP\n19-EP\n20-HDP\n21-HOP\n22-OP\n23-ABP\n24-DP\n25-GBP\n26-MP\n27-MYP\n28-AP\n29-GP\n30-ADP\n31-MHP\n32-TİP\n33-DAP\n34-SP\n35-VP\n");


printf("Lütfen 1-35 arasında sıralanan partilerden birini seçiniz...\n");
char parti[20];
scanf("%s",parti);
printf("Partiniz:%s\n",parti);

printf("Oyunuzu onaylıyor musunuz?\nOnay için 1,red için 2 yi seçiniz...\n ");
scanf("%d",&onay4);

while (onay4==2)
{
    printf("Oyunuzu hangi partiye vermek istersiniz?\n");
    scanf("%s",parti);
    printf("Partiniz:%s\n",parti);

    printf("Oyunuzu onaylıyor musunuz?\nOnay için 1,red için 2 yi seçiniz...\n ");
    scanf("%d",&onay4);
}
{
    printf("Oyunuz onaylandı...\n");
}

printf("Oyunuz başarıyla kaydedildi...\n");

return 0;
}
