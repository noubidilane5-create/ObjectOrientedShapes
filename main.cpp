#include"Geometrische.h"
#include<iostream>
#include<math.h>
#define PI 3.14


int main() {

    Rechteck Rechteck1 (2.0f,4.0f,color::GRUEN);
    Kreis kreis1(3.0f, color::GELB);
    Dreieck dreieck1(5.0f, 2.0f, 4.0f , color::Rot);
    Quadrat quadrat1(5.0F,color::Rot);

    Rechteck1.print();
    kreis1.print();
    dreieck1.print();
    quadrat1.print();


    float flaesche_R =Rechteck1.flaesche();
    float umfang_R=Rechteck1.umfang();

    float flaesche_K =kreis1.flaesche();
    float umfang_K=kreis1.umfang();

    double flaesche_D =dreieck1.flaesche();
    float umfang_D=dreieck1.umfang();

    float flaesche_Q =quadrat1.flaesche();
    float umfang_Q=quadrat1.umfang(); 

    std::cout << "Das Quadrat hat folgende Eigenschafte:"<<std::endl<<"Umfang:"<<umfang_Q<<"m"<<std::endl<<"Flaesche:"<<flaesche_Q<<"m"<<std::endl;
    std::cout <<"\n";
    std::cout << "Das Rechteck hat folgende Eigenschafte:"<<std::endl<<"Umfang:"<<umfang_R<<"m"<<std::endl<<"Flaesche:"<<flaesche_R<<"m"<<std::endl;
    std::cout <<"\n";
    std::cout << "Das Dreieck hat folgende Eigenschafte:"<<std::endl<<"Umfang:"<<umfang_D<<"m"<<std::endl<<"Flaesche:"<<flaesche_D<<"m"<<std::endl;
    std::cout <<"\n";
    std::cout << "Das Kreis hat folgende Eigenschafte:"<<std::endl<<"Umfang:"<<umfang_K<<"m"<<std::endl<<"Flaesche:"<<flaesche_K<<"m"<<std::endl;
    return 0 ;


     
}