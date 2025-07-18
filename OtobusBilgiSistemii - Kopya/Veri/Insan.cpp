//
// Created by umutg on 2.01.2022.
//

#include "Insan.h"

Insan::Insan() {
    _mAd = "";
    _mSoyad = "";
    _mTCKimlik = "";
}

const Metin &Insan::TcKimlik() const {
    return _mTCKimlik;
}

void Insan::setTcKimlik(const Metin &TcKimlik) {
    if (TcKimlik.empty()) {
        return;
    }
    _mTCKimlik = TcKimlik;
}

const Metin &Insan::Ad() const {
    return _mAd;
}

void Insan::setAd(const Metin &Ad) {
    if (Ad.empty()) {
        return;
    }
    _mAd = Ad;
}

const Metin &Insan::Soyad() const {
    return _mSoyad;
}

void Insan::setSoyad(const Metin &Soyad) {
    if (Soyad.empty()) {
        return;
    }
    _mSoyad = Soyad;
}
