//
// Created by umutg on 2.01.2022.
//

#include "SeferBilgileri.h"

SeferBilgileri::SeferBilgileri() {
    _tSeferNo = 0;
    _tsSeferBaslangicSaati = "";
    _tsSeferBitisSaati = "";
    _tsSeferSuresi = "";
    _mDuraklar = "";
    _bHaftaici = false;


}

Tamsayi SeferBilgileri::SeferNo() const {
    return _tSeferNo;
}

void SeferBilgileri::setSeferNo(Tamsayi SeferNo) {
    if (SeferNo <= 0) {
        return;
    }
    _tSeferNo = SeferNo;
}

const TarihSaat &SeferBilgileri::SeferBaslangicSaati() const {
    return _tsSeferBaslangicSaati;
}

void SeferBilgileri::setSeferBaslangicSaati(const TarihSaat &SeferBaslangicSaati) {
    if (SeferBaslangicSaati.empty()) {
        return;
    }
    _tsSeferBaslangicSaati = SeferBaslangicSaati;
}

const TarihSaat &SeferBilgileri::SeferBitisSaati() const {
    return _tsSeferBitisSaati;
}

void SeferBilgileri::setSeferBitisSaati(const TarihSaat &SeferBitisSaati) {
    if (SeferBitisSaati.empty()) {
        return;
    }
    _tsSeferBitisSaati = SeferBitisSaati;
}

const TarihSaat &SeferBilgileri::SeferSuresi() const {
    return _tsSeferSuresi;
}

void SeferBilgileri::setSeferSuresi(const TarihSaat &SeferSuresi) {
    if (SeferSuresi.empty()) {
        return;
    }
    _tsSeferSuresi = SeferSuresi;
}

const Metin &SeferBilgileri::Duraklar() const {
    return _mDuraklar;
}

void SeferBilgileri::setDuraklar(const Metin &Duraklar) {
    if (Duraklar.empty()) {
        return;
    }
    _mDuraklar = Duraklar;
}

Mantiksal SeferBilgileri::Haftaici() const {
    return _bHaftaici;
}

void SeferBilgileri::setHaftaici(Mantiksal Haftaici) {
    _bHaftaici = Haftaici;
}
