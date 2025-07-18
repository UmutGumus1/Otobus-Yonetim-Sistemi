//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_OTOBUSBILGILERI_H
#define OTOBUSBILGISISTEMII_OTOBUSBILGILERI_H

#include "../tanimlar.h"
class OtobusBilgileri {
private:

    Metin _mOtobusunPlakasi;
    Metin _mOtobusunMarkasi;
    Tamsayi _tOtobusunKapasitesi;


public:
    OtobusBilgileri();

    const Metin &OtobusunPlakasi() const;

    void setOtobusunPlakasi(const Metin &OtobusunPlakasi);

    const Metin &OtobusunMarkasi() const;

    void setOtobusunMarkasi(const Metin &OtobusunMarkasi);

    Tamsayi OtobusunKapasitesi() const;

    void OtobusunKapasitesi(Tamsayi OtobusunKapasitesi);


};



#endif //OTOBUSBILGISISTEMII_OTOBUSBILGILERI_H
