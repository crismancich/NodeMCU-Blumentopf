# NodeMCU-Blumentopf
Messung der Bodenfeuchtigkeit in einem Blumentopf

Das Programm entstand für einen Workshop im Rahmen der CODEWEEK HAMBURG 2017

![alt text](https://raw.githubusercontent.com/crismancich/NodeMCU-Blumentopf/master/nodemcu_blumentopf.png)

Autoren
Boris Crismancich <boris.crismancich@erminas.de>
Jana Klemp <jana.klemp@erminas.de>
Quelle und Dokumentation: https://github.com/crismancich/NodeMCU-Blumentopf

Das Programm misst ob zwischen zwei Kabeln, die in der Erde stecken,
Strom fließt. Je fuchter die Erde, um so besser leitet sie den Strom.
Fließt der Strom nicht, ist die Erde zu trocken und die LED des NodeMCU
LED wird eingeschaltet.

Benötigt:
* Female-Female Jumper Kabel
* Büroklammern
* NodeMCU ESP8266

Anleitung:
Ein Jumperkabel an D0, ein weisetes an A0. In die Enden der Kabel je eine Büroklammer stecken. 
Die Büroklammern mit den Kabeln dann möglichst weit auseinenader in den Blumentopf stecken. Fertig.

Eine Anleitung, wie man den NodeMCU Treiber Installiert und die Arduino IDE einrichtet, findest du hier:
https://goo.gl/cpiykq
