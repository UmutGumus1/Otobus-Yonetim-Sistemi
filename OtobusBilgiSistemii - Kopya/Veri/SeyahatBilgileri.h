//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_SEYAHATBILGILERI_H
#define OTOBUSBILGISISTEMII_SEYAHATBILGILERI_H


#include "../tanimlar.h"
class SeyahatBilgileri {
private:
    Tamsayi _tKoltukNo;
    TarihSaat _tsSeyahatTarihi;
    Metin _mKalkisYeri;
    Metin _mVarisYeri;
    Tamsayi _tBiletFiyati;

public:
    SeyahatBilgileri();

    Tamsayi KoltukNo() const;

    void setKoltukNo(Tamsayi KoltukNo);

    const TarihSaat &SeyahatTarihi() const;

    void setSeyahatTarihi(const TarihSaat &SeyahatTarihi);

    const Metin &KalkisYeri() const;

    void setKalkisYeri(const Metin &KalkisYeri);

    const Metin &VarisYeri() const;

    void setVarisYeri(const Metin &VarisYeri);

    Tamsayi BiletFiyati() const;

    void setBiletFiyati(Tamsayi BiletFiyati);

};


#endif //OTOBUSBILGISISTEMII_SEYAHATBILGILERI_H
