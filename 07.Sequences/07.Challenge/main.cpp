/*

  . GUI Challenge: SFML
        . Five challenges to flex your muscles.
              1. Store Multiple Shapes Using Containers
                . Task: Modify the code so that it stores multiple sf::CircleShape objects in an std::vector. 
                The program should initialize the shapes with different radii and positions, and cycle through their colors.
                .  Hint: Use std::vector<sf::CircleShape> to store the shapes.
                .  Objective: Students should get used to working with dynamic containers like std::vector.

              2. Track Key Press History with a Fixed-Size Container
                . Task: Track the last 5 keys pressed by the user and display the history in the console. 
                Use std::array<char, 5> to store the key history.
                . Hint: Use an index to cycle through the array and update it with the new key presses.
                . Objective: Practice with std::array for fixed-size containers and updating data circularly.

              3. Store Color Changes in a Static Array
                . Task: Store a predefined sequence of colors in a built-in array, and cycle through them 
                each time a specific key (e.g., space bar) is pressed to change the shape's fill color.
                . Hint: Use a built-in array like sf::Color colors[4] to store the color sequence and manage the index.
                . Objective: Get familiar with accessing data in built-in arrays and manipulating the shape’s color.

              4. Animate Multiple Shapes with Timers
                . Task: Create multiple shapes (using std::vector or std::array) and move them horizontally across the window at different speeds. Each shape should have its own timer (tracked in a container) to determine when it moves.
                . Hint: Use std::vector<sf::Clock> to store separate timers for each shape and adjust their positions based on elapsed time.
                . Objective: Practice with multiple timers and iterating through containers to update positions.

              5. Resize Shape Array Based on Mouse Clicks
                . Task: Start with a fixed number of shapes stored in std::array or std::vector. Each time the 
                    left mouse button is pressed, add a new shape to the container. When the right mouse button 
                    is pressed, remove the last shape (if any).
                . Hint: Dynamically adjust the size of the container using std::vector and add/remove shapes as needed.
                . Objective: Work with dynamic container resizing, and understand how to manage adding and removing elements in std::vector.
           
*/

#include <fmt/format.h>

import utilities;

int main(){

    it_1::app();

}