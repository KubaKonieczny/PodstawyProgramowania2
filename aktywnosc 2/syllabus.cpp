#include <tabulate/table.hpp>
#include<iostream>
using namespace tabulate;
using namespace std;

#if __cplusplus >= 201703L
#include <variant>
using std::variant;
#else
#include <tabulate/variant_lite.hpp>
using nonstd::variant;
#endif
using Row_t = std::vector<variant<std::string, const char *, Table>>;


int main() {
    Table empty_row;
        empty_row.format().hide_border();

Table big;

big.format().border_color(Color::yellow).font_align(FontAlign::center);

Table syllabus;

    big.add_row({"Cele ksztalcenia dla przedmiotu"});
    //syllabus[0].format().font_align(FontAlign::center);
    big[0].format().font_align(FontAlign::center);

 big[0]
      .format()
      .border_color(Color::green)
      .font_color(Color::cyan)
      .font_style({FontStyle::underline})
      .padding_top(0)
      .padding_bottom(0);


  syllabus.add_row({"C1", "Zapoznanie studentow z podstawowymi cechami obiektowych jezykow programowania"});
  syllabus.add_row({"C2", "Przedstawienie skladni jezyka C++, sposobu definiowania klas, ich atrybutow i metod"});
  syllabus.add_row({"C3", "Zapoznanie z realizacja funkcji polimorficznych, przeciazaniem funkcji i operatorow"});
  syllabus.add_row({"C4", "Przekazanie wiedzy o kontenerach, stosowanych strukturach danych, typowych mechanizmach stosowanych przy implementacji kontenerow w jezyku C++"});
  syllabus.add_row({"C5", "Zapoznanie z mechanizmami obslugi bledow , w tym wyjatkami"});
  syllabus.add_row({"C6", "Przekazanie informacji o szablonach"});
  syllabus.add_row({"C7", "Zapoznanie ze standardowa biblioteka C++"});


 /* syllabus[0].format()
    .padding_top(1)
    .padding_bottom(1)
    .font_align(FontAlign::center)
    .font_style({FontStyle::underline});
   // .font_background_color(Color::red);
*/
    syllabus.column(1).format()
    .font_color(Color::yellow);

     /* syllabus[0][1].format()
    .font_background_color(Color::blue)
    .font_color(Color::white);

*/

big.add_row(Row_t{syllabus});

big[1].format().hide_border_top().padding_top(0);


big.add_row({"Efekty uczenia sie dla przedmiotu"});


Table effects;
effects.add_row({"Kod","Efekty w zakresie","Kierunkowe efekty\n uczenia sie","Metody weryfikacji"});

effects.add_row(Row_t{empty_row});

effects.add_row({"W1","Zna i rozumie podstawowe cechy obiektowych jezykow programowania i potrafi wskazac \n ich realizacje w jezyku C++.","ISI1A_W05","Kolokwium, Egzamin"});
effects.add_row({"W2","Zna sk³adnie jezyka: sposob definiowania klas, atrybutow, metod, zasady przeciazania \n funkcji i operatorow, rozumie pojecie funkcji wirtualnych.","ISI1A_W05","Kolokwium, Egzamin"});
effects.add_row({"W3","Zna i rozumie wzorce konstrukcji kontenerow i iteratorow.","ISI1A_W05","Kolokwium, Egzamin"});
effects.add_row({"W4","Zna i rozumie wzorce konstrukcji kontenerow i iteratorow.","ISI1A_W05","Kolokwium, Egzamin"});

effects.add_row(Row_t{empty_row});

effects.add_row({"U1","Potrafi prawid³owo zaimplementowac klase o ustalonym interfejsie i zakresie\n odpowiedzialnoœci projektujac dodatkowe struktury danych i/lub wykorzystujac gotowe \n komponenty, np..: szablony standardowej biblioteki C++","ISI1A_U07","Aktywnosc na zajeciach,\n Wykonanie cwiczen laboratoryjnych"});
effects.add_row({"U2","Potrafi prawid³owo zaimplementowac klase o ustalonym interfejsie i zakresie\n odpowiedzialnoœci projektujac dodatkowe struktury danych i/lub wykorzystujac gotowe \n komponenty, np..: szablony standardowej biblioteki C++","ISI1A_U07","Aktywnosc na zajeciach,\n Wykonanie cwiczen laboratoryjnych"});
effects.add_row({"U3","Potrafi zaimplementowac wlasne kontenery alokujace pamiec (string, lista, wektor)\n zarowno jako klasy, jak i jako szablony. Potrafi skonstruowac dla nich iteratory","ISI1A_U07","Aktywnosc na zajeciach,\n Wykonanie cwiczen laboratoryjnych"});
effects.add_row({"U4","Potrafi zrealizowac operacje kopiowania zawartosci kontenerow (operator przypisania \n i konstruktor kopiujacy) w tym stosujac mechanizm RTTI.","ISI1A_U07","Aktywnosc na zajeciach,\n Wykonanie cwiczen laboratoryjnych"});
effects.add_row({"U5","Potrafi praktycznie zastosowac mechanizm wyjatkow","ISI1A_U07","Aktywnosc na zajeciach,\n Wykonanie cwiczen laboratoryjnych"});

effects.add_row(Row_t{empty_row});

effects.add_row({"K1","Student jest gotow do rozwiazywania problemow poprzez pozyskanie informacji \n z zasobow internetowych oraz literatury.","ISI1A_K05","Aktywnosc na zajeciach,\n Wykonanie cwiczen laboratoryjnych"});

big.add_row(Row_t{effects});

big[2]
      .format()
      .border_color(Color::green)
      .font_color(Color::cyan)
      .font_style({FontStyle::underline})
      .padding_top(0)
      .padding_bottom(0);


big[3].format().hide_border_top().padding_top(0);

    std::cout << big << std::endl;

return 0;
}
