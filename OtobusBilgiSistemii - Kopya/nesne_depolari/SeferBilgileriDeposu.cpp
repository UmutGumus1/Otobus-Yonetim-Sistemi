//
// Created by umutg on 2.01.2022.
//

#include "SeferBilgileriDeposu.h"

#include "../veri/SeferBilgileri.h"

SeferBilgileriDeposu::SeferBilgileriDeposu() {

}

SeferBilgileriPtr SeferBilgileriDeposu::yeniSeferBilgisi() {
    return std::make_shared<SeferBilgileri>();
}

void SeferBilgileriDeposu::SeferBilgisiEkle(SeferBilgileriPtr SeferBilgisi) {
    for(auto SeferBilgisi_i: _vSeferBilgilerii) {
        if(SeferBilgisi_i->SeferNo() == SeferBilgisi->SeferNo()) {
            throw std::invalid_argument("Tekrar eden Sefer No algilandi!");
        }
    }

    _vSeferBilgilerii.push_back(SeferBilgisi);


}

void SeferBilgileriDeposu::SeferBilgisiSil(Tamsayi SeferNo) {
    for(auto i=_vSeferBilgilerii.begin();
        i!=_vSeferBilgilerii.end();
        i++) {
        auto &SeferBilgisi = *i;
        if(SeferBilgisi->SeferNo()==SeferNo) {
            SeferBilgisiSil(i);
            break;
        }

    }

}

void SeferBilgileriDeposu::SeferBilgisiSil(SeferBilgileriVektoru::const_iterator i) {
    _vSeferBilgilerii.erase(i);

}

SeferBilgileriPtr SeferBilgileriDeposu::ilki_bul(SeferBilgileriDeposu::filtre_fonksiyonu sart) {
    for (auto i = _vSeferBilgilerii.begin();
         i != _vSeferBilgilerii.end();
         i++) {
        auto SeferBilgisi = *i;
        if (sart(SeferBilgisi)) {
            return SeferBilgisi;
        }
    }
    throw std::invalid_argument("Sarta uyan Sefer No bulunamadi!") ;
}

SeferBilgileriPtr SeferBilgileriDeposu::sonu_bul(SeferBilgileriDeposu::filtre_fonksiyonu sart) {
    for(auto i = _vSeferBilgilerii.begin();
        i!= _vSeferBilgilerii.end();
        i++) {
        auto SeferBilgisi = *i;
        if(sart(SeferBilgisi)) {
            return SeferBilgisi;
        }
    }
    throw std::invalid_argument( "Sarta uyan Sefer No bulunamadi!");
}

SeferBilgileriVektoru SeferBilgileriDeposu::tumunu_bul(SeferBilgileriDeposu::filtre_fonksiyonu sart) {
    SeferBilgileriVektoru sonuc;

    for(auto i = _vSeferBilgilerii.begin();
        i!= _vSeferBilgilerii.end();
        i++) {
        auto SeferBilgisi = *i;
        if(sart(SeferBilgisi)) {
            sonuc.push_back(SeferBilgisi);
        }
    }
    return sonuc;
}


