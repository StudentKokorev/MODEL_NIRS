
#include "EventAct.hh"
#include "StepAct.hh"

EventAct::EventAct(RunAct *runAct):run(runAct)
{

}

//EventAct::~EventAct()


void EventAct::BeginOfEventAction(const G4Event *anEvent)
{
    EnergyDep1 = 0;
    EnergyDep2 = 0;
    EnergyDep3 = 0;
    EnergyDep4 = 0;
    EnergyDep5 = 0;
    EnergyDep6 = 0;
    EnergyDep7 = 0;
}

void EventAct::EndOfEventAction(const G4Event *anEvent)
{
    //Run* run = static_cast<Run*>(G4RunManager::GetRunManager()->GetNonConstCurrentRun());
    run->AddEvent1(EnergyDep1);
    run->AddEvent2(EnergyDep2);
    run->AddEvent3(EnergyDep3);
    run->AddEvent4(EnergyDep4);
    run->AddEvent5(EnergyDep5);
    run->AddEvent6(EnergyDep6);
    run->AddEvent7(EnergyDep7);
}


void EventAct::AddEnDep1(G4double en1){ EnergyDep1 += en1;}
void EventAct::AddEnDep2(G4double en2){ EnergyDep2 += en2;}
void EventAct::AddEnDep3(G4double en3){ EnergyDep3 += en3;}
void EventAct::AddEnDep4(G4double en4){ EnergyDep4 += en4;}
void EventAct::AddEnDep5(G4double en5){ EnergyDep5 += en5;}
void EventAct::AddEnDep6(G4double en6){ EnergyDep6 += en6;}
void EventAct::AddEnDep7(G4double en7){ EnergyDep7 += en7;}

