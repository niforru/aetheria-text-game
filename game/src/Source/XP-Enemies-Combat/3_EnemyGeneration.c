#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include "XP-Combat.h"
#include "../../Utils/Utils.h"
Enemy enemy;

// have a chance to appear more often
char CommonEnemyList[10][30][30] = {
    // name, desc, type,
    {"Thief", "desc", "Non-Magical Human"},
    {"Cutthroat", "desc", "Non-Magical Human"},
    {"Highwayman", "desc", "Non-Magical Human"},
    {"Slaver", "desc", "Non-Magical Human"},
    {"Wizard's Apprentice", "desc", "Magical Human"},
    {"Cultist", "desc", "Magical Human"},
    {"Rabid Dog", "desc", "Non-Magical Beast"},
    {"Wolf", "desc", "Non-Magical Beast"},
    {"Bear", "desc", "Non-Magical Beast"},
    {"Wild Boar", "desc", "Non-Magical Beast"}};
// This function will generate a random enemy and the enemy's abilities
void generate_enemy()
{
  srand(time(NULL));
  // todo need to add a way to generate enemy based on player level

  // This var will be used to determine which abilities the enemy will have
  int setEnemyAbilities;

  int randomEnemy;
  int enemyGenerated = 0; // 0 false 1 true
  for (int i = 0; i < 9; i++)
  {
    // srand(time(NULL));
    randomEnemy = rand() % 9;
    setEnemyAbilities = rand() % 4;
  }
  char *enemyName = CommonEnemyList[randomEnemy][0];
  char *enemyDesc = CommonEnemyList[randomEnemy][1];
  char *enemyType = CommonEnemyList[randomEnemy][2];

  int randomEnemyResult; // This is the return value from the switch case below.
  /*This switch case takes in the
    random number and evaluates its value,
    depending on the value we generated
    the corresponding enemy*/
  switch (randomEnemy)
  {
  case 0:
    strcpy(enemy.Name, enemyName);
    strcpy(enemy.Type, enemyType);
    generate_random_hero_ability1(enemy.EnemyAbility1.Name, enemy.EnemyAbility1.Description, enemy.EnemyAbility1.Type, enemy.EnemyAbility1.Damage);
    // need time a sec before calling next func() without this program crash
    usleep(550000);
    generate_random_hero_ability2(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);
    // generate_random_hero_ability(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);

    return randomEnemyResult;
    break;
  case 1:
    strcpy(enemy.Name, enemyName);
    strcpy(enemy.Type, enemyType);
    generate_random_hero_ability1(enemy.EnemyAbility1.Name, enemy.EnemyAbility1.Description, enemy.EnemyAbility1.Type, enemy.EnemyAbility1.Damage);
    // need time a sec before calling next func() without this program crash
    usleep(550000);
    generate_random_hero_ability2(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);
    // generate_random_hero_ability(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);

    return randomEnemyResult;
    break;
  case 2:
    strcpy(enemy.Name, enemyName);
    strcpy(enemy.Type, enemyType);
    generate_random_hero_ability1(enemy.EnemyAbility1.Name, enemy.EnemyAbility1.Description, enemy.EnemyAbility1.Type, enemy.EnemyAbility1.Damage);
    // need time a sec before calling next func() without this program crash
    usleep(550000);
    generate_random_hero_ability2(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);
    //
    return randomEnemyResult;
    break;
  case 3:
    strcpy(enemy.Name, enemyName);
    strcpy(enemy.Type, enemyType);
    generate_random_hero_ability1(enemy.EnemyAbility1.Name, enemy.EnemyAbility1.Description, enemy.EnemyAbility1.Type, enemy.EnemyAbility1.Damage);
    // need time a sec before calling next func() without this program crash
    usleep(550000);
    generate_random_hero_ability2(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);
    // generate_random_hero_ability(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);

    return randomEnemyResult;
    break;
  case 4:
    strcpy(enemy.Name, enemyName);
    strcpy(enemy.Type, enemyType);
    generate_random_hero_ability1(enemy.EnemyAbility1.Name, enemy.EnemyAbility1.Description, enemy.EnemyAbility1.Type, enemy.EnemyAbility1.Damage);
    // need time a sec before calling next func() without this program crash
    usleep(550000);
    generate_random_hero_ability2(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);
    // generate_random_hero_ability(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);

    return randomEnemyResult;
    break;
  case 5:
    strcpy(enemy.Name, enemyName);
    strcpy(enemy.Type, enemyType);
    generate_random_hero_ability1(enemy.EnemyAbility1.Name, enemy.EnemyAbility1.Description, enemy.EnemyAbility1.Type, enemy.EnemyAbility1.Damage);
    // need time a sec before calling next func() without this program crash
    usleep(550000);
    generate_random_hero_ability2(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);
    // generate_random_hero_ability(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);

    return randomEnemyResult;
    break;
  case 6:
    strcpy(enemy.Name, enemyName);
    strcpy(enemy.Type, enemyType);
    generate_random_hero_ability1(enemy.EnemyAbility1.Name, enemy.EnemyAbility1.Description, enemy.EnemyAbility1.Type, enemy.EnemyAbility1.Damage);
    // need time a sec before calling next func() without this program crash
    usleep(550000);
    generate_random_hero_ability2(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);
    // generate_random_hero_ability(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);

    return randomEnemyResult;
    break;
  case 7:
    strcpy(enemy.Name, enemyName);
    strcpy(enemy.Type, enemyType);
    generate_random_hero_ability1(enemy.EnemyAbility1.Name, enemy.EnemyAbility1.Description, enemy.EnemyAbility1.Type, enemy.EnemyAbility1.Damage);
    // need time a sec before calling next func() without this program crash
    usleep(550000);
    generate_random_hero_ability2(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);
    // generate_random_hero_ability(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);

    return randomEnemyResult;
    break;
  case 8:
    strcpy(enemy.Name, enemyName);
    strcpy(enemy.Type, enemyType);
    generate_random_hero_ability1(enemy.EnemyAbility1.Name, enemy.EnemyAbility1.Description, enemy.EnemyAbility1.Type, enemy.EnemyAbility1.Damage);
    // need time a sec before calling next func() without this program crash
    usleep(550000);
    generate_random_hero_ability2(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);
    // generate_random_hero_ability(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);

    return randomEnemyResult;
    break;
  case 9:
    strcpy(enemy.Name, enemyName);
    strcpy(enemy.Type, enemyType);
    generate_random_hero_ability1(enemy.EnemyAbility1.Name, enemy.EnemyAbility1.Description, enemy.EnemyAbility1.Type, enemy.EnemyAbility1.Damage);
    // need time a sec before calling next func() without this program crash
    usleep(550000);
    generate_random_hero_ability2(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);
    // generate_random_hero_ability(enemy.EnemyAbility2.Name, enemy.EnemyAbility2.Description, enemy.EnemyAbility2.Type, enemy.EnemyAbility2.Damage);

    return randomEnemyResult;
    break;
  }
}

//==================================================================================//
// this function will generate a random ability for the enemy. need to call the func 4 times to generate 4 abilities
// This function will generate the enemy's dmg based on the heros level
/*I know what you may be thinking seeing multiple repeat functions...
Trust me by the time I got here it was too far gone. Spent hours
backtracking and was like....Fuck it Just let it be....*/
void generate_random_hero_ability1(char *AbilityName, char *AbilityDesc, char *AbilityType, int *AbilityDmg)
{
  static int srand_flag = 0;

  if (!srand_flag)
  {
    srand(time(NULL));
    srand_flag = 1;
  }
  // if the enemy is a non magical human then it will have a different set of abilities
  if (strcmp(enemy.Type, "Non-Magical Human") == 0)
  {
    char EnemyAbilities[15][30][30] = {
        // ability name, ability desc, ability type, base dmg
        {"Backstab", "ability desc", "Physical", "10"},
        {"Slash", "ability desc", "Physical", "12"},
        {"Charge", "ability desc", "Physical", "12"},
        {"Stab", "ability desc", "Physical", "8"},
        {"Thunderous Strike", "ability desc", "Physical", "15"},
        {"Hammer Slam", "ability desc", "Physical", "14"},
        {"Whirlwind Strike", "ability desc", "Physical", "12"},
        {"Cleave", "ability desc", "Physical", "7"},
        {"Crushing Blow", "ability desc", "Physical", "16"},
        {"Sweeping Kick", "ability desc", "Physical", "16"},
        // Add more abilities as needed
    };

    int previousRandomAbility = -1; // Initialize to a value not in the range [0, 4]
    for (int j = 0; j < 10; j++)
    {
      int randomAbility;
      do
      {
        randomAbility = rand() % 10;
      } while (randomAbility == previousRandomAbility);

      previousRandomAbility = randomAbility;
      char *enemyAbilityName = EnemyAbilities[randomAbility][0];
      char *enemyAbilityDesc = EnemyAbilities[randomAbility][1];
      char *enemyAbilityType = EnemyAbilities[randomAbility][2];
      int *AbilityDamage = atoi(EnemyAbilities[randomAbility][3]);
      enemy.EnemyAbility1.Damage = AbilityDamage;
      calculate_new_enemy_ability_dmg1(&enemy.EnemyAbility1.Damage, hero.Level);

      switch (randomAbility)
      {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        strcpy(AbilityName, enemyAbilityName);
        strcpy(AbilityDesc, enemyAbilityDesc);
        strcpy(AbilityType, enemyAbilityType);
        return;
      }
    }
  }

  // if the enemy is a magical human then it will have a different set of abilities
  else if (strcmp(enemy.Type, "Magical Human") == 0)
  {
    char EnemyAbilities[15][30][30] = {
        // ability name, ability desc, ability type
        {"Fireball", "ability desc", "Fire", "6"},
        {"Icebolt", "ability desc", "Frost", "7"},
        {"Lightning Bolt", "ability desc", "Lighting", "10"},
        {"Slash", "ability desc", "Physical", "7"},
        {"Dark Blast", "ability desc", "Dark", "16"},
        {"Poison Sting", "ability desc", "Poison", "7"},
        {"Earthquake", "ability desc", "Earth", "7"},
        {"Aqua Splash", "ability desc", "Water", "9"},
        {"Wind Cutter", "ability desc", "Wind", "15"},
        {"Thunderstorm", "ability desc", "Lightning", "18"},
        // Add more abilities as needed
    };

    int previousRandomAbility = -1; // Initialize to a value not in the range [0, 4]
    for (int j = 0; j < 10; j++)
    {
      int randomAbility;
      do
      {
        randomAbility = rand() % 10;
      } while (randomAbility == previousRandomAbility);

      previousRandomAbility = randomAbility;
      char *enemyAbilityName = EnemyAbilities[randomAbility][0];
      char *enemyAbilityDesc = EnemyAbilities[randomAbility][1];
      char *enemyAbilityType = EnemyAbilities[randomAbility][2];
      int *AbilityDamage = atoi(EnemyAbilities[randomAbility][3]);
      enemy.EnemyAbility1.Damage = AbilityDamage;
      calculate_new_enemy_ability_dmg1(&enemy.EnemyAbility1.Damage, hero.Level);

      switch (randomAbility)
      {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        strcpy(AbilityName, enemyAbilityName);
        strcpy(AbilityDesc, enemyAbilityDesc);
        strcpy(AbilityType, enemyAbilityType);
        return;
      }
    }
  }
  // if the enemy is a non magical beast then it will have a different set of abilities
  else if (strcmp(enemy.Type, "Non-Magical Beast") == 0)
  {
    char EnemyAbilities[15][30][30] = {
        // ability name, ability desc, ability type
        {"Bite", "ability desc", "Physical", "10"},
        {"Slash", "ability desc", "Physical", "5"},
        {"Charge", "ability desc", "Physical", "5"},
        {"Lacerate", "ability desc", "Physical", "7"},
        {"Pounce", "ability desc", "Physical", "14"},
        {"Venomous Strike", "ability desc", "Physical", "3"},
        {"Thunderous Roar", "ability desc", "Physical", "5"},
        {"Swift Claw", "ability desc", "Physical", "9"},
        {"Tail Swipe", "ability desc", "Physical", "17"},
        {"Frostbite", "ability desc", "Physical", "13"},
        // Add more abilities as needed
    };
    int previousRandomAbility = -1; // Initialize to a value not in the range [0, 4]
    for (int j = 0; j < 10; j++)
    {
      int randomAbility;
      do
      {
        randomAbility = rand() % 10;
      } while (randomAbility == previousRandomAbility);

      previousRandomAbility = randomAbility;
      char *enemyAbilityName = EnemyAbilities[randomAbility][0];
      char *enemyAbilityDesc = EnemyAbilities[randomAbility][1];
      char *enemyAbilityType = EnemyAbilities[randomAbility][2];
      int *AbilityDamage = atoi(EnemyAbilities[randomAbility][3]);
      enemy.EnemyAbility1.Damage = AbilityDamage;
      calculate_new_enemy_ability_dmg1(&enemy.EnemyAbility1.Damage, hero.Level);

      switch (randomAbility)
      {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        strcpy(AbilityName, enemyAbilityName);
        strcpy(AbilityDesc, enemyAbilityDesc);
        strcpy(AbilityType, enemyAbilityType);
        return;
      }
    }
  }
}
//==================================================================================//
// This function will generate the enemy's dmg based on the heros level
/*I know what you may be thinking seeing multiple repeat functions...
Trust me by the time I got here it was too far gone. Spent hours
backtracking and was like....Fuck it Just let it be....*/
void generate_random_hero_ability2(char *AbilityName, char *AbilityDesc, char *AbilityType, int *AbilityDmg)
{
  static int srand_flag = 0;

  if (!srand_flag)
  {
    srand(time(NULL));
    srand_flag = 1;
  }
  // if the enemy is a non magical human then it will have a different set of abilities
  if (strcmp(enemy.Type, "Non-Magical Human") == 0)
  {
    char EnemyAbilities[15][30][30] = {
        // ability name, ability desc, ability type, base dmg
        {"Backstab", "ability desc", "Physical", "10"},
        {"Slash", "ability desc", "Physical", "12"},
        {"Charge", "ability desc", "Physical", "12"},
        {"Stab", "ability desc", "Physical", "8"},
        {"Thunderous Strike", "ability desc", "Physical", "15"},
        {"Hammer Slam", "ability desc", "Physical", "14"},
        {"Whirlwind Strike", "ability desc", "Physical", "12"},
        {"Cleave", "ability desc", "Physical", "7"},
        {"Crushing Blow", "ability desc", "Physical", "16"},
        {"Sweeping Kick", "ability desc", "Physical", "16"},
        // Add more abilities as needed
    };

    int previousRandomAbility = -1; // Initialize to a value not in the range [0, 4]
    for (int j = 0; j < 10; j++)
    {
      int randomAbility;
      do
      {
        randomAbility = rand() % 10;
      } while (randomAbility == previousRandomAbility);

      previousRandomAbility = randomAbility;
      char *enemyAbilityName = EnemyAbilities[randomAbility][0];
      char *enemyAbilityDesc = EnemyAbilities[randomAbility][1];
      char *enemyAbilityType = EnemyAbilities[randomAbility][2];
      int *AbilityDamage = atoi(EnemyAbilities[randomAbility][3]);
      enemy.EnemyAbility2.Damage = AbilityDamage;
      calculate_new_enemy_ability_dmg2(&enemy.EnemyAbility2.Damage, hero.Level);

      switch (randomAbility)
      {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        strcpy(AbilityName, enemyAbilityName);
        strcpy(AbilityDesc, enemyAbilityDesc);
        strcpy(AbilityType, enemyAbilityType);
        return;
      }
    }
  }

  // if the enemy is a magical human then it will have a different set of abilities
  else if (strcmp(enemy.Type, "Magical Human") == 0)
  {
    char EnemyAbilities[15][30][30] = {
        // ability name, ability desc, ability type
        {"Fireball", "ability desc", "Fire", "6"},
        {"Icebolt", "ability desc", "Frost", "7"},
        {"Lightning Bolt", "ability desc", "Lighting", "10"},
        {"Slash", "ability desc", "Physical", "7"},
        {"Dark Blast", "ability desc", "Dark", "16"},
        {"Poison Sting", "ability desc", "Poison", "7"},
        {"Earthquake", "ability desc", "Earth", "7"},
        {"Aqua Splash", "ability desc", "Water", "9"},
        {"Wind Cutter", "ability desc", "Wind", "15"},
        {"Thunderstorm", "ability desc", "Lightning", "18"},
        // Add more abilities as needed
    };

    int previousRandomAbility = -1; // Initialize to a value not in the range [0, 4]
    for (int j = 0; j < 10; j++)
    {
      int randomAbility;
      do
      {
        randomAbility = rand() % 10;
      } while (randomAbility == previousRandomAbility);

      previousRandomAbility = randomAbility;
      char *enemyAbilityName = EnemyAbilities[randomAbility][0];
      char *enemyAbilityDesc = EnemyAbilities[randomAbility][1];
      char *enemyAbilityType = EnemyAbilities[randomAbility][2];
      int *AbilityDamage = atoi(EnemyAbilities[randomAbility][3]);
      enemy.EnemyAbility2.Damage = AbilityDamage;
      calculate_new_enemy_ability_dmg2(&enemy.EnemyAbility2.Damage, hero.Level);

      switch (randomAbility)
      {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        strcpy(AbilityName, enemyAbilityName);
        strcpy(AbilityDesc, enemyAbilityDesc);
        strcpy(AbilityType, enemyAbilityType);
        return;
      }
    }
  }
  // if the enemy is a non magical beast then it will have a different set of abilities
  else if (strcmp(enemy.Type, "Non-Magical Beast") == 0)
  {
    char EnemyAbilities[15][30][30] = {
        // ability name, ability desc, ability type
        {"Bite", "ability desc", "Physical", "10"},
        {"Slash", "ability desc", "Physical", "5"},
        {"Charge", "ability desc", "Physical", "5"},
        {"Lacerate", "ability desc", "Physical", "7"},
        {"Pounce", "ability desc", "Physical", "14"},
        {"Venomous Strike", "ability desc", "Physical", "3"},
        {"Thunderous Roar", "ability desc", "Physical", "5"},
        {"Swift Claw", "ability desc", "Physical", "9"},
        {"Tail Swipe", "ability desc", "Physical", "17"},
        {"Frostbite", "ability desc", "Physical", "13"},
        // Add more abilities as needed
    };
    int previousRandomAbility = -1; // Initialize to a value not in the range [0, 4]
    for (int j = 0; j < 10; j++)
    {
      int randomAbility;
      do
      {
        randomAbility = rand() % 10;
      } while (randomAbility == previousRandomAbility);

      previousRandomAbility = randomAbility;
      char *enemyAbilityName = EnemyAbilities[randomAbility][0];
      char *enemyAbilityDesc = EnemyAbilities[randomAbility][1];
      char *enemyAbilityType = EnemyAbilities[randomAbility][2];
      int *AbilityDamage = atoi(EnemyAbilities[randomAbility][3]);
      enemy.EnemyAbility2.Damage = AbilityDamage;
      calculate_new_enemy_ability_dmg2(&enemy.EnemyAbility2.Damage, hero.Level);

      switch (randomAbility)
      {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        strcpy(AbilityName, enemyAbilityName);
        strcpy(AbilityDesc, enemyAbilityDesc);
        strcpy(AbilityType, enemyAbilityType);
        return;
      }
    }
  }
}

//==================================================================================//
// This function will generate the enemy's dmg based on the heros level
/*I know what you may be thinking seeing multiple repeat functions...
Trust me by the time I got here it was too far gone. Spent hours
backtracking and was like....Fuck it Just let it be....*/
int calculate_new_enemy_ability_dmg1(int *EnemyAbilityDamage, int heroLevel)
{
  int EnemyAbilityDmgModifier;
  if (heroLevel <= 3)
  {
    EnemyAbilityDmgModifier = 1;
  }
  else if (heroLevel > 3 && heroLevel <= 6)
  {
    EnemyAbilityDmgModifier = 2;
  }
  else if (heroLevel > 6 && heroLevel <= 9)
  {
    EnemyAbilityDmgModifier = 3;
  }
  else if (heroLevel > 9 && heroLevel <= 12)
  {
    EnemyAbilityDmgModifier = 4;
  }
  else if (heroLevel > 12 && heroLevel <= 15)
  {
    EnemyAbilityDmgModifier = 5;
  }
  else if (heroLevel > 15 && heroLevel <= 18)
  {
    EnemyAbilityDmgModifier = 6;
  }
  else if (heroLevel > 18 && heroLevel <= 21)
  {
    EnemyAbilityDmgModifier = 7;
  }
  else if (heroLevel > 21 && heroLevel <= 24)
  {
    EnemyAbilityDmgModifier = 8;
  }

  int newEnemyAbility1Dmg = *EnemyAbilityDamage * EnemyAbilityDmgModifier;

  *EnemyAbilityDamage = newEnemyAbility1Dmg;
  printf("Enemy ability 1 dmg with modifier: %d\n", *EnemyAbilityDamage);

  return 0;
}
//==================================================================================//
/*I know what you may be thinking seeing multiple repeat functions...
Trust me by the time I got here it was too far gone. Spent hours
backtracking and was like....Fuck it Just let it be....*/
int calculate_new_enemy_ability_dmg2(int *EnemyAbilityDamage, int heroLevel)
{
  int EnemyAbilityDmgModifier;
  if (heroLevel <= 3)
  {
    EnemyAbilityDmgModifier = 1;
  }
  else if (heroLevel > 3 && heroLevel <= 6)
  {
    EnemyAbilityDmgModifier = 2;
  }
  else if (heroLevel > 6 && heroLevel <= 9)
  {
    EnemyAbilityDmgModifier = 3;
  }
  else if (heroLevel > 9 && heroLevel <= 12)
  {
    EnemyAbilityDmgModifier = 4;
  }
  else if (heroLevel > 12 && heroLevel <= 15)
  {
    EnemyAbilityDmgModifier = 5;
  }
  else if (heroLevel > 15 && heroLevel <= 18)
  {
    EnemyAbilityDmgModifier = 6;
  }
  else if (heroLevel > 18 && heroLevel <= 21)
  {
    EnemyAbilityDmgModifier = 7;
  }
  else if (heroLevel > 21 && heroLevel <= 24)
  {
    EnemyAbilityDmgModifier = 8;
  }

  int newEnemyAbility1Dmg = *EnemyAbilityDamage * EnemyAbilityDmgModifier;

  *EnemyAbilityDamage = newEnemyAbility1Dmg;
  printf("Enemy ability 2 dmg with modifier: %d\n", *EnemyAbilityDamage);

  return 0;
}
