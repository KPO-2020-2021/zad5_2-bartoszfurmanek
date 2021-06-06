#ifndef OBIEKTSCENY_HH
#define OBIEKTSCENY_HH

#include "lacze_do_gnuplota.hh"
#include "BrylaGeometryczna.hh"

/*!
 *\file
 *\brief Definicja klasy Obiekt Sceny.
 */

/*!
 * \brief Rodzaj obiektu sceny definiowanego przez klase.
 *
 *  Wartości tego typu sa identifykatorami mowiacymi jakiego rodzaju
 *  jest obiekt
 */
enum TypObiektuSceny { 
      OB_Zaden              /*! Nie jest to zaden konkretny obiekt */,  
      OB_Dron               /*! obiekt jest dronem */,
      OB_Plaskowyz          /*! obiekt jest plaskowyzem */,
      OB_GoraZGrania        /*! obiekt jest gora z grania */,
      OB_GoraZeSzczytem      /*! obiekt jest gora ze szczytem */
   };

class ObiektSceny{

 private:

 const TypObiektuSceny _TypObiektu;

 protected:

 ObiektSceny(TypObiektuSceny Typ = OB_Zaden):
 _TypObiektu(Typ) {}
 
 public:

 TypObiektuSceny TypObiektu()
 {return _TypObiektu;}

 virtual std::string WezNazweBryly(int NumerBryly)const=0;




};

#endif