//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_SEFERBILGILERIDEPOSU_H
#define OTOBUSBILGISISTEMII_SEFERBILGILERIDEPOSU_H


#include "../tanimlar.h"
#include "nesne_deposu.h"
#include <functional>

class SeferBilgileriDeposu {
private:
    SeferBilgileriVektoru _vSeferBilgilerii;

public:

    SeferBilgileriDeposu();


    SeferBilgileriPtr yeniSeferBilgisi();


    void SeferBilgisiEkle(SeferBilgileriPtr SeferBilgisi);



    void SeferBilgisiSil(Tamsayi SeferNo);
    void SeferBilgisiSil(SeferBilgileriVektoru ::const_iterator i);




    typedef std::function<bool(SeferBilgileriPtr)> filtre_fonksiyonu;

    __attribute__((unused)) SeferBilgileriPtr ilki_bul(filtre_fonksiyonu sart);

    SeferBilgileriPtr sonu_bul(filtre_fonksiyonu sart);

    SeferBilgileriVektoru tumunu_bul(filtre_fonksiyonu sart);


};




#endif //OTOBUSBILGISISTEMII_SEFERBILGILERIDEPOSU_H
