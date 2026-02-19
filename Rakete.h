#ifndef RAKETE_H  // "Include Guard" - verhindert Fehler beim Kompilieren
#define RAKETE_H

#include <iostream>
using std::cout;
using std::cin;

struct Triebwerk{
    std::string bezeichnung;//
    double schubkraft;//in N
    double verbrauch;//KG/s
    double masse;//KG
};

struct Kapsel{
    std::string typ;//
    double leermasse;//gewicht ohne crew
    int maxCrew;//Max crewmitglieder
    double hitzeschildZustand;//100 optimal 0-> Tod
    bool hatFallschirm;

};

struct Rumpf{
    std::string material;//
    double leermasse;//gewicht ohne sprit
    double maxTreibstoff;//KG sprit
};

struct Spitze{
    double cwWert;//Cw
    double stirnfläche;//A
    double masse;//KG
    double aerodynamikFaktor;//Luftwiederstand verringern
    bool istAbwerfbar;//im all abwerfen

};

struct Booster{
    double schubkraft;//N
    double gesamtmasse;//inkl Brennstoff
    double brenndauer;//in sec
    bool istAktiv;//Schieben ja oder nein
};

struct Solarpanel{
    std::string modell;
    double masse;//KG
    double Fläche;//m^2
    double wirkungsgrad;//%Effi der Panels
    //Stromlogik
    double WinkelzurSonne;//0°Ideal,90° kein Strom
    bool istAusgefahren;//Beim start eingeklappt
    bool istDefekt;//wenn irgendwie beschädigt
};

struct Batterie{
    double maxKapazität;
    double aktuelleLadung;
    double basisVerbrauch;
};

class Rakete{
    private:
    std::string name;
    Booster zusatz_booster;
    Spitze Raketen_spitze;
    Rumpf Raketen_rumpf;
    Kapsel Kommando_kapsel;
    Triebwerk Haupttriebwerk;
    Solarpanel PanelRechts;
    Solarpanel PanelLinks;
    Batterie Raketen_Batterie;

    double m_ges;
    double F_ges;

    bool Fallschirm_offen;
    bool istgestartet;
    bool booster_abgeworfen;
    bool rumpf_abgeworfen;
    bool spitze_abgeworfen;
    bool triebwerk_abgeworfen;

    public:
    Rakete(std::string name, Booster b, Spitze p, Rumpf r, Kapsel k, Triebwerk t, Solarpanel s, Batterie ba);

    //Aktionen
    void starte();
    void wirf_booster_ab();
    void wirf_rumpf_ab();
    void wirf_spitze_ab();
    void wirf_triebwerk_ab();
    void fahresolarpanelaus();
    void richtePanelzurSonne();
    void berechne_stromverbrauch();
    void weg_zum_mond();
    void mond_phase();
    void zurück_zur_erde();
    void landesequenz();
    //2.Rang Aktionen
    void berechnePhysik();
    //getter
    std::string getStatusBericht();
    //setter

};

#endif