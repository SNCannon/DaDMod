# DaDMod
Arma 3 DaD Mod

Contains the Fulton Recovery System, as well as config edits to other mods to fix errors or inconsistencies.

The Fulton allows you to recover a hostile AI and will add a ticket to your spawn tickets for doing so.
The cargo variant can pick up most vehicles and it adds a briefing file listing what you captured.

COVID Vaccine:
You can vaccinate AI and other players with this item using ACE medical on their arms. You can check how many units have been vaccinated with _var = missionNamespace getVariable "numVaccinated";
This is just a simple counter, so if you need a more complex count, each unit also has a variable set on them called "vaccinated", which is a boolean. This allows you to count only alive units or units of a specific side, for example.
Example: this getVariable ["vaccinated", false];

Complementary Special Weapons:
The FNC, LVOA-C, and CAWS are down from 15 lbs to their correct weight

vz99:
The vz99 mortar is up from 0 lbs to 10 lbs

UAS:
Multiplied the weight of the GRAP rounds by 4

Tanks DLC:
Added stabilization to all the Wiesel (Nyx) variants and gave them UAS mags and more smoke rounds

Known issues:
Do not stand on the unit that you are attaching the Fulton to unless you want to get telefragged by a party balloon.
Some Fulton features fail from time to time, mostly on dedicated servers (eg. the balloon may not pop if it is stuck under a roof).
