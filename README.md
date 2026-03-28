## Relational-Word-Dictionary-C-Desktop-Application

This project is a desktop application developed in **C++ Builder (RAD Studio)** that implements an interactive dictionary. The application utilizes Object-Oriented Programming (OOP) to manage words, definitions, synonyms, and antonyms through a graphical user interface.

### Features

* **Comprehensive Details:** Each word can be associated with a definition, a list of synonyms, and a list of antonyms.
* **Advanced Search:** * Search for a word by its exact text.
    * Search by synonyms.
    * Search by antonyms.
* **Graphical Interface:** A user-friendly VCL-based UI structured across multiple windows (`CodTitlu`, `CodDex`).

### Technologies Used

* **Language:** C++ (Standard ISO C++)
* **IDE:** Embarcadero RAD Studio (C++ Builder)
* **UI Framework:** VCL (Visual Component Library)
* **Data Structures:** `std::vector`, `std::string` from the STL (Standard Template Library)

### Project Architecture

The project is modular and relies on two main classes for its core business logic:

1.  **The `Cuvant` Class (`cuvant.h` / `cuvant.cpp`)**
    * Represents the core entity (a Word).
    * Stores: the text of the word, its definition, a `std::vector` of synonyms, and a `std::vector` of antonyms.
    * Provides getter and setter methods to manipulate and retrieve these details safely.

2.  **The `Dictionar` Class (`dictionar.h` / `dictionar.cpp`)**
    * Manages a collection (`std::vector`) of `Cuvant` objects.
    * Contains the logic for searching functionalities (`cautaCuvant`, `cautaSin`, `cautaAnt`).

Alongside the core logic, the application includes VCL forms (`CodTitlu`, `CodDex`) that link the graphical interface directly to the backend functionality.

### Images
**Title screen:**

<img width="812" height="506" alt="5ec6e62d-7b1c-4ede-8b8d-44f44f623d02" src="https://github.com/user-attachments/assets/181e230c-cf1d-4968-bc9c-6baf7de638e8" />


**Main word with definiton and synonyms:**

<img width="636" height="481" alt="444e0712-8a5a-49f1-8d3c-a6d4b982800f" src="https://github.com/user-attachments/assets/f08d8e6c-35b6-45e6-8416-8522ed0255b7" />


**Synonym:**

<img width="637" height="481" alt="2599af8f-11af-450d-bf28-2c4c203e105f" src="https://github.com/user-attachments/assets/db0f6747-c4ec-446d-9515-bb5c3f49d3cc" />



**Antonym:**


<img width="637" height="479" alt="db7aa8a6-63eb-44fe-8f4b-0d4709f65763" src="https://github.com/user-attachments/assets/9f95fbb8-1b11-4504-874a-259bd6f9a1b7" />



### Contributions
This is an educational/personal project.
