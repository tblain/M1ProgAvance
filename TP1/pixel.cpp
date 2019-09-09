#include <iostream>

class Pixel {
  public :
    Pixel(int e1, int e2, int e3) : e1(e1), e2(e2), e3(e3) { }
    Pixel() : e1(0), e2(0), e3(0) { }

    int e1;
    int e2;
    int e3;

    void set_e1(int);

    void set_e2(int);

    void set_e3(int);

    void set(int e1, int e2, int e3);

    int get_e1();

    int get_e2();

    int get_e3();
};

void Pixel::set_e1(int nb) {
    e1 = nb;
}

void Pixel::set_e2(int nb) {
    e2 = nb;
}

void Pixel::set_e3(int nb) {
    e3 = nb;
}

void Pixel::set(int e1, int e2, int e3) {
    e1 = e1;
    e2 = e2;
    e3 = e3;
}

int Pixel::get_e1() {
  return e1;
}

int Pixel::get_e2() {
  return e2;
}

int Pixel::get_e3() {
  return e3;
}

//====================================================

class Image {
  int largeur;
  int hauteur;

  public :
    Image(int, int);

    Pixel *tab;

    void set_pixel(int, int, int, int, int);

    int get_e3();
};

Image::Image(int hauteur, int largeur) {
  hauteur = hauteur;
  largeur = largeur;

  tab = new Pixel[hauteur * largeur];
  for (int i=0; i < hauteur * largeur; i++) {
      tab[i] = Pixel();
  }
}

void Image::set_pixel(int i, int j, int e1, int e2, int e3) {
//std::cout<<i*hauteur + j<<std::endl;
  tab[i].set(10, 10, 10);
  //tab[i].set_e1(10);
  //tab[i].set_e2(10);
  //tab[i].set_e3(10);
}

//====================================================


int main () {
  Pixel p (1, 1, 1);
  std::cout<<p.get_e3()<<std::endl;
  p.set_e3(2);
  std::cout<<p.get_e3()<<std::endl;

  Image im (1000, 1000);

  std::cout<<im.tab[1].get_e3()<<std::endl;

  for (int i=0; i < 1000 * 1000; i++) {

//std::cout<<i<<" "<<j<<" / "<<i * 1000 + j<<std::endl;
      for (int k=0; k < 1000; k++) {
        im.set_pixel(i, i, i, i, k);
      }

  }

  return 0;
}
