//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_NESNE_DEPOSU_H
#define OTOBUSBILGISISTEMII_NESNE_DEPOSU_H

#include <memory>
#include <vector>
#include <functional>
#include <stdexcept>

template<class VeriTur>
class NesneDeposuSablonu {
public:
    typedef std::shared_ptr<VeriTur> PtrTur;
    typedef std::vector<PtrTur> VekTur;
protected:
    VekTur _vNesneler;

public:


    NesneDeposuSablonu() {

    }


    PtrTur yeniNesne() {
        return std::make_shared<VeriTur>();
    }


    virtual void nesneEkle(PtrTur nesne) {

        _vNesneler.push_back(nesne);
    }



    void nesneSil(typename VekTur::const_iterator i) {
        _vNesneler.erase(i);
    }



    typedef std::function<bool(PtrTur)> filtre_fonksiyonu;

    PtrTur ilki_bul(filtre_fonksiyonu sart) {
        for (auto i = _vNesneler.begin();
             i != _vNesneler.end();
             i++) {
            auto nesne = *i;
            if (sart(nesne)) {
                return nesne;
            }
        }
        throw std::invalid_argument("Sarta uyan Bilgi bulunamadi!");
    }

    PtrTur sonu_bul(filtre_fonksiyonu sart) {
        for (auto i = _vNesneler.rbegin();
             i != _vNesneler.rend();
             i++) {
            auto nesne = *i;
            if (sart(nesne)) {
                return nesne;
            }
        }
        throw std::invalid_argument("Sarta uyan Bilgi bulunamadi!");
    }

    VekTur tumunu_bul(filtre_fonksiyonu sart) {
        VekTur sonuc;
        for (auto i = _vNesneler.rbegin();
             i != _vNesneler.rend();
             i++) {
            auto nesne = *i;
            if (sart(nesne)) {
                sonuc.push_back(nesne);
            }
        }
        return sonuc;
    }
};


#endif //OTOBUSBILGISISTEMII_NESNE_DEPOSU_H
