gcc -o ../game/src/Aetheria.exe ../game/src/main.c -lncurses
# When not using ncurses use the following command:
# gcc -o Aetheria.o main.c

if [ $? -eq 0 ]; then
    echo "\e[32mBuild Successful!\e[0m"
    sleep 1
    echo "Clearing Terminal"
    sleep 1
    clear
    echo "Running Aetheria..."
    ./../game/src/Aetheria.exe
else
    echo "\e[31mBuild Failed.\e[0m"
    exit 1
fi

# After making any chnages to this file us the following command to the file executable permissions:
# chmod +x ./build_n_run.sh 
