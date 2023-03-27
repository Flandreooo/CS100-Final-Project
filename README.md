 # RPG Text Adventure
 
 > Authors: \<[Adan Gutierrez](https://github.com/SnailRazor)\>
   \<[Zijun Wang](https://github.com/Flandreooo)\>
   \<[Arjun Khanna](https://github.com/ak423)\>
   \<[Gabriel Serrano](https://github.com/MarsCSmajor)\>

## Project Description
 > We are developing a basic RPG text adventure game in C++. We are intrested in this project due to the insight it will give us into how more advanced and popular RPG's operate and especially into how RPG's are developed.
### Input/Output
>The player will respond to prompts by selecting from a written list of possible choices/actiosn. This will be done by inputing the corresponding number on the keyboard to make a selection. Text will then be outputed that causally follows the decision that the player made. This method of prompts and choices is the sole way in which the player will interact with the game. 
### Key Features
> * Save System(NOTE: Currently not implented)
>   * A player will be able to, at an appropriate point in the game, save their progress. Important data will be stored to a text file. When the player restarts the program, they can choose to load a game from this file where they can thenafter resume their progress from where they left off.
> * Character Growth
>   * The players's character(PC) can choose from a selection of classes which will affect the PC's ability to perfom in combat and affect certain choices that they can make while expolring the dungeon. Furthermore, as the PC progresses through the game, they will level up and gain more levels of Experience which will boost the PC's stats per level up.
> * Potion Inventory
>   * The PC will have an inventory of special potions that can help in combat perfomance and even in some non-combat events. Potions come in different levels of intensity which affects how great of a buff the PC recieves. In the case for non-combat events, the potions level will affect the chances of successfully completing the event.
> * Party System & Reputation
>   * Players can recruit non-player characters(NPC's) to their party. They will provide extra combat assistance and the boons that come with their class. Though these NPC's will be able to level up like the player, their max level is limited by their quality. The quality of available recuitable NPC's will be affected by the PC's reputation. The higher the reputation, the better the quality.
>   *Reputation is earned by winning battles in the dungeon. The max reputation of the player can be increased by defeating a boss character at the end of each dungeon stage.

## Class Diagram
![UML-IMAGE](https://github.com/cs100/final-project-null/blob/master/cs100%20uml%20diagram.jpg?raw=true)
>The overall category of classes for the diagram can be split into two sections. The top part of the diagram(GameText, GameMaster, and Dungeon) contains the functions and code needed to actually provide the user interface for the game.
>   * `GameText` contains prompts and appropriate means of interacting with those prompts. The GameMaster and Dungeon classes rely on this class to hold most of their flavor text for them so that they don't become so bloated. Most of the functions within the GameText class are expected to print some sort of menu. 
>   * `Dungeon` contains functions that allow players to interact with enemey's and random events. It holds the achritecure needed to properly reward players, continue the dungeon, or other apporpriate means of interaction. It also keeps track of how many levels have been completed thus far. 
>   * `GameMaster` contains the fucntions which tie all of the classes together so that they work in cohesion to create a gaming experience. When an instance of `GameMaster` is created, it will create instances of the other classes and take in a `Dungeon` object as a parameter. Functions such as 
saveGame() will allow the user to save its progress without starting from the beginning in a file containing information needed to reload its progress. The loadGame() will allow the user to load its progress if progress was saved before exiting the game. goShopping(player) function will perform the task for the user/player to enter the item shop and purchase any essentials such as health potions and other essentials. goToSmith(Player) should indicate the player to go to smith and perform weapon upgrades. The enter functions such as enterDundeon() and enterTown() makes the user enter in one of these locations and interact with NPC's or do tasks.The hirehero(player) is a function that adds a Friendly object to the main_party array.  


>The bottom half of the diagram contains the classes which will interact or be affected by the classes in the top half.
>   * `Player` is the class which the user will be 'controlling'. It has data specific and necessary to the player and not to `Friendly` or `Enemy` objects. This class derives from the `Friendly` class
>   * `Friendly` is a class that will help create friendly NPC's to aid the player in battle. It also holds data specific to class types, leveling progress, and potion usage. This class derives from the `Character` class.  
>   * `Enemy` is a class that will create enemies for the player and Friendlies to fight. It contains data for enemy specific classes and for the difficutly(lvl) of the enemy in particular. The higher the dificulty, the more stronger (lvl), the more hit damage will create for the player. This class derives from the `Character` class.
>   * `Character` is a class that contains all of the functions/data that is shared between players, friendlies, and enemies. This includes things like health points, damage output, and defense points. 

> ## SOLID Principles
> We made sure to include as much of the Single Responsibility rule as possible. 
> * The `GameText` class is solely responsible for proving the text output for prompts, events, and other text based features of this game. It takes in parameters from other classes to apporpriately display the correct and corresponding output. The functions from other classes would call functions from the this class in order to provide context for their actions. Furthermore, this ensures that the functions of other classes are focused on their specific without having to worry about producing a prompt at the same time.
> * Via polymorphism, the `Character` class and its derived classes, `Enemy`, `Friendly`, and `Player`, each have their own specific role without sharing one class for all of these roles. 
>   * `Character` serves as the basis of the derived classes and has no other bearing in the game aside from tying those derived classes together with polymorphism.
>   * `Enemy` is specific only to the sorts of enemies that the player will be fighting. Their functionality does not overlap with the other classes. 
>   * `Friendly` is specific only to the allies that the player can hire. 
>   * `Player` has attributes reserved only for the player
> * The `Dungeon` class only controls events and elements related to the "fighting" portion of the game. 
> 
> The polymorphism that is present in the `Character` and its derived classes, are also an instance of us complying with the Liskov Substiution principle. Each derived class extends `Character` without modifying it. Althought this class won't be used in gameplay, the dynamic between `Friendly` and `Player` perfectly follows this principle. The former will be used to create allies that have similar fucntionality to the player. The latter class creates a special instance of `Friendly` such that the player object has the same fucntionality of friendlies while also having certain functinos and variables that can only be specific to the player and not the player's NPC allies.
 

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > ------------
 > Game Start
 > 
 > ![UML-IMAGE](https://github.com/cs100/final-project-null/blob/master/gameStart.png?raw=true)
 > ------------
 > Town Menu
 > 
 > ![UML-IMAGE](https://github.com/cs100/final-project-null/blob/master/mainMenu.png?raw=true)
 > ------------
 > Battle Screen
 > 
 > ![UML-IMAGE](https://github.com/cs100/final-project-null/blob/master/battlScreen.png?raw=true)
 > ------------
 ## Installation/Usage
 > 1. Clone the repository to an IDE of your choice
 > 2. Ensure that CMake is installed on your machine/IDE
 > 3. From the main directory in the repository, run `cmake . ` in the terminal
 > 4. Then run `make` in the terminal
 > 5. Run the game's executabe with `./bin/runGame`
 > 
 > NOTE: You only need to perfrom steps 3 and 4 once. To run the game again, go straight to step 5.
 ## Testing
>Testing was validated by using `googletest`. Unit tests were created for each function of the classes except for `GameText` as it consists soley of cout statements. The executables for these files can be found in the bin folder once `make` is executed on the terminal. There is one executable for each class as to minimize accidental overlap of test and to reduce the length of the unit test report whenever the executables are run.
>The `Dungeon`, `GameMaster` and `main` classes were simply tested through the output on the console and user input due to their heavy reliance on cout statments
>The `gameRun` executable was run through valgrind. Although there are errors when dealing with vector itertion during the battle function for `Dungeon`, there are no leaks left after the fact.
