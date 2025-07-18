//
// Created by umutg on 2.01.2022.
//

#ifndef OTOBUSBILGISISTEMII_TANIMLAR_H
#define OTOBUSBILGISISTEMII_TANIMLAR_H

#include <string>
#include <memory>

typedef unsigned int Tamsayi;
typedef std:: string Metin;
typedef bool Mantiksal;
typedef std::string TarihSaat;
typedef unsigned char Numara;

class IsletmeBilgileri;
class Insan;
class OtobusBilgileri;
class SeferBilgileri;
class SeyahatBilgileri;
class YolcuBilgileri;
class CalisanBilgileri;


typedef std::shared_ptr<IsletmeBilgileri> IsletmeBilgileriPtr;
typedef std::shared_ptr<Insan> InsanPtr;
typedef std::shared_ptr<OtobusBilgileri> OtobusBilgileriPtr;
typedef std::shared_ptr<SeferBilgileri> SeferBilgileriPtr;
typedef std::shared_ptr<SeyahatBilgileri> SeyahatBilgileriPtr;
typedef std::shared_ptr<YolcuBilgileri> YolcuBilgileriPtr;
typedef std::shared_ptr<CalisanBilgileri> CalisanBilgileriPtr;




#include <vector>

typedef std::vector<IsletmeBilgileriPtr> IsletmeBilgileriVektoru;
typedef std::vector<OtobusBilgileriPtr> OtobusBilgileriVektoru;
typedef std::vector<SeferBilgileriPtr> SeferBilgileriVektoru;
typedef std::vector<SeyahatBilgileriPtr> SeyahatBilgileriVektoru;
typedef std::vector<YolcuBilgileriPtr> YolcuBilgileriVektoru;
typedef std::vector<CalisanBilgileriPtr> CalisanBilgileriVektoru;



#endif //OTOBUSBILGISISTEMII_TANIMLAR_H
