//
// Created by umutg on 2.01.2022.
//

#include "YolcuBilgileriDeposu.h"

#include "../veri/YolcuBilgileri.h"

YolcuBilgileriDeposu::YolcuBilgileriDeposu() {

}

YolcuBilgileriPtr YolcuBilgileriDeposu::yeniYolcuBilgisi() {
    return std::make_shared<YolcuBilgileri>();
}

void YolcuBilgileriDeposu::YolcuBilgisiEkle(YolcuBilgileriPtr YolcuBilgisi) {
    for(auto YolcuBilgisi_i: _vYolcuBilgilerii) {
        if(YolcuBilgisi_i->Heskodu() == YolcuBilgisi->Heskodu()) {
            throw std::invalid_argument("Tekrar eden HESKODU algilandi!");
        }
    }

    _vYolcuBilgilerii.push_back(YolcuBilgisi);

}

void YolcuBilgileriDeposu::YolcuBilgisiSil(Metin Heskodu) {
    for(auto i=_vYolcuBilgilerii.begin();
        i!=_vYolcuBilgilerii.end();
        i++) {
        auto &YolcuBilgisi = *i;
        if(YolcuBilgisi-> Heskodu()==Heskodu) {
            YolcuBilgisiSil(i);
            break;
        }

    }
}
void YolcuBilgileriDeposu::YolcuBilgisiSil(YolcuBilgileriVektoru::const_iterator i) {
    _vYolcuBilgilerii.erase(i);

}

YolcuBilgileriPtr YolcuBilgileriDeposu::ilki_bul(YolcuBilgileriDeposu::filtre_fonksiyonu sart) {

    for (auto i = _vYolcuBilgilerii.begin();
         i != _vYolcuBilgilerii.end();
         i++) {
        auto YolcuBilgisi = *i;
        if (sart(YolcuBilgisi)) {
            return YolcuBilgisi;
        }
    }
    throw std::invalid_argument("Sarta uyan Heskodu bulunamadi!") ;
}

YolcuBilgileriPtr YolcuBilgileriDeposu::sonu_bul(YolcuBilgileriDeposu::filtre_fonksiyonu sart) {
    for(auto i = _vYolcuBilgilerii.begin();
        i!= _vYolcuBilgilerii.end();
        i++) {
        auto YolcuBilgisi = *i;
        if(sart(YolcuBilgisi)) {
            return YolcuBilgisi;
        }
    }
    throw std::invalid_argument( "Sarta uyan Heskodu bulunamadi!");
}

YolcuBilgileriVektoru YolcuBilgileriDeposu::tumunu_bul(YolcuBilgileriDeposu::filtre_fonksiyonu sart) {
    YolcuBilgileriVektoru sonuc;

    for(auto i = _vYolcuBilgilerii.begin();
        i!= _vYolcuBilgilerii.end();
        i++) {
        auto YolcuBilgisi = *i;
        if(sart(YolcuBilgisi)) {
            sonuc.push_back(YolcuBilgisi);
        }
    }
    return sonuc;
}
