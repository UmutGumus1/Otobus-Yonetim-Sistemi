//
// Created by umutg on 2.01.2022.
//

#include "OtobusBilgileri.h"

OtobusBilgileri::OtobusBilgileri() {
    _mOtobusunMarkasi = "";
    _mOtobusunPlakasi = "";
    _tOtobusunKapasitesi = 0;


}

const Metin &OtobusBilgileri::OtobusunPlakasi() const {
    return _mOtobusunPlakasi;
}

void OtobusBilgileri::setOtobusunPlakasi(const Metin &OtobusunPlakasi) {
    if (OtobusunPlakasi.empty()) {
        return;
    }
    _mOtobusunPlakasi = OtobusunPlakasi;
}

const Metin &OtobusBilgileri::OtobusunMarkasi() const {
    return _mOtobusunMarkasi;
}

void OtobusBilgileri::setOtobusunMarkasi(const Metin &OtobusunMarkasi) {
    if (OtobusunMarkasi.empty()) {
        return;
    }
    _mOtobusunMarkasi = OtobusunMarkasi;
}

Tamsayi OtobusBilgileri::OtobusunKapasitesi() const {
    return _tOtobusunKapasitesi;
}

void OtobusBilgileri::OtobusunKapasitesi(Tamsayi OtobusunKapasitesi) {
    if (OtobusunKapasitesi > 100) {
        return;
    }
    _tOtobusunKapasitesi = OtobusunKapasitesi;
}
