#  TP1 : Définition des Classes  
### Cours : Programmation Orientée Objet – C++

---

##  Objectif pédagogique
Ce TP a pour but de **consolider la compréhension des bases de la POO en C++**, notamment :
- la **déclaration de classes**,
- la **définition des méthodes**,
- les **modificateurs d’accès** (`private`, `public`),
- la **création et manipulation d’objets**.

---

## Exercice 1 : Gestion de Compte Bancaire Simple

###  Énoncé
Créer une classe `CompteBancaire` qui modélise un compte bancaire basique.

###  Spécifications
- **Attributs privés :**
  - `titulaire` : nom du titulaire (`std::string`)
  - `solde` : montant disponible (`double`)
- **Méthodes publiques :**
  - `void definirTitulaire(std::string nom)`
  - `void depot(double montant)`
  - `void retrait(double montant)`
  - `void afficher()`

Le retrait doit vérifier que le solde est suffisant avant d’effectuer l’opération.

---

## Exemple d’exécution (texte)

```bash
Titulaire : Mohamed Lachgar
Solde après dépôt : 500.0
Solde après retrait : 300.0
```

## Exemple d’exécution (image)

Voici un exemple de l'exécution du programme (screenshot) :

![Exécution du programme](execution.PNG)


##  Exercice 2 – Gestion d’un Catalogue de Livres  

###  Objectif pédagogique  
Renforcer la maîtrise de la **déclaration de classes**, de **l'encapsulation**, des **méthodes d'accès**, et de la **création d’objets** en **C++** à travers un exemple concret du monde réel.  

---

### Énoncé  
Créer une classe `Livre` pour représenter un ouvrage dans un **catalogue de bibliothèque**.  

#### La classe doit contenir :
- un attribut privé `titre` (de type `std::string`)  
- un attribut privé `auteur` (de type `std::string`)  
- un attribut privé `anneePublication` (de type `int`)  

#### Les méthodes publiques suivantes sont requises :
- `void definirLivre(std::string t, std::string a, int annee)` : permet d’initialiser les informations d’un livre  
- `void afficher()` : affiche les informations du livre dans une ligne claire et lisible  
- `int getAnneePublication()` : retourne l’année de publication  


---

##  Exemple d’exécution (texte)

```bash
Titre : Le C++ Moderne, Auteur : Bjarne Stroustrup, Année : 2013
Titre : Programmation Orientée Objet, Auteur : Jean Dupont, Année : 2020
```

## Exemple d’exécution (image)

Voici un exemple de l'exécution du programme (screenshot) :

![Exécution du programme](execution.PNG)


#  TP2 : Encapsulation  
---

##  Objectif pédagogique
Ce TP a pour but de **maîtriser l'encapsulation** en C++, c’est-à-dire :  
- protéger les données privées (`private`)  
- utiliser des **getters et setters** pour accéder et modifier ces données  
- créer des **méthodes publiques** pour manipuler les objets de manière sécurisée  

---

#  Exercice 1 : Gestion d’un étudiant

###  Énoncé
Créer une classe `Etudiant` qui représente un étudiant avec les informations suivantes :  
- `nom` (string)  
- `cin` (string)  
- `note1`, `note2`, `note3` (float, sur 20)  

Les données doivent être **encapsulées**. Fournir :  
- les **getters** et **setters** pour chaque attribut  
- une méthode `calculMoyenne()` qui retourne la moyenne des trois notes  
- une méthode `afficher()` qui affiche toutes les informations de l’étudiant  

---
### Résultat attendu :

```bash
Nom : Lamia
CIN : AB123456
Notes : 14 | 16 | 18
Moyenne : 16

```

## Exemple d’exécution (image)

Voici un exemple de l'exécution du programme (screenshot) :

![Exécution du programme](execution.PNG)



#  Exercice 2 : Association Étudiant – Filière

##  Objectif pédagogique

Modéliser une **association simple 1 à 1** entre un étudiant et sa filière, en utilisant l'encapsulation et les méthodes d'accès en C++.

---

##  Énoncé
Créer deux classes :  

1. **Etudiant** : avec les attributs
   - `nom` (string)
   - `cin` (string)
   - `note` (float)  
   et des **getters/setters** ainsi qu'une méthode `afficher()`.

2. **Filiere** : avec les attributs
   - `nomFiliere` (string)
   - `etudiant` (objet Etudiant)  
   et des méthodes `setEtudiant()` et `afficher()`, qui affiche le nom de la filière et les informations de l’étudiant inscrit.

---

## Résultat attendu

```bash
Filière : Génie Informatique
Étudiant : Yassine (CIN: C78912) - Note : 15.5

```
## Exemple d’exécution (image)

Voici un exemple de l'exécution du programme (screenshot) :

![Exécution du programme](execution.PNG)
## UML – Association

``` lua
+--------------------+        +-----------------------------+
|      Filiere       |<>------|          Etudiant           |
+--------------------+        +-----------------------------+
| - nomFiliere       |        | - nom    : string           |
| - etudiant         |        | - cin    : string           |
+--------------------+        | - note   : float            |
| + setNomFiliere()  |        | + get/set pour chaque champ |
| + setEtudiant()    |        | + afficher()                |
| + afficher()       |        +-----------------------------+
+--------------------+

```

##  Auteur
**Salma Lakhal**  
École Normale Supérieure de Marrakech  
Année universitaire : 2025
    
