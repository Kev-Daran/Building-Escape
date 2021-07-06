# Building-Escape

A game where you place your i-card in the scanner and a certain amount of weight in desginated areas to escape the Spaceship.

Steps:

1. Made the map using the assets.
2. Made a RotateDoor component and attached it to the small doors.
3. Editted the gamemode to allow me to make changes to the default pawn.
4. Made a Grabber component and attached it to the new DefaultPawn_BP.
5. Made a temporary OpenDoor() function in RotateDoor which opens the door when the game is launched.
6. Made a debug line in Grabber which shows up on screen based on where the player is looking to determine reach.
7. Set up trigger volumes and connected them to the doors.
8. Raycasting so that the game detects when a physics object is in our reach.
9. Set up Physics handle and input Component for grabbing.
10. Implemented Grabbing system.
11. Implemented Door opoening system.
12. Created OpenShutter component for the main door to open upwards.
13. Implemented Door opening system for OpenShutter.


Assets: Spaceship Interior Environment Set by Denys Rutkovskyi in Epic Games Marketplace
