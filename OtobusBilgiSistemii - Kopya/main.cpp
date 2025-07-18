#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
#include "veri/IsletmeBilgileri.h"
#include "nesne_depolari/IsletmeBilgileriDeposu.h"
void IsletmeBilgisi_deposu_kullanimi() {
    auto depo = IsletmeBilgileriDeposu();
    std::cout << "IsletmeBilgileri deposu olusturuldu!" << std::endl;

    auto IsletmeBilgisi = depo.yeniIsletmeBilgisi();

    IsletmeBilgisi->setRuhsatNo("AG18UUHMM44H34184");
    IsletmeBilgisi->setIsletmeAdi("AHUM Tur");
    IsletmeBilgisi->setIsletmeAdresi("Trabzon cad. Universite mah.");
    IsletmeBilgisi->setIsletmeTelefonu("02164435875");

    depo.IsletmeBilgisiEkle(IsletmeBilgisi);
    std::cout << "IsletmeBilgisi eklendi!" << std::endl;




}