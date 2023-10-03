#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "./Macros.h"
#include "./Prototypes.h"
#include "./Globals.h"
#include "./Notepad.c"
#include "../Source/HeroCreation.c"

char commands[15][100] = {
"start"
"/info"
"/exit"
"/quit"
"/restart"
"/commands"
"/game"
"/clear"
"/nw"
"/nr"
"/nc"};

char command_descriptions[15][100] = {
"Shows all hero info\n",
"Exit the program\n",
"Exit the program\n",
"Restart the program\n",
"Lists all available commands\n",
"Logs info about the game\n",
"Clears the terminal\n",
"Opens the notepad and allows the user to make an entry\n",
"Opens the notepad and allows the user to read all entries\n",
"Clears all entries from the notepad\n"};

int COMMAND_LINE(FILE *logFile){
  char input[MAX_INPUT_LENGTH];
  while (1)
  {
    // Prompt the user for input
    printf("Enter an in game command: ");
    if (fgets(input, sizeof(input), stdin) == NULL)
    {
      // Handle input error
      perror("fgets");
      exit(1);
    }
    // Remove the newline character from the input
    input[strcspn(input, "\n")] = '\0';

    if(strcmp(input, "start") == 0){
      logMessage(logFile, "Program started.");
      char titleArt[] =
      "  ______               __      __                            __ \n"                
      " /      \             /  |    /  |                          /  |\n"                
      "/$$$$$$  |  ______   _$$ |_   $$ |____    ______    ______  $$/   ______\n"        
      "$$ |__$$ | /      \ / $$   |  $$      \  /      \  /      \ /  | /      \ \n"     
      "$$    $$ |/$$$$$$  |$$$$$$/   $$$$$$$  |/$$$$$$  |/$$$$$$  |$$ | $$$$$$  |\n"  
      "$$$$$$$$ |$$    $$ |  $$ | __ $$ |  $$ |$$    $$ |$$ |  $$/ $$ | /    $$ |\n"
      "$$ |  $$ |$$$$$$$$/   $$ |/  |$$ |  $$ |$$$$$$$$/ $$ |      $$ |/$$$$$$$ |\n"
      "$$ |  $$ |$$       |  $$  $$/ $$ |  $$ |$$       |$$ |      $$ |$$    $$ |\n"
      "$$/   $$/  $$$$$$$/    $$$$/  $$/   $$/  $$$$$$$/ $$/       $$/  $$$$$$$/\n";
      printf("%s\n", titleArt);
      // TODO Read introduction then do hero creation
      startHeroCreation(); // this is a function from Hero/Source/Creation.c STARTS THE PROGRAM
      setStatsPointsAbilities();

    }
    else if(IS_RESTART_COMMAND(input)){
    // Check if the input is "restart
      char restartConfirmation[10];
      // Log a restart message
      logMessage(logFile, "Restarting Program.");
      printf("\x1b[31mRequesting to restart program... \x1b[0m\n");
      printf("\x1b[31mAre you sure you want to restart? (y/n): \x1b[0m\n");
      fgets(restartConfirmation, sizeof(restartConfirmation), stdin);
      REMOVE_NEWLINE_CHARACTER(restartConfirmation);
      if(IS_YES(restartConfirmation)){
        printf("Restarting...\n");
        if (execv("./a.out", NULL) == -1)
        {
          perror("execv");
          exit(1);
        }
      } 
      else if(IS_NO(restartConfirmation)){
        printf("Restart canceled.\n");
        COMMAND_LINE(logFile);
      }
      else{
        printf("Invalid input.\n");
        COMMAND_LINE(logFile);
      }
    }
    else if(IS_INFO_COMMAND(input)){
      logMessage(logFile, "Requested hero information.\n");
      char heroInfoArt[1000] =
      ".##.....##.########.########...#######.....####.##....##.########.#######. \n"
      ".##.....##.##.......##.....##.##.....##.....##..###...##.##......##.....## \n"
      ".##.....##.##.......##.....##.##.....##.....##..####..##.##......##.....## \n"
      ".#########.######...########..##.....##.....##..##.##.##.######..##.....## \n"
      ".##.....##.##.......##...##...##.....##.....##..##..####.##......##.....## \n"
      ".##.....##.##.......##....##..##.....##.....##..##...###.##......##.....## \n"
      ".##.....##.########.##.....##..#######.....####.##....##.##.......#######. \n";
      printf("\x1b[32m%s\x1b[0m\n", heroInfoArt);
      printf("============================================================================\n");
      printf("%-15s | %-15s | %-15s | %-15s \n", "First Name", "Dynasty Name", "Gender", "Country of Origin");
      printf("%-15s | %-15s | %-15s | %-15s \n", hero_first_name, hero_dynasty_name, hero_gender, hero_homeland);
      printf("----------------------------------------------------------------------------\n");
      printf("%-15s | %-15s | %-15s | %-15s | %-15s \n", "Profession", "Class", "Level", "Health", "Mana");
      printf("%-15s | %-15s | %-15d | %-15d | %-15d \n", hero_profession, hero_class, hero_level, hero_health, hero_mana);
      printf("----------------------------------------------------------------------------\n");
      printf("%-15s | %-15s | %-15s | %-15s \n", "Strength", "Dexterity", "Intelligence", "Luck");
      printf("%-15d | %-15d | %-15d | %-15d \n", hero_strength, hero_dexterity, hero_intelligence, hero_luck);
      printf("----------------------------------------------------------------------------\n");
      printf("%-15s | %-15s | %-15s \n", "Ability 1", "Ability 2", "Ability 3"); 
      printf("%-15s | %-15s | %-15s \n", hero_ability1, hero_ability2, hero_ability3);
      printf("============================================================================\n");                                 
    }

    else if(IS_COMMANDS_COMMAND(input)){
      logMessage(logFile, "Requested in game commands.\n");
      char commands_art[1000] =
      "..######...#######..##.....##.##.....##....###....##....##.########...######.\n"
      ".##....##.##.....##.###...###.###...###...##.##...###...##.##.....##.##....##\n"
      ".##.......##.....##.####.####.####.####..##...##..####..##.##.....##.##......\n"
      ".##.......##.....##.##.###.##.##.###.##.##.....##.##.##.##.##.....##..######.\n"
      ".##.......##.....##.##.....##.##.....##.#########.##..####.##.....##.......##\n"
      ".##....##.##.....##.##.....##.##.....##.##.....##.##...###.##.....##.##....##\n"
      "..######...#######..##.....##.##.....##.##.....##.##....##.########...######.\n";
      printf("\x1b[32m%s\x1b[0m\n", commands_art);
      printf("=============================================================================\n");
      printf("%-10s | %-30s \n", "Command", "Description");
      printf("----------------------------------------------------------------------------\n");
      printf("%-10s | %-30s \n", "start", "Start the program");
      printf("%-10s | %-30s \n", "/info", "Shows all hero info");
      printf("%-10s | %-30s \n", "/exit", "Exit the program");
      printf("%-10s | %-30s \n", "/quit", "Exit the program");
      printf("%-10s | %-30s \n", "/restart", "Restart the program");
      printf("%-10s | %-30s \n", "/commands", "Lists all available commands");
      printf("%-10s | %-30s \n", "/game", "Logs info about the game");
      printf("%-10s | %-30s \n", "/clear", "Clears the terminal");
      printf("%-10s | %-30s \n", "/nw", "Opens the notepad and allows the user to make an entry");
      printf("%-10s | %-30s \n", "/nr", "Opens the notepad and allows the user to read all entries");
      printf("%-10s | %-30s \n", "/nc", "Clears all entries from the notepad");
      printf("=============================================================================\n");
    }

    else if(IS_GAME_COMMAND(input)){
      printf("\x1b[32mGAME INFORMATION: \x1b[0m\n");
      printf("Game Version: %f\n", GAME_VERSION);
      printf("Game Author: Marshall Burns\n" );
    }
    else if(IS_EXIT_COMMAND(input)){
      char exitConfirmation[10];
      printf("\x1b[31mRequesting to exit program... \x1b[0m\n");
      printf("\x1b[31mAre you sure you want to exit? (y/n): \x1b[0m\n");
      fgets(exitConfirmation, sizeof(exitConfirmation), stdin);
      REMOVE_NEWLINE_CHARACTER(exitConfirmation);
      if (IS_YES(exitConfirmation))
      {
        printf("Exiting...\n");
        logMessage(logFile, "Exited Program.");
        exit(0);
      }
      else if(IS_NO(exitConfirmation)){
        printf("Exit canceled.\n");
        COMMAND_LINE(logFile);
      }
      else{
        printf("Invalid input.\n");
        COMMAND_LINE(logFile);
      }
    }
    else if(IS_CLEAR_COMMAND(input)){
      char clearConfirmation[10];
      printf("\x1b[31mRequesting to clear terminal...\x1b[0m\n");
      sleep(1);
      printf("\x1b[31mThis can potentially be a destructive decision. Are you sure you'd like to continue?(y/n)\x1b[0m\n");
      fgets(clearConfirmation, sizeof(clearConfirmation), stdin);
      REMOVE_NEWLINE_CHARACTER(clearConfirmation);
      if(IS_YES(clearConfirmation)){
        printf("Clearing terminal...\n");
        system("clear");
      }
      else if(IS_NO(clearConfirmation)){
        printf("Clear canceled.\n");
      }
      else{
        printf("Invalid input.\n");
        COMMAND_LINE(logFile);
      }
    }

    else if(IS_WRITE_NOTE_COMMAND(input)){
      createNote();    
    }

    else if(IS_READ_NOTES_COMMAND(input)){
      readNotes();
    }

    else if(IS_CLEAR_NOTES_COMMAND(input)){
      char clearNotesConfirmation[10];
      printf("\x1b[31mRequesting to clear notepad...\x1b[0m\n");
      sleep(1);
      printf("\x1b[31mOnce you clear your notepad you will be unable see past notes. Are you sure you'd like to continue?(y/n)\x1b[0m\n");
      fgets(clearNotesConfirmation, sizeof(clearNotesConfirmation), stdin);
      REMOVE_NEWLINE_CHARACTER(clearNotesConfirmation);
      if(IS_YES(clearNotesConfirmation)){
        printf("Clearing notes...\n");
        clearNotes();
      }
      else if(IS_NO(clearNotesConfirmation)){
        printf("Clear canceled.\n");
      }
      else{
        printf("Invalid input.\n");
      }
    }

    else
    {
      printf("Invalid command.\n");
    }
  }
  return 0;
}