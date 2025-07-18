//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_CALISANBILGILERIDEPOSU_H
#define OTOBUSBILGISISTEMII_CALISANBILGILERIDEPOSU_H


#include "../tanimlar.h"
#include "nesne_deposu.h"
#include <functional>

class CalisanBilgileriDeposu {
private:
    CalisanBilgileriVektoru _vCalisanBilgilerii;

public:

    CalisanBilgileriDeposu();


    CalisanBilgileriPtr yeniCalisanBilgisi();


    void CalisanBilgisiEkle(CalisanBilgileriPtr CalisanBilgisi);



    void CalisanBilgisiSil(Tamsayi SicilNo);
    void CalisanBilgisiSil(CalisanBilgileriVektoru::const_iterator i);




    typedef std::function<bool(IsletmeBilgileriPtr)> filtre_fonksiyonu;

    __attribute__((unused)) CalisanBilgileriPtr ilki_bul(filtre_fonksiyonu sart);

    CalisanBilgileriPtr sonu_bul(filtre_fonksiyonu sart);

    CalisanBilgileriVektoru tumunu_bul(filtre_fonksiyonu sart);


    CalisanBilgileriPtr ilki_bul(std::function<bool(CalisanBilgileriPtr)> sart);

    CalisanBilgileriPtr sonu_bul(std::function<bool(CalisanBilgileriPtr)> sart);

    CalisanBilgileriVektoru tumunu_bul(std::function<bool(CalisanBilgileriPtr)> sart);
};


#endif //OTOBUSBILGISISTEMII_CALISANBILGILERIDEPOSU_H
