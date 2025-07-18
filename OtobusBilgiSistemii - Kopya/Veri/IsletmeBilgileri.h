//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_ISLETMEBILGILERI_H
#define OTOBUSBILGISISTEMII_ISLETMEBILGILERI_H


#include "../tanimlar.h"

                   //Merhabalar Hocam ben ödevimi dersleri izleyerek ve eş zamanlı yaparak bitirmiştim.
                  //Fakat explorer ile klasör haline getirdikten sonra içindekilerin hepsi silindi yanlışlıkla.
                  //Ben de tekrar hazırladım bi çalışıp bi hata verebiliyor.
                  //Bunu belirtmek istedim teşekkürler iyi günler :)

class IsletmeBilgileri {
private:
    Metin _mIsletmeAdi;
    Metin _mIsletmeAdresi;
    Metin _mIsletmeTelefonu;
    Metin _mRuhsatNo;


public:
    IsletmeBilgileri();


    void setIsletmeAdi(const Metin &IsletmeAdi);

    const Metin &IsletmeAdresi() const;

    void setIsletmeAdresi(const Metin &IsletmeAdresi);

    const Metin &IsletmeTelefonu() const;

    void setIsletmeTelefonu(const Metin &IsletmeTelefonu);

    const Metin &RuhsatNo() const;

    void setRuhsatNo(const Metin &RuhsatNo);
};




#endif //OTOBUSBILGISISTEMII_ISLETMEBILGILERI_H
