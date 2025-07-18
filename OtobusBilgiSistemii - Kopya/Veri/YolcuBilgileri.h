//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_YOLCUBILGILERI_H
#define OTOBUSBILGISISTEMII_YOLCUBILGILERI_H


#include "../tanimlar.h"
#include "Insan.h"

class YolcuBilgileri: public Insan {
private:
    Metin _mHESKODU;
    Metin _mCinsiyet;
    Mantiksal _bAile;
    Metin _mTCKimlik;

public:
    YolcuBilgileri();

    const Metin &Heskodu() const;

    void setHeskodu(const Metin &Heskodu);

    const Metin &Cinsiyet() const;

    void setCinsiyet(const Metin &Cinsiyet);

    Mantiksal Aile() const;

    void setAile(Mantiksal Aile);

    const Metin &TcKimlik() const;

    void setTcKimlik(const Metin &TcKimlik);

};



#endif //OTOBUSBILGISISTEMII_YOLCUBILGILERI_H
