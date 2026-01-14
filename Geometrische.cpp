#include "Geometrische.h"
#include <iostream>
#include <math.h>
#define PI 3.14

// Rechteck Bereich

float Rechteck::getbreite()
{
    return breite;
}

float Rechteck::getlaenger()
{
    return laenger;
}

color Rechteck::getfarbe()
{
    return farbe;
}

void Rechteck::setbreite(float b)
{
    breite = b;
}

void Rechteck::setlaenger(float l)
{
    laenger = l;
}
void Rechteck::setfarbe(color fb)
{
    farbe = fb;
}

float Rechteck::flaesche()
{
    return breite * laenger;
}

float Rechteck::umfang()
{
    return 2 * (laenger + breite);
}

Rechteck::Rechteck(float b, float l, color fb)
    : breite(b), laenger(l), farbe(fb) {};

void Rechteck::print()
{
    std::cout << "Die Rechteck hat:" << std::endl
              << "Eine Breite: " << breite << "m" << std::endl
              << "laenger:" << laenger << "m" << std::endl;
    switch (farbe)
    {
    case color::Rot:
        std::cout << "Farbe: Rot\n";
        break;

    case color::GRUEN:
        std::cout << "Farbe: Gruen\n";
        break;

    case color::BLAU:
        std::cout << "Farbe: Blau\n";
        break;
    case color::GELB:
        std::cout << "Farbe: Geld\n";
        break;

    case color::UNDEF:
        std::cout << "Farbe: Undf\n";
        break;
    }
    std::cout << "\n";
}

// Implementierung der Kreis

float Kreis::getradius()
{
    return radius;
}

color Kreis::getfarbe()
{
    return farbe;
}

void Kreis::setradius(float r)
{
    radius = r;
}

void Kreis::setfarbe(color fb)
{
    farbe = fb;
}

float Kreis::flaesche()
{
    return radius * radius * PI;
}

float Kreis::umfang()
{
    return 2 * radius * 3.14;
}

// Deklaration der Konstruktur
Kreis::Kreis(float b, color fb)
    : radius(b), farbe(fb) {};

// Deklaration der print Methode
void Kreis::print()
{
    std::cout << "Die Kreis hat:" << std::endl
              << "Eine radius von:" << radius << "cm" << std::endl;
    switch (farbe)
    {
    case color::Rot:
        std::cout << "Farbe: Rot\n";
        break;

    case color::GRUEN:
        std::cout << "Farbe: Gruen\n";
        break;

    case color::BLAU:
        std::cout << "Farbe: Blau\n";
        break;
    case color::GELB:
        std::cout << "Farbe: Geld\n";
        break;

    case color::UNDEF:
        std::cout << "Farbe: Undf\n";
        break;
    }
    std::cout << "\n";
}

// Dreieck space

float Dreieck::getkantenlaenge1()
{
    return kantenlaenge1;
}

float Dreieck::getkantenlaenge2()
{
    return kantenlaenge2;
}
float Dreieck::getkantenlaenge3()
{
    return kantenlaenge3;
}

color Dreieck::getfarbe()
{
    return farbe;
}

void Dreieck::setkantenlaenge1(float a)
{
    kantenlaenge1 = a;
}
void Dreieck::setkantenlaenge3(float c)
{
    kantenlaenge3 = c;
}

void Dreieck::setkantenlaenge2(float b)
{
    kantenlaenge2 = b;
}
void Dreieck::setfarbe(color fb)
{
    farbe = fb;
}

double Dreieck::flaesche()
{
    float s;
    double A;
    s = (kantenlaenge1 + kantenlaenge2 + kantenlaenge3) / 2;
    A = std::sqrt(s * (s - kantenlaenge1) * (s - kantenlaenge2) * (s - kantenlaenge3));

    return A;
}

float Dreieck::umfang()
{
    return kantenlaenge2 + kantenlaenge1 + kantenlaenge3;
}

Dreieck::Dreieck(float a, float b, float c, color fb)
    : kantenlaenge1(a), kantenlaenge2(b), kantenlaenge3(c), farbe(fb) {};

void Dreieck::print()
{
    std::cout << "Die Dreieck hat" << std::endl
              << "Kantenlaenger1:" << kantenlaenge1 << "m" << std::endl
              << "kantenlaenge2:" << kantenlaenge2 << "m" << std::endl;
    std::cout << "kantenlaenger3:" << kantenlaenge3 << "m" << std::endl;
    switch (farbe)
    {
    case color::Rot:
        std::cout << "Farbe: Rot\n";
        break;

    case color::GRUEN:
        std::cout << "Farbe: Gruen\n";
        break;

    case color::BLAU:
        std::cout << "Farbe: Blau\n";
        break;
    case color::GELB:
        std::cout << "Farbe: Geld\n";
        break;

    case color::UNDEF:
        std::cout << "Farbe: Undf\n";
        break;
    }
    std::cout << "\n";
}

// Deklarierung der abgeleitete Klasse

Quadrat::Quadrat(float a, color fb)
    : Rechteck(a, a, fb) {};

float Quadrat::diagonale()
{
    float d;
    return getlaenger() * std::sqrt(2);
}

void Quadrat::print()
{

    std::cout << "Die Quadrat hat:" << std::endl
              << "Seitenlaenger von:" << getlaenger() << "m"<< std::endl;

    switch (getfarbe())
    {
    case color::Rot:
        std::cout << "Farbe: Rot\n";
        break;

    case color::GRUEN:
        std::cout << "Farbe: Gruen\n";
        break;

    case color::BLAU:
        std::cout << "Farbe: Blau\n";
        break;
    case color::GELB:
        std::cout << "Farbe: Geld\n";
        break;

    case color::UNDEF:
        std::cout << "Farbe: Undf\n";
        break;
    }
    std::cout << "\n";
}

