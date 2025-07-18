//
// Created by umutg on 2.01.2022.
//

#include "SeyahatBilgileriDeposu.h"

#include "../veri/SeyahatBilgileri.h"

SeyahatBilgileriDeposu::SeyahatBilgileriDeposu() {

}

SeyahatBilgileriPtr SeyahatBilgileriDeposu::yeniSeyahatBilgisi() {
    return std::make_shared<SeyahatBilgileri>();
}

void SeyahatBilgileriDeposu::SeyahatBilgisiEkle(SeyahatBilgileriPtr SeyahatBilgileri) {
    for(auto SeyahatBilgileri_i: _vSeyahatBilgilerii) {
        if(SeyahatBilgileri_i->KoltukNo() == SeyahatBilgileri->KoltukNo()) {
            throw std::invalid_argument("Tekrar eden Koltuk No algilandi!");
        }
    }

    _vSeyahatBilgilerii.push_back(SeyahatBilgileri);

}

void SeyahatBilgileriDeposu::SeyahatBilgisiSil(Tamsayi KoltukNo) {
    for(auto i=_vSeyahatBilgilerii.begin();
        i!=_vSeyahatBilgilerii.end();
        i++) {
        auto &SeyahatBilgileri = *i;
        if(SeyahatBilgileri->KoltukNo()==KoltukNo) {
            SeyahatBilgisiSil(i);
            break;
        }

    }

}

void SeyahatBilgileriDeposu::SeyahatBilgisiSil(SeyahatBilgileriVektoru::const_iterator i) {
    _vSeyahatBilgilerii.erase(i);

}

__attribute__((unused)) SeyahatBilgileriPtr SeyahatBilgileriDeposu::ilki_bul(std::function<bool(SeyahatBilgileriPtr)> sart) {
    for (auto i = _vSeyahatBilgilerii.begin();
         i != _vSeyahatBilgilerii.end();
         i++) {
        auto SeyahatBilgileri = *i;
        if(sart(SeyahatBilgileri = *i)); {
            return SeyahatBilgileri;
        }
    }
    throw std::invalid_argument("Sarta uyan Koltuk No bulunamadi!") ;
}

SeyahatBilgileriPtr SeyahatBilgileriDeposu::sonu_bul(std::function<bool(SeyahatBilgileriPtr)> sart) {
    for(auto i = _vSeyahatBilgilerii.begin();
        i!= _vSeyahatBilgilerii.end();
        i++) {
        auto SeyahatBilgileri = *i;
        if(sart(SeyahatBilgileri)) {
            return SeyahatBilgileri;
        }
    }
    throw std::invalid_argument( "Sarta uyan Koltuk No bulunamadi!");
}

SeyahatBilgileriVektoru SeyahatBilgileriDeposu::tumunu_bul(std::function<bool(SeyahatBilgileriPtr)> sart) {
    SeyahatBilgileriVektoru sonuc;

    for(auto i = _vSeyahatBilgilerii.begin();
        i!= _vSeyahatBilgilerii.end();
        i++) {
        auto SeyahatBilgileri = *i;
        if(sart(SeyahatBilgileri)) {
            sonuc.push_back(SeyahatBilgileri);
        }
    }
    return sonuc;
}
