# LED Pattern Matching Game

This project implements a LED pattern matching game using C++ and an Adafruit Circuit Playground board. The game displays a pattern of LED lights, and the player's goal is to match that pattern by pressing buttons on the hardware board.

## Prerequisites

To run this project, you will need the following:

- Adafruit Circuit Playground board
- Adafruit Circuit Playground library
- Arduino IDE or compatible software




# LED Pattern Matching Game Sensory-Memory

This project implements a LED pattern matching game using the Adafruit Circuit Playground board. The game displays a pattern of LED lights, and the player's objective is to match that pattern by pressing the corresponding buttons on the hardware board.

## Installation

1. Connect your Adafruit Circuit Playground board to your computer.
2. Install the Adafruit Circuit Playground library if you haven't already. You can find it in the Arduino Library Manager.
3. Open the `sensory-memory.ino` file in Arduino IDE.
4. Compile and upload the code to your Circuit Playground board.

## How to Play

1. Press the reset button on the Circuit Playground board to start the game.

2. The game will display a sequence of LED lights as a pattern.

3. Pay attention to the pattern and remember it.

4. Once the pattern is displayed, you need to press the buttons corresponding to the LED lights in the correct order to match the pattern.

5. If you press the correct button, the corresponding LED will briefly turn red and a tone will be played.

6. If you press the wrong button or in the wrong order, all LEDs will turn red, an error tone will be played, and the game will end.

7. If you successfully match the entire pattern, all LEDs will turn green, a success tone will be played, and you win the game.

8. Press the reset button to start a new game.

## Inputs

- Left Button: Press this button to indicate the left LED in the pattern.
- Right Button: Press this button to indicate the right LED in the pattern.

## Outputs

- LED Lights: The LED lights on the Circuit Playground board will display the pattern and indicate the game status:
  - White LEDs: These are used for the initial startup sequence.
  - Red LEDs: Indicate a wrong button press or the end of the game.
  - Green LEDs: Indicate a successful match and winning the game.
- Audio Tones: Tones will be played to provide feedback on button presses and game results.
