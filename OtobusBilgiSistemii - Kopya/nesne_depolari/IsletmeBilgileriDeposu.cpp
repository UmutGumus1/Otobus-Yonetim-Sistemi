//
// Created by umutg on 2.01.2022.
//

#include "IsletmeBilgileriDeposu.h"

#include "../veri/IsletmeBilgileri.h"



IsletmeBilgileriDeposu::IsletmeBilgileriDeposu() {

}

IsletmeBilgileriPtr IsletmeBilgileriDeposu::yeniIsletmeBilgisi() {
    return std::make_shared<IsletmeBilgileri>();
}

void IsletmeBilgileriDeposu::IsletmeBilgisiEkle(IsletmeBilgileriPtr IsletmeBilgisi) {
    for(auto IsletmeBilgisi_i: _vIsletmeBilgilerii) {
        if(IsletmeBilgisi_i->RuhsatNo() == IsletmeBilgisi->RuhsatNo()) {
            throw std::invalid_argument("Tekrar eden Isletme Adi algilandi!");
        }
    }

    _vIsletmeBilgilerii.push_back(IsletmeBilgisi);

}

void IsletmeBilgileriDeposu::IsletmeBilgisiSil(Metin RuhsatNo) {
    for(auto i=_vIsletmeBilgilerii.begin();
        i!=_vIsletmeBilgilerii.end();
        i++) {
        auto &IsletmeBilgisi = *i;
        if(IsletmeBilgisi->RuhsatNo()==RuhsatNo) {
            IsletmeBilgisiSil(i);
            break;
        }

    }
}
void IsletmeBilgileriDeposu::IsletmeBilgisiSil(IsletmeBilgileriVektoru::const_iterator i) {
    _vIsletmeBilgilerii.erase(i);

}

__attribute__((unused)) IsletmeBilgileriPtr IsletmeBilgileriDeposu::ilki_bul(IsletmeBilgileriDeposu::filtre_fonksiyonu sart) {
    for (auto i = _vIsletmeBilgilerii.begin();
         i != _vIsletmeBilgilerii.end();
         i++) {
        auto IsletmeBilgisi = *i;
        if (sart(IsletmeBilgisi)) {
            return IsletmeBilgisi;
        }
    }
    throw std::invalid_argument("Sarta uyan Isletme Adi bulunamadi!") ;
}


IsletmeBilgileriPtr IsletmeBilgileriDeposu::sonu_bul(IsletmeBilgileriDeposu::filtre_fonksiyonu sart) {
    for(auto i = _vIsletmeBilgilerii.begin();
        i!= _vIsletmeBilgilerii.end();
        i++) {
        auto IsletmeBilgisi = *i;
        if(sart(IsletmeBilgisi)) {
            return IsletmeBilgisi;
        }
    }
    throw std::invalid_argument( "Sarta uyan Isletme Adi bulunamadi!");
}


IsletmeBilgileriVektoru IsletmeBilgileriDeposu::tumunu_bul(IsletmeBilgileriDeposu::filtre_fonksiyonu sart) {
    IsletmeBilgileriVektoru sonuc;

    for(auto i = _vIsletmeBilgilerii.begin();
        i!= _vIsletmeBilgilerii.end();
        i++) {
        auto IsletmeBilgisi = *i;
        if(sart(IsletmeBilgisi)) {
            sonuc.push_back(IsletmeBilgisi);
        }
    }
    return sonuc;
}


