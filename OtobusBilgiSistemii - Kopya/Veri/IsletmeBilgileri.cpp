//
// Created by umutg on 2.01.2022.
//

#include "IsletmeBilgileri.h"

IsletmeBilgileri::IsletmeBilgileri() {
    _mIsletmeAdi = "";
    _mIsletmeAdresi = "";
    _mIsletmeTelefonu = "";
    _mRuhsatNo = "";


}




void IsletmeBilgileri::setIsletmeAdi(const Metin &IsletmeAdi) {
    if (IsletmeAdi.empty()) {
        return;
    }
    _mIsletmeAdi = IsletmeAdi;
}

const Metin &IsletmeBilgileri::IsletmeAdresi() const {
    return _mIsletmeAdresi;
}

void IsletmeBilgileri::setIsletmeAdresi(const Metin &IsletmeAdresi) {
    if (IsletmeAdresi.empty()) {
        return;
    }
    _mIsletmeAdresi = IsletmeAdresi;
}

const Metin &IsletmeBilgileri::IsletmeTelefonu() const {
    return _mIsletmeTelefonu;
}

void IsletmeBilgileri::setIsletmeTelefonu(const Metin &IsletmeTelefonu) {
    if (IsletmeTelefonu.empty()) {
        return;
    }
    _mIsletmeTelefonu = IsletmeTelefonu;
}

const Metin &IsletmeBilgileri::RuhsatNo() const {
    return _mRuhsatNo;
}

void IsletmeBilgileri::setRuhsatNo(const Metin &RuhsatNo) {
    if (RuhsatNo.empty()) {
        return;
    }
    _mRuhsatNo = RuhsatNo;
}