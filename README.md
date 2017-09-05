# Arduino GT5 B-Spec grinding tool
Tool to grind B-Spec races in GT5 using an Arduino **with keyboard emulation capabilities**, such as Arduino Leonardo. *This probably won't work with Arduino Uno and many other flavors of Arduino.*

# Design
The code is designed to grind the very first Sunday Cup race (6 laps @ Autumn Ring Mini) with a level 40 Bob driving the a **tarbo'd** [88C-V](http://www.mygranturismo.net/car_sheet.php?id=948), but it can be used to grind any race that takes about *4:40* to complete.
The program completes a race (complete with return to menu to increase game days) in approximately 7 minutes, meaning that doing around 250 races to grind to 500 after grinding to level 40 will take about 30 hours of *unattended* gameplay. Or less 4 days of leaving the console run overnight.

# How to use
- Use a jumper wire to connect **D4 to GND**. This disables the main loop so it doesn't fuck with your computer by sending random keypresses when programming is done.
- (Optional) connect an **LED to D13**, you can jam it in and use the adjacent GND without any wiring.
- Program your board
- Plug into the PS3's **USB port 1**
- Boot up GT5
- Go to your garage and get into the **MINOLTA Toyota 88C-V Race Car '89**
- Make sure it has a **turbo** and about **750 PP**
- Navigate to GT Life -> B-Spec -> Beginner series -> Sunday Cup and put the cursor on the first race
- Remove the jumper wire
- LED blinks to tell the program is starting a loop
- As long as the jumper wire is disconnected, the program will keep doing the race over and over again

# LED states
- Blinks when the program starts a loop (ie. right before selecting the race)
- Turns on when the race starts, stays on until the results screen has passed
- Turns on briefly in the driver stat screen (alert if you want to check progress)
- Blinks at the end of the loop
