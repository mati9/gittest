#!/usr/bin/env python
# -*- coding: utf-8 -*-
#obiektowa

class Konto(object):
    def __init__(self, stan=0):
        self.bilans = stan

    def wplata(self, ile):
        self.bilans += ile
        return self.bilans




    def wyplata(self, ile):
        self.bilans -= ile
        return self.bilans

class KontoMinimum(Konto):
    def __init__(self, stan=0, debet=0):
        Konto.__init__(self, stan)
        self.debet= debet

    def wyplata(self, ile):
        if self.bilans - ile < self.debet:
            print"Brak srodkow!"
            return self.bilans
        else:
            return Konto.wyplata(self, ile)





osoba1 = KontoMinimum(100)
osoba2 = KontoMinimum()


ile = int(raw_input("Wpłata 1: "))
print "Stan konta: ", osoba1.wplata(ile)

ile = int(raw_input("Wpłata 2: "))
print "Stan konta: ", osoba2.wplata(ile)


ile = int(raw_input("Wypłata 1: "))
print "Stan konta: ", osoba1.wyplata(ile)

ile = int(raw_input("Wypłata 2: "))
print "Stan konta: ", osoba2.wyplata(ile)

