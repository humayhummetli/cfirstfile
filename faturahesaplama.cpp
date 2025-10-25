#include <stdio.h>
int main(){
    float fatura,efiyat,yfiyat;
    float enf,eabone,yabone;
    int yokuma,eokuma,toplamharcanan;
    printf("enflasyonu girin");
    scanf("%f",&enf);
    printf("eski birim fiyatini gir");
    scanf("%f",&efiyat);
    printf("eski abonelik ucretini girin");
    scanf("%f",&eabone);
    printf("eski okuma degerini girin");
    scanf("%d",&eokuma);
    printf("yeni okuma degerini girin ");
    scanf("%d",&yokuma);
    toplamharcanan=yokuma-eokuma;
    yfiyat=efiyat*(1+enf/100);
    yabone=eabone*(1+enf/100);
    fatura=toplamharcanan*yfiyat+yabone;
    printf("%f",fatura);
    return 0;
}
