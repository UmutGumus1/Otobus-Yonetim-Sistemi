//
// Created by umutg on 2.01.2022.
//

#include "OtobusBilgileriDeposu.h"

#include "../veri/OtobusBilgileri.h"

#include <stdexcept>




OtobusBilgileriDeposu::OtobusBilgileriDeposu() {

}

OtobusBilgileriPtr OtobusBilgileriDeposu::yeniOtobusBilgisi() {
    return std::make_shared<OtobusBilgileri>();
}

void OtobusBilgileriDeposu::OtobusBilgisiEkle(OtobusBilgileriPtr OtobusBilgisi) {
    for (auto OtobusBilgileri_i: _vOtobusBilgilerii) {
        if (OtobusBilgileri_i->OtobusunPlakasi() == OtobusBilgisi->OtobusunPlakasi()) {
            throw std::invalid_argument("Tekrar eden otobus plakasi algilandi!");
        }
    }
    _vOtobusBilgilerii.push_back(OtobusBilgisi);
}

void OtobusBilgileriDeposu::OtobusBilgisiSil(Metin OtobusunPlakasi) {
    for(auto i=_vOtobusBilgilerii.begin();
        i!=_vOtobusBilgilerii.end();
        i++) {
        auto &OtobusBilgisi = *i;
        if(OtobusBilgisi->OtobusunPlakasi()==OtobusunPlakasi) {
            OtobusBilgisiSil(i);
            break;
        }

    }

}

void OtobusBilgileriDeposu::OtobusBilgisiSil(OtobusBilgileriVektoru::const_iterator i) {
    _vOtobusBilgilerii.erase(i);

}

OtobusBilgileriPtr OtobusBilgileriDeposu::ilki_bul(OtobusBilgileriDeposu::filtre_fonksiyonu sart) {
    for (auto i = _vOtobusBilgilerii.begin();
         i != _vOtobusBilgilerii.end();
         i++) {
        auto OtobusBilgisi = *i;
        if (sart(OtobusBilgisi)) {
            return OtobusBilgisi;
        }
    }
    throw std::invalid_argument("Sarta uyan Otobus plakasi bulunamadi!") ;

}

OtobusBilgileriPtr OtobusBilgileriDeposu::sonu_bul(OtobusBilgileriDeposu::filtre_fonksiyonu sart) {
    for(auto i = _vOtobusBilgilerii.begin();
        i!= _vOtobusBilgilerii.end();
        i++) {
        auto OtobusBilgisi = *i;
        if(sart(OtobusBilgisi)) {
            return OtobusBilgisi;
        }
    }
    throw std::invalid_argument( "Sarta uyan Otobus plakasi bulunamadi!");
}

OtobusBilgileriVektoru OtobusBilgileriDeposu::tumunu_bul(OtobusBilgileriDeposu::filtre_fonksiyonu sart) {
    OtobusBilgileriVektoru sonuc;
    for(auto i = _vOtobusBilgilerii.begin();
        i!= _vOtobusBilgilerii.end();
        i++) {
        auto OtobusBilgisi = *i;
        if(sart(OtobusBilgisi)) {
            sonuc.push_back(OtobusBilgisi);
        }
    }
    return sonuc;
}

