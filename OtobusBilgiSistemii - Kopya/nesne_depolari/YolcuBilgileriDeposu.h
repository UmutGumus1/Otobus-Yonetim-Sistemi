//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_YOLCUBILGILERIDEPOSU_H
#define OTOBUSBILGISISTEMII_YOLCUBILGILERIDEPOSU_H


#include "../tanimlar.h"
#include "nesne_deposu.h"
#include <functional>

class YolcuBilgileriDeposu {
private:
    YolcuBilgileriVektoru _vYolcuBilgilerii;

public:

    YolcuBilgileriDeposu();


    YolcuBilgileriPtr yeniYolcuBilgisi();


    void YolcuBilgisiEkle(YolcuBilgileriPtr YolcuBilgisi);



    void YolcuBilgisiSil(Metin Heskodu);
    void YolcuBilgisiSil(YolcuBilgileriVektoru::const_iterator i);




    typedef std::function<bool(YolcuBilgileriPtr)> filtre_fonksiyonu;

    __attribute__((unused)) YolcuBilgileriPtr ilki_bul(filtre_fonksiyonu sart);

    YolcuBilgileriPtr sonu_bul(filtre_fonksiyonu sart);

    YolcuBilgileriVektoru tumunu_bul(filtre_fonksiyonu sart);



};

#endif //OTOBUSBILGISISTEMII_YOLCUBILGILERIDEPOSU_H
