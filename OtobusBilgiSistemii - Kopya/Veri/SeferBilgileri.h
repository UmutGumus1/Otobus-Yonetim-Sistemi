//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_SEFERBILGILERI_H
#define OTOBUSBILGISISTEMII_SEFERBILGILERI_H


#include "../tanimlar.h"
class SeferBilgileri {
private:
    Tamsayi _tSeferNo;
    TarihSaat _tsSeferBaslangicSaati;
    TarihSaat _tsSeferBitisSaati;
    TarihSaat _tsSeferSuresi;
    Metin _mDuraklar;
    Mantiksal _bHaftaici;

public:
    SeferBilgileri();

    Tamsayi SeferNo() const;

    void setSeferNo(Tamsayi SeferNo);

    const TarihSaat &SeferBaslangicSaati() const;

    void setSeferBaslangicSaati(const TarihSaat &SeferBaslangicSaati);

    const TarihSaat &SeferBitisSaati() const;

    void setSeferBitisSaati(const TarihSaat &SeferBitisSaati);

    const TarihSaat &SeferSuresi() const;

    void setSeferSuresi(const TarihSaat &SeferSuresi);

    const Metin &Duraklar() const;

    void setDuraklar(const Metin &Duraklar);

    Mantiksal Haftaici() const;

    void setHaftaici(Mantiksal Haftaici);



};

#endif //OTOBUSBILGISISTEMII_SEFERBILGILERI_H
