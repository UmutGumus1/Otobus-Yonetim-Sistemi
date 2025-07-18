//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_VERI_H
#define OTOBUSBILGISISTEMII_VERI_H

#include "nesne_depolari/CalisanBilgileriDeposu.h"
#include "nesne_depolari/IsletmeBilgileriDeposu.h"
#include "nesne_depolari/nesne_deposu.h"
#include "nesne_depolari/OtobusBilgileriDeposu.h"
#include "nesne_depolari/SeferBilgileriDeposu.h"
#include "nesne_depolari/SeyahatBilgileriDeposu.h"
#include "nesne_depolari/YolcuBilgileriDeposu.h"

class Veri {
private:
    CalisanBilgileriDeposu _dCalisanBilgileri;
    IsletmeBilgileriDeposu _dIsletmeBilgileri;
    OtobusBilgileriDeposu _dOtobusBilgileri;
    SeferBilgileriDeposu _dSeferBilgileri;
    SeyahatBilgileriDeposu _dSeyahatBilgileri;
    YolcuBilgileriDeposu _dYolcuBilgileri;

    Veri();

public:
    CalisanBilgileriDeposu &CalisanBilgileri();
    IsletmeBilgileriDeposu &IsletmeBilgileri();
    OtobusBilgileriDeposu &OtobusBilgileri();
    SeyahatBilgileriDeposu &SeyahatBilgileri();
    SeferBilgileriDeposu &SeferBilgileri();
    YolcuBilgileriDeposu &YolcuBilgileri();

    static Veri &v1();


};


#endif //OTOBUSBILGISISTEMII_VERI_H
