# Building-Escape

A game where you place your i-card in the scanner and a certain amount of weight in desginated areas to escape the Spaceship.

W,A,S,D : Movement keys  <br>
E: Go up  <br>
Q: Go down  <br>
F(Hold): Grab an object  <br>
F(Release): Release the object  <br>
Alt + F4: Exit Game  <br>

![Pilot room](https://user-images.githubusercontent.com/81677957/124648360-cbd2c700-deb4-11eb-846d-7d3ff2b627ba.png)

![Middle room](https://user-images.githubusercontent.com/81677957/124648478-ec9b1c80-deb4-11eb-8a26-3f128146a36a.png)

![Exit room](https://user-images.githubusercontent.com/81677957/124648502-f3c22a80-deb4-11eb-860a-9a48e24b4299.png)


## Walkthrough of the game:
1. In the first room look for the card on the cockpit, grab it(using F key) and place it on the scanner(It will be visible by the green light on the cockpit).
2. In the second room you'll find many boxes and a uniquely coloured tile.
3. Pick up boxes one by one and place it on the tiles. After 3 tiles have been placed, the door should open.
4. In the 3rd room you'll find the unique tile again, just place a single box on it and the massive gate should open.
5. You can walk out of the ship now.
6. Alt+f4 to exit out of the game.


## Steps of creating:
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

Made in Unreal Engine using C++
Part of the Unreal Engine with C++ course on Udemy
