#ifndef GEOMETRISCHE_H
#define GEOMETRISCHE_H

 enum class color{
    UNDEF , Rot , GRUEN ,GELB , BLAU
};


class Rechteck{
    private:
    float breite;
    float laenger;
    color farbe;

    public:

    float getbreite();
    color getfarbe();
    void  setbreite(float);
    float getlaenger();
    void  setlaenger(float);
    void  setfarbe(color);
   

    Rechteck (float , float , color farbe);

    float flaesche ();
    float umfang ();
    void print ();


};

class Kreis{
    private :
    float radius;
    color farbe;
    
    public:

    float getradius();
    void  setradius(float);
     color getfarbe();
     void  setfarbe(color);
    Kreis (float r ,color fb);
    float flaesche();
    float umfang ();
    void print();


};

class Dreieck{
    private:
    float kantenlaenge1;
    float kantenlaenge2;
    float kantenlaenge3;
    color farbe;

    public: 

    float getkantenlaenge1();
    float getkantenlaenge2();
    float getkantenlaenge3();
     color getfarbe();
     void  setfarbe(color);

    void setkantenlaenge1(float);
    void setkantenlaenge2(float);
    void setkantenlaenge3(float);
    
    Dreieck(float ,float, float,color );
    double flaesche();
    float umfang ();
    void print();

};


class Quadrat:public Rechteck{
    public: 
    float diagonale();
    void print();
    Quadrat(float , color farbe);

};

#endif