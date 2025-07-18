//
// Created by umutg on 2.01.2022.
//

#include "SeyahatBilgileri.h"

SeyahatBilgileri::SeyahatBilgileri() {
    _tKoltukNo = 0;
    _tsSeyahatTarihi = "";
    _mKalkisYeri = "";
    _mVarisYeri = "";
    _tBiletFiyati = 0;


}

Tamsayi SeyahatBilgileri::KoltukNo() const {
    return _tKoltukNo;
}

void SeyahatBilgileri::setKoltukNo(Tamsayi KoltukNo) {
    if(KoltukNo >100 ){
        return;
    }
    _tKoltukNo = KoltukNo;
}

const TarihSaat &SeyahatBilgileri::SeyahatTarihi() const {
    return _tsSeyahatTarihi;
}

void SeyahatBilgileri::setSeyahatTarihi(const TarihSaat &SeyahatTarihi) {
    if (SeyahatTarihi.empty()) {
        return;
    }
    _tsSeyahatTarihi = SeyahatTarihi;
}

const Metin &SeyahatBilgileri::KalkisYeri() const {
    return _mKalkisYeri;
}

void SeyahatBilgileri::setKalkisYeri(const Metin &KalkisYeri){
    if (KalkisYeri.empty()){
        return;
    }
    _mKalkisYeri = KalkisYeri;
}

const Metin &SeyahatBilgileri::VarisYeri() const {
    return _mVarisYeri;
}

void SeyahatBilgileri::setVarisYeri(const Metin &VarisYeri) {
    if (VarisYeri.empty()){
        return;
    }
    _mVarisYeri = VarisYeri;
}

Tamsayi SeyahatBilgileri::BiletFiyati() const {
    return _tBiletFiyati;
}

void SeyahatBilgileri::setBiletFiyati(Tamsayi BiletFiyati) {
    if (BiletFiyati <= 0){
        return;
    }
    _tBiletFiyati = BiletFiyati;
}
