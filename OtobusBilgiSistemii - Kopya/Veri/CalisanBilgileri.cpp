//
// Created by umutg on 2.01.2022.
//

#include "CalisanBilgileri.h"

CalisanBilgileri::CalisanBilgileri() {
    _tSicilNo = 0;
    _bSofor = false;
    _mSifre = "";
    _mTCKimlik = "";



}

Tamsayi CalisanBilgileri::SicilNo() const {
    return _tSicilNo;
}

void CalisanBilgileri::setSicilNo(Tamsayi SicilNo) {
    if (SicilNo <= 0){
        return;
    }
    _tSicilNo = SicilNo;
}

Mantiksal CalisanBilgileri::Sofor() const {
    return _bSofor;
}

void CalisanBilgileri::setSofor(Mantiksal Sofor) {
    _bSofor = Sofor;
}

const Metin &CalisanBilgileri::Sifre() const {
    return _mSifre;
}

void CalisanBilgileri::Sifre(const Metin &Sifre) {
    if (Sifre.empty()){
        return;
    }
    _mSifre = Sifre;
}

const Metin &CalisanBilgileri::TcKimlik() const {
    return _mTCKimlik;
}

void CalisanBilgileri::setTcKimlik(const Metin &TcKimlik) {
    if (TcKimlik.empty()){
        return;
    }
    _mTCKimlik = TcKimlik;
}