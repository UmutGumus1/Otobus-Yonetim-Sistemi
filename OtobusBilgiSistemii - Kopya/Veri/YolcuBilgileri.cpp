//
// Created by umutg on 2.01.2022.
//

#include "YolcuBilgileri.h"

YolcuBilgileri::YolcuBilgileri() {
    _mHESKODU = "";
    _mCinsiyet = "";
    _bAile = false;
    _mTCKimlik = "";



}

const Metin &YolcuBilgileri::TcKimlik() const {
    return _mTCKimlik;
}

void YolcuBilgileri::setTcKimlik(const Metin &TcKimlik) {
    if (TcKimlik.empty()){
        return;
    }
    _mTCKimlik = TcKimlik;
}

const Metin &YolcuBilgileri::Heskodu() const {
    return _mHESKODU;
}

void YolcuBilgileri::setHeskodu(const Metin &Heskodu) {
    _mHESKODU = Heskodu;
}

const Metin &YolcuBilgileri::Cinsiyet() const {
    return _mCinsiyet;
}

void YolcuBilgileri::setCinsiyet(const Metin &Cinsiyet) {
    _mCinsiyet = Cinsiyet;
}

Mantiksal YolcuBilgileri::Aile() const {
    return _bAile;
}

void YolcuBilgileri::setAile(Mantiksal Aile) {
    _bAile = Aile;
}
