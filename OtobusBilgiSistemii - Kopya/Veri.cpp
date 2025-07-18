//
// Created by umutg on 2.01.2022.
//

#include "Veri.h"

CalisanBilgileriDeposu &Veri::CalisanBilgileri() {
    return _dCalisanBilgileri;
}

IsletmeBilgileriDeposu &Veri::IsletmeBilgileri() {
    return _dIsletmeBilgileri;
}

SeferBilgileriDeposu &Veri::SeferBilgileri() {
    return _dSeferBilgileri;
}

SeyahatBilgileriDeposu &Veri::SeyahatBilgileri() {
    return _dSeyahatBilgileri;
}

YolcuBilgileriDeposu &Veri::YolcuBilgileri() {
    return _dYolcuBilgileri;
}

OtobusBilgileriDeposu &Veri::OtobusBilgileri() {
    return _dOtobusBilgileri;
}

Veri::Veri() {

}

Veri &Veri::v1() {
    static Veri v11;
    return v11;

}
