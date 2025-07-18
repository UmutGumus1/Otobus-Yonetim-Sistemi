//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_INSAN_H
#define OTOBUSBILGISISTEMII_INSAN_H


#include "../tanimlar.h"

class Insan {

private:
    Metin _mTCKimlik;
    Metin _mAd;
    Metin _mSoyad;

public:
    Insan();

    const Metin &TcKimlik() const;

    void setTcKimlik(const Metin &TcKimlik);

    const Metin &Ad() const;

    void setAd(const Metin &Ad);

    const Metin &Soyad() const;

    void setSoyad(const Metin &Soyad);

};



#endif //OTOBUSBILGISISTEMII_INSAN_H
