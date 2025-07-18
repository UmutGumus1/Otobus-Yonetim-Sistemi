//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_CALISANBILGILERI_H
#define OTOBUSBILGISISTEMII_CALISANBILGILERI_H


#include "../tanimlar.h"
class CalisanBilgileri  {
private:
    Tamsayi _tSicilNo;
    Mantiksal _bSofor;
    Metin _mSifre;
    Metin _mTCKimlik;

public:
    CalisanBilgileri();

    Tamsayi SicilNo() const;

    void setSicilNo(Tamsayi SicilNo);

    Mantiksal Sofor() const;

    void setSofor(Mantiksal Sofor);

    const Metin &Sifre() const;

    void Sifre(const Metin &Sifre);

    const Metin &TcKimlik() const;

    void setTcKimlik(const Metin &TcKimlik);

};


#endif //OTOBUSBILGISISTEMII_CALISANBILGILERI_H
