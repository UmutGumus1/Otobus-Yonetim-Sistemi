//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_OTOBUSBILGILERIDEPOSU_H
#define OTOBUSBILGISISTEMII_OTOBUSBILGILERIDEPOSU_H


#include "../tanimlar.h"
#include <functional>
#include "nesne_deposu.h"

class OtobusBilgileriDeposu {
private:
    OtobusBilgileriVektoru _vOtobusBilgilerii;

public:

    OtobusBilgileriDeposu();


    OtobusBilgileriPtr yeniOtobusBilgisi();


    void OtobusBilgisiEkle(OtobusBilgileriPtr OtobusBilgisi);



    void OtobusBilgisiSil(Metin OtobusunPlakasi);
    void OtobusBilgisiSil(OtobusBilgileriVektoru ::const_iterator i);




    typedef std::function<bool(OtobusBilgileriPtr)> filtre_fonksiyonu;

    __attribute__((unused)) OtobusBilgileriPtr ilki_bul(filtre_fonksiyonu sart);

    OtobusBilgileriPtr sonu_bul(filtre_fonksiyonu sart);

    OtobusBilgileriVektoru tumunu_bul(filtre_fonksiyonu sart);


};


#endif //OTOBUSBILGISISTEMII_OTOBUSBILGILERIDEPOSU_H
