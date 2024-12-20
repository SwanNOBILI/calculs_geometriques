@echo off

rem Stocke l'argument dans une variable
@echo off
set "ARGUMENT=%~1"
echo Argument: %ARGUMENT%


rem Supprime le dossier build s'il existe
if exist build (
    rmdir /s /q build
)

rem Crée un dossier build
mkdir build
cd build

rem Génère les fichiers Make avec CMake
cmake -G "MinGW Makefiles" .. || (
    echo.
    echo Erreur lors de la génération avec CMake.
    exit /b
)

rem Compile le projet
cmake --build . || (
    echo.
    echo Erreur lors de la compilation du projet.
    exit /b
)

rem Nettoie l'affichage
cls

rem Exécute l'exécutable avec l'argument
bin\MonProjet.exe "%ARGUMENT%"

rem Passe à la ligne
echo.

rem Retourne au dossier racine
cd ..

rem Supprime le dossier build
rmdir /s /q build