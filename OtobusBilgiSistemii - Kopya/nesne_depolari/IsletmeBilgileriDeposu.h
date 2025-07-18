//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_ISLETMEBILGILERIDEPOSU_H
#define OTOBUSBILGISISTEMII_ISLETMEBILGILERIDEPOSU_H


#include "../tanimlar.h"
#include "nesne_deposu.h"
#include <functional>

class IsletmeBilgileriDeposu {
private:
    IsletmeBilgileriVektoru _vIsletmeBilgilerii;

public:

    IsletmeBilgileriDeposu();


    IsletmeBilgileriPtr yeniIsletmeBilgisi();


    void IsletmeBilgisiEkle(IsletmeBilgileriPtr IsletmeBilgisi);



    void IsletmeBilgisiSil(Metin IsletmeAdi);
    void IsletmeBilgisiSil(IsletmeBilgileriVektoru::const_iterator i);




    typedef std::function<bool(IsletmeBilgileriPtr)> filtre_fonksiyonu;

    __attribute__((unused)) IsletmeBilgileriPtr ilki_bul(filtre_fonksiyonu sart);

    IsletmeBilgileriPtr sonu_bul(filtre_fonksiyonu sart);

    IsletmeBilgileriVektoru tumunu_bul(filtre_fonksiyonu sart);

};



#endif //OTOBUSBILGISISTEMII_ISLETMEBILGILERIDEPOSU_H
