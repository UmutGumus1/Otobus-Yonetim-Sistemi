//
// Created by umutg on 2.01.2022.
//

#include "CalisanBilgileriDeposu.h"

#include "../veri/CalisanBilgileri.h"

CalisanBilgileriDeposu::CalisanBilgileriDeposu() {

}

CalisanBilgileriPtr CalisanBilgileriDeposu::yeniCalisanBilgisi() {
    return std::make_shared<CalisanBilgileri>();
}

void CalisanBilgileriDeposu::CalisanBilgisiEkle(CalisanBilgileriPtr CalisanBilgisi) {
    for(auto CalisanBilgisi_i: _vCalisanBilgilerii) {
        if(CalisanBilgisi_i->SicilNo() == CalisanBilgisi->SicilNo()) {
            throw std::invalid_argument("Tekrar eden Sicil No algilandi!");
        }
    }

    _vCalisanBilgilerii.push_back(CalisanBilgisi);

}

void CalisanBilgileriDeposu::CalisanBilgisiSil(Tamsayi SicilNo) {
    for(auto i=_vCalisanBilgilerii.begin();
        i!=_vCalisanBilgilerii.end();
        i++) {
        auto &CalisanBilgisi = *i;
        if(CalisanBilgisi->SicilNo()==SicilNo) {
            CalisanBilgisiSil(i);
            break;
        }

    }

}

void CalisanBilgileriDeposu::CalisanBilgisiSil(CalisanBilgileriVektoru::const_iterator i) {
    _vCalisanBilgilerii.erase(i);

}

CalisanBilgileriPtr CalisanBilgileriDeposu::ilki_bul(std::function<bool(CalisanBilgileriPtr)> sart) {
    for (auto i = _vCalisanBilgilerii.begin();
         i != _vCalisanBilgilerii.end();
         i++) {
        auto CalisanBilgisi = *i;
        if (sart(CalisanBilgisi)) {
            return CalisanBilgisi;
        }
    }
    throw std::invalid_argument("Sarta uyan Isletme Adi bulunamadi!") ;
}

CalisanBilgileriPtr CalisanBilgileriDeposu::sonu_bul(std::function<bool(CalisanBilgileriPtr)> sart) {
    for(auto i = _vCalisanBilgilerii.begin();
        i!= _vCalisanBilgilerii.end();
        i++) {
        auto CalisanBilgisi = *i;
        if(sart(CalisanBilgisi)) {
            return CalisanBilgisi;
        }
    }
    throw std::invalid_argument( "Sarta uyan Sicil No bulunamadi!");
}

CalisanBilgileriVektoru CalisanBilgileriDeposu::tumunu_bul(std::function<bool(CalisanBilgileriPtr)> sart) {
    CalisanBilgileriVektoru sonuc;

    for(auto i = _vCalisanBilgilerii.begin();
        i!= _vCalisanBilgilerii.end();
        i++) {
        auto CalisanBilgisi = *i;
        if(sart(CalisanBilgisi)) {
            sonuc.push_back(CalisanBilgisi);
        }
    }
    return sonuc;
}


