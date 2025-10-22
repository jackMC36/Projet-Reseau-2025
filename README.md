# Telechargement du depot git
`git clone https://github.com/jackMC36/Projet-Reseau-2025.git`

# Installation et Utilisation de Ghidra

Ghidra est un framework de reverse engineering (réingénierie inverse) développé par la National Security Agency (NSA) des États-Unis. Il est conçu pour aider les analystes en sécurité et les chercheurs à analyser des programmes exécutables afin d'en comprendre le fonctionnement, en particulier dans le cadre de l'analyse de logiciels malveillants ou de vulnérabilités.

## Installation
afin d'installer un pre-build officiel et  multi-platforme de Ghidra, il faut:  
* une installation de [JDK 17 64-bit][jdk]
* Télécharger Ghidra 10.4 (dernière version compatible avec JDK 17)
* Extraire le fichier .zip Ghidra
* Lancer Ghidra: `./ghidraRun` (`ghidraRun.bat` sur Windows)

### Attention
Le TP a été testé sur les machines virtuelles disponibles sur my.isima.fr. Privilégiez ce mode d'exécution afin d'assurer un déroulement fluide du TP.

## Utilisation

Une fois la fenêtre du projet Ghidra lancée, créez un nouveau projet :

1. **File**
2. **New Project**
3. **Next >>** (choisissez **Non-shared project**)
4. Choisissez le nom de votre projet
5. Cliquez sur **Finish**

Une fois le projet créé :

1. **File**
2. **Import File...**
3. Choisissez le fichier exécutable à analyser
4. Sélectionnez les paramètres par défaut proposés par Ghidra
5. Cliquez sur **Executable**
6. Lancez l’analyse avec les options par défaut proposées par Ghidra

Félicitations, vous avez maintenant une analyse détaillée de l'exécutable !

  

