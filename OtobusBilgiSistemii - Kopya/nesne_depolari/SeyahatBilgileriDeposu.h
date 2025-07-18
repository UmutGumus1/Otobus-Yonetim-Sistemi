//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_SEYAHATBILGILERIDEPOSU_H
#define OTOBUSBILGISISTEMII_SEYAHATBILGILERIDEPOSU_H


#include "../tanimlar.h"
#include "nesne_deposu.h"
#include <functional>

class SeyahatBilgileriDeposu {
private:
    SeyahatBilgileriVektoru _vSeyahatBilgilerii;

public:

    SeyahatBilgileriDeposu();


    SeyahatBilgileriPtr yeniSeyahatBilgisi();


    void SeyahatBilgisiEkle(SeyahatBilgileriPtr SeyahatBilgileri);



    void SeyahatBilgisiSil(Tamsayi KoltukNo);
    void SeyahatBilgisiSil(SeyahatBilgileriVektoru::const_iterator i);




    typedef std::function<bool(IsletmeBilgileriPtr)> filtre_fonksiyonu;

    __attribute__((unused)) SeyahatBilgileriPtr ilki_bul(filtre_fonksiyonu sart);

    SeyahatBilgileriPtr sonu_bul(filtre_fonksiyonu sart);

    SeyahatBilgileriVektoru tumunu_bul(filtre_fonksiyonu sart);


    SeyahatBilgileriPtr sonu_bul(std::function<bool(SeyahatBilgileriPtr)> sart);

    SeyahatBilgileriVektoru tumunu_bul(std::function<bool(SeyahatBilgileriPtr)> sart);

    SeyahatBilgileriPtr ilki_bul(std::function<bool(SeyahatBilgileriPtr)> sart);
};


#endif //OTOBUSBILGISISTEMII_SEYAHATBILGILERIDEPOSU_H
